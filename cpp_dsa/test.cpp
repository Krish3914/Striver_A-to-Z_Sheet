// when a function calls itself is recursion untill a specified condition met.
// the stop condition is refer as Base condition.
#include <bits/stdc++.h>
using namespace std;
// void print1(){
//     cout<<1<<endl;
//     print1();
// }
int count = 0;
// without base condition
//  void cnt(){
//      cout<<count<<"\n";
//      cnt();
//  }
// with base condition condition upto 4
void cnt()
{
    if (count == 4)
    {
        return;
    }
    cout << count << endl;
    count++;
    cnt();
}
int main()
{
    // print1();
    cnt();
    return 0;
}