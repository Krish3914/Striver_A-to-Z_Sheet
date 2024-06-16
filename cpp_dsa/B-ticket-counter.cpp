#include <bits/stdc++.h>
using namespace std;
static const int __ = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return 0;
}();
int main()
{
    int n,a;
    cin>>n>>a;
    vector<int>arr;
    int num;
    for(int i=0; i<n; i++){
        cin>>num;
        arr.push_back(num);
    }
    int time = 0;
    vector<int>ans(n);
    for(int i=0; i<n; i++){
        if(arr[i]<=time){
            time+=a;
            ans[i] = time;
        }
        else{
            time = arr[i]+a;
            ans[i] = time;
        }
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}