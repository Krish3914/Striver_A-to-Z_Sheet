#include <bits/stdc++.h>
using namespace std;
vector<int> reversearray(vector<int> arr, int i, int j){
    if(i==j || i>j){
        return arr;
    }
    swap(arr[i],arr[j]);
    return reversearray(arr,i+1, j-1);
}
int main()
{
    int i,j;
    int n;
    cin>>n;
    vector<int>arr,arr1;
    for(i=0; i<n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    arr1 = reversearray(arr,0,arr.size()-1);
    for(i=0; i<arr1.size(); i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}