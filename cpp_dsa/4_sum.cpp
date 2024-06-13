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
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                int k = j + 1;
                int l = nums.size() - 1;
                while (k < l)
                {
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target)
                    {
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while (k < l && nums[k] == nums[k - 1])
                        {
                            k++;
                        }
                        while (k < l && nums[l] == nums[l + 1])
                        {
                            l--;
                        }
                    }
                    else if (sum < target)
                    {
                        k++;
                    }
                    else
                    {
                        l--;
                    }
                }
            }
        }
        for (auto quadruplets : s)
        {
            output.push_back(quadruplets);
        }
        return output;
    }
};


// Better Approach - Using Hashset

// vector<vector<int>> fourSum(vector<int> &nums, int target)
// {
//     int n = nums.size(); // size of the array
//     set<vector<int>> st;

//     // checking all possible quadruplets:
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             set<long long> hashset;
//             for (int k = j + 1; k < n; k++)
//             {
//                 // taking bigger data type
//                 // to avoid integer overflow:
//                 long long sum = nums[i] + nums[j];
//                 sum += nums[k];
//                 long long fourth = target - sum;
//                 if (hashset.find(fourth) != hashset.end())
//                 {
//                     vector<int> temp = {nums[i], nums[j], nums[k], (int)(fourth)};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 // put the kth element into the hashset:
//                 hashset.insert(nums[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }



// Brute Force - O(n^4)TC

// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int i,j,k,l;
//         int n = nums.size();
//         vector<int> arr1;
//         vector<vector<int>> ans;
//         for(i=0; i<n-3; i++){
//             for(j=i+1; j<n-2; j++){
//                 for(k=j+1; k<n-1; k++){
//                     for(l=k+1; l<n; l++){
//                         if(nums[i] + nums[j] + nums[k] + nums[l] == target){
//                             arr1.clear();
//                             arr1.push_back(nums[i]);
//                             arr1.push_back(nums[j]);
//                             arr1.push_back(nums[k]);
//                             arr1.push_back(nums[l]);
//                         }
//                         sort(arr1.begin(),arr1.end());
//                         if(arr1.size() != 0){ans.push_back(arr1);}
//                     }
//                 }
//             }
//         }
//         sort(ans.begin(),ans.end());
//         for(i=0; i<ans.size(); i++){
//             if(i==0){
//                 continue;
//             }
//             else{
//                 if(ans[i] == ans[i-1]){
//                     ans.erase(ans.begin() + i);
//                     i--;
//                 }
//             }
//         }
//         return ans;
//     }
// };