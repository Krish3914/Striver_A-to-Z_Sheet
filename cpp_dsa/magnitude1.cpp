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
        long long int c=0;
        int num;
        for(int i=0; i<n; i++){
            cin>>num;
            arr.push_back(num);
        }
        for(int i=0; i<n; i++){
            if(i==0){
                c+=arr[i];
            }
            else if ((arr[i] >= 0 && arr[i - 1] >= 0) || (arr[i] < 0 && arr[i - 1] < 0)){
                c+=arr[i];
            }
            else{
                c = abs(c);
                c+=arr[i];
            }
        }
        c = abs(c);
        cout<<c<<endl;
        t--;
    }
    return 0;
}