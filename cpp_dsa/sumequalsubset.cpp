class Solution
{
private:
    bool checkSubsetSumExist(const vector<int> &arr, const int &subsetSumToFind, int ind, int currentSum, vector<vector<int>> &dp)
    {
        if (ind < 0)
        {
            if (currentSum == subsetSumToFind)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        if (dp[ind][currentSum] != -1)
        {
            return dp[ind][currentSum];
        }

        bool take = false;
        if (arr[ind] <= subsetSumToFind)
        {
            take = checkSubsetSumExist(arr, subsetSumToFind, ind - 1, currentSum + arr[ind], dp);
        }
        if (take)
        {
            return true;
        }
        bool notTake = checkSubsetSumExist(arr, subsetSumToFind, ind - 1, currentSum, dp);
        if (notTake)
        {
            return true;
        }
        return dp[ind][currentSum] = take || notTake; // can we get answer by any one of them
    }

public:
    bool canPartition(vector<int> &arr)
    {
        int n = arr.size();
        int sumOfArray = 0;

        for (auto &num : arr)
        {
            sumOfArray += num;
        }

        if (sumOfArray & 1)
        { // sum is odd cannot be partioned into 2 subarrays with equal sum
            // cout << "false in odd case";
            return false;
        }

        int subsetSumToFind = sumOfArray >> 1;
        int currnetSum = 0;
        vector<vector<int>> dp(n, vector<int>(sumOfArray + 1, -1));
        return checkSubsetSumExist(arr, subsetSumToFind, n - 1, currnetSum, dp);
    }
};