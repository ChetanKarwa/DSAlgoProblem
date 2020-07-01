//Link : https://leetcode.com/problems/next-permutation/submissions/

/*Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.
If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).
The replacement must be in-place and use only constant extra memory.*/

void nextPermutation(vector<int>& nums) {
    int i = nums.size()-1;
        while(i>0&&nums[i]<=nums[i-1])
            i--;
        if(i==0)
        {
            sort(nums.begin(),nums.end());
        }
        else
        {
            i--;
            int j=i+1;
            while(j<nums.size()-1&&nums[i]<nums[j+1])
                j++;
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            sort(nums.begin()+i+1,nums.end());
        }
    }
