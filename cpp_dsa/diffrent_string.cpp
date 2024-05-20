#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        if(mp.size()>1){
            cout<<"YES"<<endl;
            int j = 0;
            for(int i=1; i<s.size(); i++){
                if(s[i]!=s[j]){
                    swap(s[i],s[j]);
                    break;
                }
            }
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}