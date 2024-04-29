#include<bits/stdc++.h>
using namespace std;

// Divide and Conquer Algorithm.

// 1. choose a pivot element
// 2. place it in the correct position without making a new array.
// 3. place the elements smaller to it in left of the pivot.
// 4. place the elements greater than pivot elem to the right of the pivot element
// 5. then call the quickSort recursively.

// TC = O(nlogn)
// SC = O(1)

int partition(vector<int> &nums, int low, int high){
    int pivot = nums[low];
    int i = low;
    int j = high;
    while(i<j){
        while(nums[i]<=pivot && i<=high){
            i++;
        }
        while(nums[j]>pivot && j>=low){
            j--;
        }
        if(i<j){
            swap(nums[i], nums[j]);
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

int main(){
    vector<int>nums;
    int n;
    cin>>n;
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        nums.push_back(num);
    }
    quickSort(nums,0,n-1);
    for(int i=0; i<n; i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}