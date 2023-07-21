#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=6,k=0;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=2*n;i++){
            // i<=m?k++:k--;
        for(int j=1;j<=2*n;j++){
           if(i<n) { 
          if(j>=6-i&&j<=4+i)  cout<<"*";
          else cout<<" ";
           }
           else {
              if(j>i-m&&j<10-i+m)  cout<<"*";
          else cout<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}