//optimal approach such that space complexity decreases.
class Solution
{
public:
    void swap(int ind, int i, vector<int> &nums)
    {
        int t = nums[ind];
        nums[ind] = nums[i];
        nums[i] = t;
        return;
    }
    void perm(int ind, vector<int> &nums, vector<vector<int>> &ans)
    {
        if (ind == nums.size())
        {
            vector<int> arr;
            for (int i = 0; i < nums.size(); i++)
            {
                arr.push_back(nums[i]);
            }
            ans.push_back(arr);
            return;
        }
        for (int i = ind; i < nums.size(); i++)
        {
            swap(ind, i, nums);
            perm(ind + 1, nums, ans);
            swap(ind, i, nums);
        }
    }
    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        int i;
        vector<vector<int>> ans;
        perm(0, nums, ans);
        sort(ans.begin(), ans.end());
        if (ans.size() <= 1)
        {
            return ans;
        }
        for (i = 1; i < ans.size(); i++)
        {
            if (ans[i] == ans[i - 1])
            {
                ans.erase(ans.begin() + i);
                i--;
            }
        }
        return ans;
    }
};