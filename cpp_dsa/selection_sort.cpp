#include<bits/stdc++.h>
using namespace std;

// selection sort keeps the smallest element at the 
// beginning of the array and pointer move forward to sort 
// the next cycle of the array 

void selectionSort(vector<int> &nums)
{
    // Write your code here.
    int i, j;
    int n = nums.size();
    for (i = 0; i < n - 1; i++)
    {
        int mi = INT_MAX;
        int ind = -1;
        for (j = i; j < n; j++)
        {
            if (nums[j] < mi)
            {
                mi = nums[j];
                ind = j;
            }
        }
        swap(nums[i], nums[ind]);
    }
}
int main(){
    vector<int> nums = {1,3,2,5,0};
    selectionSort(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}