#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    char c='A';
        for(int j=1;j<=n;j++){
           if(i>=j) cout<<char(64+i)<<" ";
        
        }
        cout<<endl;
    }
    return 0;
}