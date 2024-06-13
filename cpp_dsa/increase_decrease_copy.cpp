#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin>>n;
        vector<int>a,b;
        int num;
        for(int i=0; i<n; i++){
            cin>>num;
            a.push_back(num);
        }
        for (int i = 0; i < n+1; i++)
        {
            cin >> num;
            b.push_back(num);
        }
        int mi = INT_MAX;
        int count = 0;
        for(int i=0; i<n; i++){
            count += abs(a[i] - b[i]);
            mi = min(mi, abs(a[i] - b[n]));
        }
        for(int i=0; i<n; i++){
            if(a[i] == b[n]){
                mi = 0;
                break;
            }
        }
        mi += 1;
        cout<<count+mi<<endl;
        t--;
    }
    return 0;
}
