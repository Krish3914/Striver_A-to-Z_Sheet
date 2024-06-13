#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin>>n;
        int tot;
        int maxi = INT_MIN;
        int x;
        for(int i=2; i<=n; i++){
            tot = 0;
            if(isPrime(i)){
                int num = i;
                int s = 2;
                while(num<=n){
                    tot+=num;
                    num = i * s;
                    s++;
                }
                if(tot>maxi){
                    x = i;
                    maxi = tot;
                }
            }
        }
        cout<<x<<endl;
        t--;
    }
    return 0;
}