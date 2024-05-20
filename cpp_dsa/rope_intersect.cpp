#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a <= c && a >= d) || (a <= d && a >= c))
        {
            cout << "YES" << endl;
        }
        else if ((b <= c && b >= d) || (b <= d && b >= c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}