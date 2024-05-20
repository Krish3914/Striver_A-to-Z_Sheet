#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y;
        cin>>x>>y;
        cout<<min(x,y)<<" "<<max(x,y)<<endl;
        t--;
    }
    return 0;
}