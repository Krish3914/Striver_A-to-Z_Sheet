#include <bits/stdc++.h>
using namespace std;
//passbyvalue
int passbyvalue(int n1){
    n1+=5;
    cout<<n1<<endl;
    n1+=4;
    cout<<n1<<endl;
    cout<<"\n";
    return 0;
}
//passbyreference
int passbyreference(int &n2){
    n2 += 5;
    cout << n2 << endl;
    n2 += 4;
    cout << n2 << endl;
    cout << "\n";
    return 0;
}
int main()
{
    int n1;
    cin>>n1;
    passbyvalue(n1);
    cout << n1<<endl;
    cout<<"\n";
    passbyreference(n1);
    cout<<n1;
    return 0;   
}