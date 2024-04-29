#include<bits/stdc++.h>
using namespace std;

// In insertion sort we just check the current element to
// just previous to that so that the element should 
// positioned at the currect position in  the array.


// void insertion_sort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 1; i++)
//     {
//         int j = i;
//         while (j > 0 && arr[j - 1] > arr[j])
//         {
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }

//     cout << "After Using insertion sort: " << "\n";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "\n";
// }

void insertionSort(int nums[], int n)
{
    // write your code here
    int i, j;
    for (i = 1; i < n; i++)
    {
        int num = nums[i];
        for (j = i; j > 0; j--)
        {
            if (nums[j] >= nums[j - 1])
            {
                break;
            }
            else
            {
                int temp = nums[j];
                nums[j] = nums[j - 1];
                nums[j - 1] = temp;
                // swap(nums[j],nums[j-1]);
            }
        }
    }
}
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "Before Using insertion Sort: " << endl;
    
    // cout << endl;

    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


// int main(){
//     int n;
//     int nums[n];
//     cin>>n;
//     int num;
//     for(int i=0; i<n; i++){
//         cin>>nums[i];
//     }
//     insertionSort(nums[], n);
//     for(int i=0; i<n; i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }