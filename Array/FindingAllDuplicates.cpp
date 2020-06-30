/*Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.
Find all the elements that appear twice in this array.
 Find all duplicates in o(1) space and o(n) time*/

 // approach 1
 vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        int n=nums.size();
        for (int i=0;i<n;i++)
        {
            if(nums[abs(nums[i])-1]>=0)
            {
                nums[abs(nums[i])-1]=-1*nums[abs(nums[i])-1];
            }
            else
            {
                ans.push_back(abs(nums[i]));
            }
        }
        return ans;
    }

// approach 2
vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
            else
                i++;
        }
        for (int i=0;i<n;i++)
        {
            if(nums[i]-1!=i)
                ans.push_back(nums[i]);
        }
        return ans;
    }
