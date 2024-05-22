#include <bits/stdc++.h>
using namespace std;

// void allprime(int n){
//     int i;
//     for(i=2; i*i<=n; i++){
//         if(n%i==0){
//             while(n%i==0){
//                 cout<<i<<" ";
//                 n/=i;
//             }
//         }
//     }
//     if (n > 1)
//     {
//         cout << n << " ";
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t > 0)
//     {
//         // cout<<"hi";
//         vector<int> queries;
//         int n;
//         cin >> n;
//         for (int i = 0; i < n; i++)
//         {
//             int num;
//             cin>>num;
//             queries.push_back(num);
//         }
//         for(int i=0; i<queries.size(); i++){
//             allprime(queries[i]);
//             cout<<endl;
//         }
//         t--;
//     }
//     return 0;
// }


//Aur zyada optimized approach
//create a SPF (smallest prime factor array through Sieve approach to get direct the lowest prime that divides the number to get O(1) of getting prime)
void Sieve_spf(vector<int>& aprime,int n){
    aprime[0] = 0;
    aprime[1] = 1;
    for(int i=2; i<=n; i++){
        aprime[i] = i;
    }
    for(int i=2; i*i<=n; i++){
        if(aprime[i]<i){
            continue;
        }
        else{
            for(int j=i*i; j<=n; j+=i){
                if(aprime[j]<j){
                    continue;
                }
                aprime[j] = i;
            }
        }
    }
}

void allprime(vector<int>& aprime,int n)
{
    int i;
    while(n>1){
        cout << aprime[n]<< " ";
        n/=aprime[n];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        // cout<<"hi";
        vector<int> queries;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            queries.push_back(num);
        }
        vector<int> aprime(pow(10, 5) + 1);
        Sieve_spf(aprime, pow(10, 5) + 1);
        for (int i = 0; i < queries.size(); i++)
        {
            allprime(aprime, queries[i]);
            cout << endl;
        }
        t--;
    }
    return 0;
}
// Press (ctrl + shift + B) to run on VS-code