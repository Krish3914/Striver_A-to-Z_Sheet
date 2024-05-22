#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin>>n;

        //Brute-Force
        // for(int i=1; i<=n; i++){
        //     if(n%i==0){
        //         cout<<i<<" ";
        //     }
        // }
        // cout<<endl;

        //Better Approach
        // for(int i=1; i<=sqrt(n); i++){
        //     if(n%i==0){
        //         cout<<i<<" ";
        //     }
        //     if(n/i!=i){
        //         cout<<n/i<<" ";
        //     }
        // }
        // cout<<endl;

        
        //Optimal Approach
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                cout << i << " ";
                if (n / i != i)
                {
                    cout << n / i << " ";
                }
            }
        }
        cout<<endl;
        t--;
    }
    return 0;
}

// Press (ctrl + shift + B) to run on VS-code