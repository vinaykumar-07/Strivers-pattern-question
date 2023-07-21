#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cout<<"enter a number: ";
    cin>>n;
   
    for(int i=1;i<=n;i++)
    {
    char c='A';
    int m=1;
        for(int j=1;j<=2*n;j++){
            if(j>n-i+1&&j<=n+i)
           {
            // cout<<m;
            cout<<c;
            j<=n?m++:m--;
            j<=n?c++:c--;
            // if(j<=n)c++;
            // else c--;
           }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
} 


