// when a function calls itself is recursion untill a specified condition met.
// the stop condition is refer as Base condition.
#include<bits/stdc++.h>
using namespace std;
// void print1(){
//     cout<<1<<endl;
//     print1();
// }
int cnt = 0;
//without base condition
// void cnt(){
//     cout<<count<<"\n";
//     cnt();
// }
//with base condition condition upto 4
void print(){
    if(cnt==4){
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    print();
}
int main()
{
    // print1();
    print();
    return 0;
}