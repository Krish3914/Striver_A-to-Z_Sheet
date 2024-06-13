#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        // cout<<"hi";
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        unordered_map<char,int>mp;
        for (char j = 'A'; j <= 'G'; j++)
        {
            mp[j] = 0;
        }
        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }
        int cnt = 0;
        for(char j = 'A'; j<='G'; j++){
            if(mp[j]<m){
                cnt+=(m-mp[j]);
            }
        }
        cout<<cnt<<endl;
        t--;
    }
    return 0;
}