//Problem related to prime numbers
// Normally we find all prime numbers untill n as the complecity of O(sqrt(n) * sqrt(n)) as outside sqrt(n) is for traverse upto sqrt(n) and other sqrt(n) is to check prime or not

// So here comes this algorithm or pattern comes in as "Sieve of eratosthenes" where we check the prime_or_notprime as O(1);

#include <bits/stdc++.h>
using namespace std;


//function prime
// vector<int>aprime;
//this getSieve works in O(Nlog(logN)).

void prime(vector<int>& aprime, int n){
    aprime[0] = 0;
    aprime[1] = 0;
    for(int i=2; i<=n; i++){
        aprime[i] = 1;
    }
    // for(int i=2; i<=n; i++){
    //     if(aprime[i]==1){
    //         for(int j=2*i; j<=n; j+=i){
    //             aprime[j] = 0;
    //         }
    //     }
    // }

    //optimise
    for (int i = 2; i*i <= n; i++)
    {
        if (aprime[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                aprime[j] = 0;
            }
        }
    }
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
        vector<int>aprime(n+1);
        prime(aprime,n);
        for(int i=1; i<=n; i++){
            if(aprime[i] == 1){
                cout<<i<<" ";
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}

// Press (ctrl + shift + B) to run on VS-code