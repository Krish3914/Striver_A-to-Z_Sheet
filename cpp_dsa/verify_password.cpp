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
        string s;
        cin>>s;
        int ld = -1;
        int fl = s.size();
        bool li = true;
        bool di = true;
        int o = 0;
        int res = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]>='0' && s[i]<='9'){
                if(ld!=-1){
                    if(s[i]<s[ld]){
                        res = 1;
                    }
                }
                ld = max(ld,i);
            }
            else if(s[i]>='a' && s[i]<='z'){
                if (fl != s.size())
                {
                    if (s[i] < s[fl])
                    {
                        res = 1;
                    }
                }
                fl = min(fl,i);
            }
            else{
                o++;
                res = 1;
            }
            if (ld > fl)
            {
                res = 1;
            }
            if(res == 1){
                break;
            }
        }
        if(res==0){
            cout<<"YES"<<endl;
        }
        else{
            cout << "NO" << endl;
        }
        t--;
    }
    return 0;
}
