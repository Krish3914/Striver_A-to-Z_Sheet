#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (n / i != i)
            {
                count++;
            }
        }
        if (count > 2)
        {
            break;
        }
    }
    if (count == 2)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        // cout<<"hi";
        int n;
        cin>>n;
        // for(int i=1; i*i<=n; i++){
        //     if(n%i==0 && is_prime(i)){
        //         cout<<i<<" ";
        //     }
        //     if(n/i!=i && is_prime(n/i)){
        //         cout<<n/i<<" ";
        //     }
        // }
        // cout<<endl;

        //School and Optimised method
        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                cout<<i<<" ";
                while(n%i==0){
                    n/=i;
                }
            }
        }
        if(n!=1){
            cout<<n<<endl;
        }
        t--;
    }
    return 0;
}

// Press (ctrl + shift + B) to run on VS-code