#include <bits/stdc++.h>
using namespace std;

//parametised
// int sum = 0;
// void printsum(int n){
//     if(n<1){
//         cout<<sum;
//         return;
//     }
//     sum+=n;
//     printsum(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     printsum(n);
//     return 0;
// }

//function call
// int sum = 0;
int printsum(int n){
    if(n==0){
        return 0;
    }
    // sum+=n;
    return n + printsum(n-1);
}
int main(){
    int n;
    cin>>n;
    int s = printsum(n);
    cout<<s;
    return 0;
}