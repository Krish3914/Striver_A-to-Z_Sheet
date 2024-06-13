#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        // cout<<"hi";
        int n,f,k;
        cin>>n>>f>>k;
        vector<int>arr;
        int num;
        for(int i=0; i<n; i++){
            cin>>num;
            arr.push_back(num);
        }
        int nu = arr[f];
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        bool c1 = false,c2 = false;
        while(k>0){
            if(arr[0] == nu){
                c1 = true;
            }
            arr.erase(arr.begin()+0);
            k--;
        }
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == nu){
                c2 = true;
                break;
            }
        }
        if(c1==true && c2==true){
            cout<<"MAYBE"<<endl;
        }
        else if(c1==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}