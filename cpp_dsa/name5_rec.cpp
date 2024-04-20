#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
void printname(int n, string name){
    if(cnt==n){
        return;
    }
    cout<<name<<endl;
    cnt++;
    printname(n,name);
}
int main()
{
    int n;
    cin>>n;
    string name;
    cin>>name;
    printname(n,name);
    return 0;
}