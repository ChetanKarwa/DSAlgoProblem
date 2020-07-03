// Links : https://leetcode.com/problems/longest-consecutive-sequence/

/*
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

Your algorithm should run in O(n) complexity.
*/


//APPROACH ONE

int longestConsecutive(vector<int>& nums) {
    unordered_map<int,int> m;
    int ans = 0;
    for(int i = 0;i<nums.size();i++)
    {
        if(m[nums[i]]!=0)
            continue;
        m[nums[i]] = 1 + m[nums[i]+1];
        int k = nums[i]-1;
        while(m[k]!=0)
        {
            m[k]+=m[nums[i]];
            k--;
        }
        ans = max(ans,m[k+1]);
    }
    return ans;
}

//=======================BETTER APPROACH=========================//

int longestConsecutive(vector<int>& nums) {
    if(!nums.size())
        return 0;
   unordered_set <int> s;
    for (int i=0;i<nums.size();i++)
        s.insert(nums[i]);
    int ans=0;
    for (int i=0;i<nums.size();i++)
    {
        if(s.find(nums[i]-1)==s.end())
        {
            int currnum=nums[i];
            int sum=1;
            while(s.find(currnum+1)!=s.end())
                sum++,currnum++;
            ans=max(ans,sum);
        }
    }
    return ans;
}
