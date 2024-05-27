static const int __ = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return 0;
}();
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int i, j;
        vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        for (i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        nums.clear();
        int pi = 0;
        int ni = 0;
        for (i = 0; i < n; i += 2)
        {
            nums.push_back(pos[pi++]);
            nums.push_back(neg[ni++]);
        }
        return nums;
    }
};