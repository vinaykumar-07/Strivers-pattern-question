#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
       m= i%2==0?0:1;
        for(int j=1;j<=i;j++){
            cout<<m;
            m=1-m;
        }
        cout<<endl;
    }
    return 0;
}