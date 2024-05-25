//Kadane Algorithm is used to find the maximum sum from the subarray.

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int i, j;
        int n = nums.size();
        int ma = INT_MIN;
        // Kadane's Algorithm
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += nums[i];
            ma = max(ma, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return ma;

        /* Better Approach not optimal*/
        // for(i=0; i<n; i++){
        //     int sum = 0;
        //     for(j=i; j<n; j++){
        //         sum+=nums[j];
        //         ma = max(ma,sum);
        //     }
        // }
        return ma;
    }
};