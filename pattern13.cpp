#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=1;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
          if(i>=j)  cout<<m++<<" ";
        }
        cout<<endl;
    }
    return 0;
}