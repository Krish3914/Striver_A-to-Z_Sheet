#include <bits/stdc++.h>
using namespace std;
// void pat1(int n){
//     int i,j;
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
// }
void pat2(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin >> n;
        pat2(n);
        t--;
    }
    return 0;
}