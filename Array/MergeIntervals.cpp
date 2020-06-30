//Link : https://leetcode.com/problems/merge-intervals/

//Given a collection of intervals, merge all overlapping intervals.

vector<vector<int>> merge(vector<vector<int>>& interval) {
        sort(interval.begin(),interval.end());
        vector<vector<int>> temp;
        if(interval.size()==0)
            return temp;
        temp.push_back(interval[0]);
        for(int i = 1;i<interval.size();i++)
        {
            if(temp.back()[1]>=interval[i][0])
                temp.back()[1] = max(temp.back()[1],interval[i][1]);
            else
                temp.push_back(interval[i]);
        }
        return temp;
    }
