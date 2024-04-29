#include <bits/stdc++.h>
using namespace std;

// reverse quick sort 

int partition(vector<int> &nums, int low, int high){
    int pivot = nums[low];
    int i = low,j = high;
    while(i<j){
        while(nums[i]>=pivot && i<=high-1){
            i++;
        }
        while(nums[j]<pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[low],nums[j]);
    return j;
}

void quickSort(vector<int> &nums, int low, int high){
    if(low<high){
        int part = partition(nums,low,high);
        quickSort(nums,low,part-1);
        quickSort(nums,part+1,high);
    }
}

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    quickSort(nums, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}