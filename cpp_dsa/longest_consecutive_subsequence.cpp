
#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int> &a)
{
    int n = a.size();
    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;
    // put all the array elements into set:
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }

    // Find the longest sequence:
    for (auto it : st)
    {
        // if 'it' is a starting number:
        if (st.find(it - 1) == st.end())
        {
            // find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end())
            {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

// static const int __ = []()
// {
//     std::ios::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     std::cout.tie(NULL);
//     return 0;
// }();
// class Solution
// {
// public:
//     int longestConsecutive(vector<int> &nums)
//     {
//         int i, j;
//         int n = nums.size();
//         int count = 1;
//         vector<int> arr;
//         sort(nums.begin(), nums.end());
//         for (i = 1; i < n; i++)
//         {
//             if (nums[i] == nums[i - 1] + 1)
//             {
//                 count++;
//                 continue;
//             }
//             else if (nums[i] == nums[i - 1])
//             {
//                 continue;
//             }
//             else
//             {
//                 arr.push_back(count);
//                 count = 1;
//             }
//         }
//         arr.push_back(count);
//         int ma;
//         if (nums.size() > 0)
//         {
//             ma = *max_element(arr.begin(), arr.end());
//         }
//         else
//         {
//             ma = 0;
//         }
//         return ma;
//     }
// };