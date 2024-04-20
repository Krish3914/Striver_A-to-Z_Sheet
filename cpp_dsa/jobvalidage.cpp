#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job";
    }
    else if(age<=57){
        cout << "Eligible for job";
        if(age>=55){
            cout << ", But Retirement Soon!!";
        }
    }
    else{
        cout << "Retirement Time!!";
    }
    return 0;
}