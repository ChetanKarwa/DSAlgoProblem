// Link : https://leetcode.com/problems/excel-sheet-column-number/

/*
Given a column title as appear in an Excel sheet, return its corresponding column number.
*/


// Simple DLD approach
long long int titleToNumber(string s) {
    long long int ans  = 0;
    for(int i = 0;i<s.length();i++)
    {
        ans = ans*26 + (s[i]-64);
    }
    return ans;
}
