#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<2*n;i++){
        i<=5?m++:m--;
        for(int j=1;j<=n;j++){           
           if(i>=j&&j<=m)
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}