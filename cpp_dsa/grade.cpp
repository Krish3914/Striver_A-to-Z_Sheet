#include<bits/stdc++.h>
using namespace std;
/*
Grading System:
<25 is F
25 to 44 is E
45 to 49 is D
50 to 59 is C
60 to 79 is B
80 to 100 is A
*/
int main(){
    int marks;
    cin>>marks;
    cout<<"Grade is :"<<" ";
    if(marks<25){
        cout<<'F';
    }
    else if(marks >= 25 && marks <= 44){
        cout << 'E';
    }
    else if (marks >= 45 && marks <= 49){
        cout << 'D';
    }
    else if (marks <= 59){
        cout << 'C';
    }
    else if (marks <= 79){
        cout << 'B';
    }
    else{
        cout << 'A';
    }
    return 0;
}