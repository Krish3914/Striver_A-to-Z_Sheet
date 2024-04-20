#include <bits/stdc++.h>
using namespace std;

//ascending from 1 to n using backtrack
// void printl(int n){
//     if(n<1){
//         return;
//     }
//     printl(n-1);
//     cout<<n<<" ";
// }

// descending from n to 1 using backtrack
void printl(int i,int n){
    if(i>n){
        return;
    }
    printl(i+1,n);
    cout<<i<<" ";
}

int main()
{
    int n;
    cin>>n;
    printl(1,n);
    return 0;
}