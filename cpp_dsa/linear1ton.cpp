#include <bits/stdc++.h>
using namespace std;

//print 1 to n
// int cnt = 1;
// void printl(int n){
//     if(cnt == n+1){
//         return;
//     }
//     cout<<cnt<<" ";
//     cnt++;
//     printl(n);
// }

//print n to 1
void printll(int n, int i){
    if(n<i){
        return;
    }
    cout<<n<<" ";
    printll(n-1,i);
}
int main()
{
    int n;
    cin>>n;
    // printl(n);
    printll(n,1);
    return 0;
}