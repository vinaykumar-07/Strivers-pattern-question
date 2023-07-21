#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if(j<=n-i+1)  cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}