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
    int t;
    cin >> t;
    while (t > 0)
    {
        string a,b;
        cin>>a>>b;
        char t = a[0];
        char s = b[0];
        a[0] = s;
        b[0] = t;
        cout<<a<<" "<<b<<endl;
        t--;
    }
    return 0;
}