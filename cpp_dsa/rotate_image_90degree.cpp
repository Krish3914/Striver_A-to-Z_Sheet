// Better/ Optimal Approach:  TC: -> O(n*n)transpose + O(n*n)reverse        SC -> O(1) b/c inplace
//  by observation we get that rotate by 90degree is the combination of 2 operations:
//  1. Transpose the Matrix
//  2. Reverse each row of the transposed matrix we get the result.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void transpose(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = i; j < n; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }
        return;
    }
    void reverse_rows(vector<vector<int>> &mat)
    {
        for (int i = 0; i < mat.size(); i++)
        {
            reverse(mat[i].begin(), mat[i].end());
        }
        return;
    }
    void rotate(vector<vector<int>> &mat)
    {
        int i, j;
        int n = mat.size();
        transpose(mat);
        reverse_rows(mat);
        return;
    }
};



//Brute Force:        TC: -> O(n^2)            SC ->  O(n^2)
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int i, j;
        int n = matrix.size();
        vector<vector<int>> ans;
        vector<int> arr;
        for (i = 0; i < n; i++)
        {
            arr.clear();
            for (j = 0; j < n; j++)
            {
                arr.push_back(-1);
            }
            ans.push_back(arr);
        }
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                ans[j][n - 1 - i] = matrix[i][j];
            }
        }
        matrix = ans;
        return;
    }
};