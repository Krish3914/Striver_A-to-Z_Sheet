#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int i,j;
        int n;
        cin>>n;
        string b;
        cin>>b;
        set<char>st;
        for(auto k:b){
            st.insert(k);
        }
        map<char,int>mp;
        vector<char>arr;
        int ind = 1;
        for(auto k:st){
            arr.push_back(k);
            mp[k] = ind++;
        }
        for(i=0; i<b.size(); i++){
            b[i] = arr[arr.size()-mp[b[i]]];
        }
        cout<<b<<endl;
        t--;
    }
    return 0;
}
