#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
           if(j>=6-i&&j<=4+i) cout<<"*";
           else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}