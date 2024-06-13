#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        vector<int> arr;
        int num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            arr.push_back(num);
        }
        int po = 0;
        int ng = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>=0){
                po++;
            }
            else{
                ng++;
            }
        }
        int ans;
        if(n==0){
            ans = 0;
        }
        else{
            if (po > 0 && ng > 0)
            {
                po = pow(2, po);
                ng = pow(2, ng) - 1;
                ans = po * ng;
            }
            else if(ng==0){
                po = pow(2,po);
                ans = po;
            }
            else{
                ans = 1;
            }
        }
        cout<<ans<<endl;
        t--;
    }
    return 0;
}