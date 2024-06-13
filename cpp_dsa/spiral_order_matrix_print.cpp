//print the elements of a 2D matrix in spiral form.
// RIGHT -> Down -> Left -> Up.  (untill all elements traversed.)

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &m)
    {
        int i;
        int n = m.size();
        int n1 = m[0].size();
        int left = 0;
        int right = n1 - 1;
        int top = 0;
        int bottom = n - 1;
        vector<int> ans;
        while (left <= right && top <= bottom)
        {
            if (top <= bottom)
            {
                for (i = left; i <= right; i++)
                {
                    ans.push_back(m[top][i]);
                }
                top++;
            }
            if (left <= right)
            {
                for (i = top; i <= bottom; i++)
                {
                    ans.push_back(m[i][right]);
                }
                right--;
            }
            if (top <= bottom)
            {
                for (i = right; i >= left; i--)
                {
                    ans.push_back(m[bottom][i]);
                }
                bottom--;
            }
            if (left <= right)
            {
                for (i = bottom; i >= top; i--)
                {
                    ans.push_back(m[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};