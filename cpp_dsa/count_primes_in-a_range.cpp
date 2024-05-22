//Givena a range from left to right (L-R)


#include <bits/stdc++.h>
using namespace std;

// void getSieve(vector<int> &aprime, int n)
// {
//     aprime[0] = 0;
//     aprime[1] = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         aprime[i] = 1;
//     }
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (aprime[i] == 1)
//         {
//             for (int j = i * i; j <= n; j += i)
//             {
//                 aprime[j] = 0;
//             }
//         }
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {
//         // cout<<"hi";
//         vector<vector<int>>queries;
//         int n;
//         cin>>n;
//         vector<int> arr(2);
//         for(int i=0; i<n; i++){
//             int num1,num2;
//             cin>>num1>>num2;
//             arr.clear();
//             arr.push_back(num1);
//             arr.push_back(num2);
//             queries.push_back(arr);
//         }
//         vector<int>aprime(pow(10,6));
//         getSieve(aprime, pow(10, 6));
//         int count;
//         for(int i=0; i<queries.size(); i++){
//             int l = queries[i][0];
//             int r = queries[i][1];
//             count = 0;
//             for(int j = l; j<=r; j++){
//                 if(aprime[j] == 1){
//                     count++;
//                 }
//             }
//             cout<<count<<" ";
//         }
//         t--;
//     }
//     return 0;
// }





//Aur Zyada optimise
//Use of prefix sum
// TC: O(Nlog(logN)) + O(Queries.size()) + O(N).

void getSieve(vector<int> &aprime, int n)
{
    aprime[0] = 0;
    aprime[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        aprime[i] = 1;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (aprime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                aprime[j] = 0;
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        // cout<<"hi";
        vector<vector<int>> queries;
        int n;
        cin >> n;
        vector<int> arr(2);
        for (int i = 0; i < n; i++)
        {
            int num1, num2;
            cin >> num1 >> num2;
            arr.clear();
            arr.push_back(num1);
            arr.push_back(num2);
            queries.push_back(arr);
        }
        vector<int> aprime(pow(10, 6));
        getSieve(aprime, pow(10, 6));
        int count = 0;
        for(int i=0; i<aprime.size(); i++){
            count+=aprime[i];
            aprime[i] = count;
        }
        for (int i = 0; i < queries.size(); i++)
        {
            int l = queries[i][0];
            int r = queries[i][1];
            cout << aprime[r]-aprime[l-1] << " ";
        }
        t--;
    }
    return 0;
}

// Press (ctrl + shift + B) to run on VS-code