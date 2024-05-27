//INtuition: OPTIMAL Approach
/*
1. longer prefix match
see from last where the nums[i]<nums[i+1] because this is the position we can increase the number greater than that number

2. to have number just greater than that we should find the number that is just greater than in the arr start from the index break untill last to have close.

3. sort the remaining array after the ind because we want the number just greater than that.
*/

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        if (nums.size() == 1)
        {
            return;
        }
        int i, j;
        int ind = -1;
        for (i = nums.size() - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind = i;
                break;
            }
        }
        cout << ind << " ";
        if (ind == -1)
        {
            sort(nums.begin(), nums.end());
            return;
        }
        for (i = ind + 1; i < nums.size(); i++)
        {
            if (nums[i] > nums[ind])
            {
                j = i;
            }
        }
        cout << j << " ";
        swap(nums[ind], nums[j]);
        sort(nums.begin() + ind + 1, nums.end());
        return;
    }
};
// class Solution
// {
// public:
//     void nextPermutation(vector<int> &nums)
//     {
//         next_permutation(nums.begin(), nums.end());
//         return;
//     }
// };