//3type of problems:

// 1. finding element given nth row and mth column
        // (row-1)C(col-1) is the formula for getting the element at row (row) and column (col).

// 2. find nth row of the pascal triangle
// 3. print complete pascal triangle given n.

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
        vector<vector<int>> generate(int numRows)
        {
                int i, j;
                int n = numRows;
                vector<int> arr;
                vector<vector<int>> ans;
                for (i = 1; i <= n; i++)
                {
                        int row = i;
                        arr.clear();
                        int num = 1;
                        arr.push_back(1);
                        for (j = 1; j < i; j++)
                        {
                                num *= (row - j);
                                num /= j;
                                arr.push_back(num);
                        }
                        ans.push_back(arr);
                }
                return ans;
                // vector<int>arr,arr1;
                // int k;
                // vector<vector<int>> result;
                // // for(i=0; i<n; i++){
                //     // k=0;
                // for(j=1; j<=n; j++){
                //     arr.clear();
                //     k=0;
                //     while(k<j){
                //         if(k==0 || k==j-1){
                //             arr.push_back(1);
                //         }
                //         else{
                //             arr.push_back(arr1[k-1] + arr1[k]);
                //         }
                //         // arr.push_back(1)
                //         k++;
                //     }
                //     arr1 = arr;
                //     result.push_back(arr);
                // }
                //     // result.push_back
                // // }
                // return result;
        }
};
