#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    int arr[3][5];  // row, column
    arr[1][3] = 78;
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            if(i!=1 || j!=3){
                arr[i][j] = 0;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}