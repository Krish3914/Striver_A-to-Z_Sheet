#include<bits/stdc++.h>
using namespace std;

// bubble sort have the largest element of the complete 
// array at the last of the array and decrease pointer the 
// sort the next less cycle of the array 


void bubbleSort(vector<int> &nums, int n)
{
    // write your code here
    int i, j;
    int didswap = 0;
    for (i = n - 1; i >= 0; i--)
    {
        didswap = 0;
        for (j = 0; j < i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                didswap = 1;
            }
        }
        if(didswap == 0){
            break;
        }
    }
}
int main(){
    vector<int>nums;
    int n;
    cin>>n;
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        nums.push_back(num);
    }
    bubbleSort(nums,n);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}