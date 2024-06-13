class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int i, j;
        int n = nums.size();
        int presum = 0;
        int count = 0;
        unordered_map<int, int> mp;
        for (i = 0; i < n; i++)
        {
            presum += nums[i];
            if (presum == k)
            {
                count++;
            }
            if (mp[presum - k] > 0)
            {
                count += mp[presum - k];
            }
            mp[presum]++;
        }
        return count;
    }
};