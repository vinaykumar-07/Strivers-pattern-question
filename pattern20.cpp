#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=i||j>=2*n-i+1)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;        
    }
     for(int i=1;i<n;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(j<=n-i||j>n+i)
            cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}