#include <bits/stdc++.h>
using namespace std;

// to count number of digits in a number
// int n = (int)(log10(num) + 1);


void extract(int n){
    //count number of digits
    int num = (int)(log10(n) + 1);
    cout<<num<<"\n"<<endl;

    //digits in the number
    while(n>0){
        int num = n%10;
        cout<<num<<" ";
        n/=10;
    }
}
int main()
{
    int n;
    cin>>n;
    extract(n);
    return 0;
}