// Link : https://leetcode.com/problems/find-the-duplicate-number/

/*Given an array nums containing n + 1 integers where each integer is between 1 and n (inclusive), prove that at least one duplicate number must exist.
 Assume that there is only one duplicate number, find the duplicate one.*/

 ////////////////////////SOLN///////////////////////////////////

 int findDuplicate(vector<int>& num) {
        int slow = num[0];
        int fast = num[0];
        slow = num[slow];
        fast  = num[num[fast]];
        while(slow!=fast)
        {
            slow = num[slow];
            fast  = num[num[fast]];
        }
        fast = num[0];
        while(slow!=fast)
        {
            fast = num[fast];
            slow = num[slow];
        }
        return fast;
    }
