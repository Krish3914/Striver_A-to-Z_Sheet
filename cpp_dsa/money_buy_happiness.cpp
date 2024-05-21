#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int i,j;
        int m,x;
        cin>>m>>x;
        vector<vector<int>>arr1;
        vector<int>arr(2);
        for(i=0; i<m; i++){
            int c,h;
            cin>>c>>h;
            arr.clear();
            arr.push_back(c);
            arr.push_back(h);
            arr1.push_back(arr);
        }
        int balance = 0;
        int happiness = 0;
        for(i=0; i<m; i++){
            if(i==0){
                if(arr1[0][0]==0){
                    happiness+=arr1[0][1];
                }
            }
            else{
                if(balance>=arr1[i][0]){
                    happiness += arr1[i][1];
                    balance -= arr1[i][0];
                }
            }
            balance+=x;
        }
        cout<<happiness<<endl;
        t--;
    }
    return 0;
}
