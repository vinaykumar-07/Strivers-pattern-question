#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
     for(int i=0;i<n;i++)
         {
             for(int j=0;j<2*n;j++)
             {
                 if(j<=n-i-1||j>=n+i)
                 cout<<"*";
                 else
                 cout<<" ";
             }
             cout<<endl;
         }
         for(int i=0;i<n;i++){
        for(int j=0;j<2*n;j++){
         if(j<=i||j>2*n-i-2)
          cout<<"*";
          else
          cout<<" ";
        }
        cout<<endl;
         }
    return 0;
}