//to count the occurance of element in an array in an optimal manner without using extra space

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
    int majorityElement(vector<int> &nums)
    {
        int i;
        // Moore's Voting Algo
        int cnt = 0;
        int element;
        for (i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                element = nums[i];
            }
            else
            {
                if (nums[i] == element)
                {
                    cnt++;
                }
                else
                {
                    cnt--;
                }
            }
        }
        int count = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element)
            {
                count++;
            }
        }
        if (count > nums.size() / 2)
        {
            return element;
        }
        return -1;

        // map approach:  - Optimal way
        //  unordered_map<int,int>mp;
        //  for(auto k:nums){
        //      mp[k]++;
        //      if(mp[k]>nums.size()/2){
        //          return k;
        //      }
        //  }
        //  return -1;
    }
};