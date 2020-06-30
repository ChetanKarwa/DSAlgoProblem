//Link : https://leetcode.com/problems/merge-sorted-array/submissions/

/*Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
Note:
The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is equal to m + n) to hold additional elements from nums2.*/


void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
    n--;m--;
    while(n>=0)
    {
        if(m>=0&&num2[n]<num1[m])
            num1[(m--)+n+1] = num1[m];
        else
            num1[m+(n--)+1] = num2[n];
    }
}
