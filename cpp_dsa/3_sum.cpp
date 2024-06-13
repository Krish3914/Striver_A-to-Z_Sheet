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
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int i, j, k;
        sort(nums.begin(), nums.end());
        int num;
        vector<vector<int>> ans;
        for (i = 0; i < nums.size() - 2; i++)
        {
            if (i > 0)
            {
                if (nums[i] == nums[i - 1])
                {
                    continue;
                }
            }
            j = i + 1;
            k = nums.size() - 1;
            while (j < k)
            {
                num = nums[i] + nums[j] + nums[k];
                if (num == 0)
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j - 1])
                    {
                        j++;
                    }
                    while (k > j && nums[k] == nums[k + 1])
                    {
                        k--;
                    }
                }
                else if (num < 0)
                {
                    j++;
                    // while(nums[j]==nums[j-1]){j++;}
                }
                else
                {
                    k--;
                    // while(nums[k]==nums[k+1]){k--;}
                }
            }
        }
        return ans;
    }
};

//         int i,j;
//         unordered_map<int,int>mp;
//         vector<vector<int>>ans;
//         if(nums.size()<3){
//             return ans;
//         }
//         set<vector<int>>st;
//         sort(nums.begin(),nums.end());
//         // vector<int>arr;
//         for(i=0; i<nums.size()-2; i++){
//             mp.clear();
//             for(j=i+1; j<nums.size(); j++){
//                 if(mp[(-1)*(nums[i] + nums[j])]>0){
//                     // arr = {nums[i],nums[j],(-1)*(nums[i] + nums[j])};
//                     // sort(arr.begin(),arr.end());
//                     st.insert({nums[i],(-1)*(nums[i] + nums[j]),nums[j]});
//                     // st.insert(arr);
//                 }
//                 mp[nums[j]]++;
//             }
//         }
//         for(auto z:st){
//             ans.push_back(z);
//         }
//         return ans;
