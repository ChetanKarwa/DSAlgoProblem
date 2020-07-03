// Links : hhttps://leetcode.com/problems/longest-substring-without-repeating-characters/

/*
Given a string, find the length of the longest substring without repeating characters.
*/

int lengthOfLongestSubstring(string s) {
    unordered_map <char,int> m;
    if(s.length()==0)
        return 0;
    int same = 0,ans = 1;
    for(int i = 0;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())
        {
            if(m[s[i]]+1>same)
            {
                ans = max(ans,i-same);
                same = m[s[i]]+1;
            }
        }
                m[s[i]] = i;
    }
    if(ans<s.length()-same)
        ans = s.length()-same;
    return ans;
}
