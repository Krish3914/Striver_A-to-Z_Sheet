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
        int num;
        vector<int>arr;
        for(int i=0; i<n; i++){
            cin>>num;
            arr.push_back(num);
        }
        unordered_map<int,int>mp;
        int i;
        for(i=0; i<n; i++){
            mp[arr[i]]++;
        }
        if(mp.size()<=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int s = 0;
            int e = n-1;
            string st;
            for(i=0; i<n; i++){
                if(i==n/2){
                    st+='B';
                }
                else{
                    st+='R';
                }
            }
            cout<<st<<endl;
        }
        t--;
    }
    return 0;
}