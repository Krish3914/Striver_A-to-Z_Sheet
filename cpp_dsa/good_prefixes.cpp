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
        vector<int>arr;
        int num;
        for(int i=0; i<n; i++){
            cin>>num;
            arr.push_back(num);
        }
        int count = 0;
        vector<int>ar;
        for(int i=0; i<n; i++){
            ar.push_back(arr[i]);
            sort(ar.begin(),ar.end());
            if(i==0){
                if(ar[0]==0){
                    count++;
                }
            }
            else{
                long long sum = 0;
                for(int j=0; j<ar.size()-1; j++){
                    sum+=ar[j];
                }
                if(sum==ar[ar.size()-1]){
                    count++;
                }
            }
        }
        cout<<count<<endl;
        t--;
    }
    return 0;
}