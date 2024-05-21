#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int i, j;
        int m, x;
        cin >> m >> x;
        // vector<vector<int>> arr1;
        vector<int> arr;
        for (i = 0; i < m; i++)
        {
            int c;
            cin>>c;
            arr.push_back(c);
        }
        int balance = 0;
        int happiness = 0;
        for (i = 0; i < m; i++)
        {
            if (i == 0)
            {
                if (arr[0] == 0)
                {
                    happiness += 1;
                }
            }
            else
            {
                if (balance >= arr[i])
                {
                    happiness += 1;
                    balance -= arr[i];
                }
            }
            balance += x;
        }
        cout << happiness << endl;
        t--;
    }
    return 0;
}
