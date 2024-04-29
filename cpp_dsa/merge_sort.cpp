#include<bits/stdc++.h>
using namespace std;

// Merge sort works on Divide and Merge

// TC = O(nlogn)
// SC = O(n)   due to extra temp array of size n 

void merge(vector<int> &nums, int l, int mid, int r)
{
    // cout<<l<<" "<<mid<<" "<<r<<endl;
    vector<int> temp;
    int left = l;
    int right = mid + 1;
    while (left <= mid && right <= r)
    {
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
    }
    if (left <= mid)
    {
        for (int i = left; i < mid + 1; i++)
        {
            temp.push_back(nums[i]);
        }
    }
    if (right <= r)
    {
        for (int i = right; i < r + 1; i++)
        {
            temp.push_back(nums[i]);
        }
    }
    // for(int i=0; i<temp.size(); i++){
    //     cout<<temp[i]<<" ";
    // }
    // cout<<endl;
    int ind = 0;
    for (int i = l; i <=r; i++)
    {
        nums[i] = temp[ind++];
    }
}

vector<int> mergeSort(vector<int> &nums, int l, int r)
{
    // Write Your Code Here
    if (l >= r)
    {
        return nums;
    }
    int mid = (l + r) / 2;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    merge(nums, l, mid, r);
    return nums;
}

int main(){
    vector<int>nums;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        int num;
        cin>>num;
        nums.push_back(num);
    }
    nums = mergeSort(nums,0,nums.size()-1);
    for (int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}