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
        int i;
        int count = 0;
        for(i=1; i<=n; i++){
            if(n%i==0){
                count++;
            }
        }
        if (count == 2)
        {
            cout << "True" << endl;
        }
        else
        {
            cout << "False" << endl;
        }

        //Optimised aaproach
        count = 0;
        for(i=1; i*i<=n ; i++){
            if(n%i==0){
                count++;
                if (n / i != i)
                {
                    count++;
                }
            }
            if(count>2){
                break;
            }
        }
        if(count==2){cout<<"True"<<endl;}
        else
        {
            cout << "False" << endl;
        }
        t--;
    }
    return 0;
}