// if there are n elements, then are total of n! permuations of them.
// if there are 3 elements:  total 6 permutations possible.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void perm(vector<int> &nums, vector<vector<int>> &ans, vector<int> &st, unordered_map<int, bool> &mp)
    {
        if (st.size() == nums.size())
        {
            ans.push_back(st);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp[nums[i]] == 0)
            {
                mp[nums[i]] = true;
                st.push_back(nums[i]);
                perm(nums, ans, st, mp);
                mp[nums[i]] = false;
                st.erase(st.begin() + st.size() - 1);
            }
        }
    }
    vector<vector<int>> permute(vector<int> &nums)
    {
        int i;
        vector<vector<int>> ans;
        vector<int> st;
        unordered_map<int, bool> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = false;
        }
        // for(auto k:mp){
        //     cout<<k.first<<" "<<k.second<<";"<<" ";
        // }
        perm(nums, ans, st, mp);
        return ans;
    }
};