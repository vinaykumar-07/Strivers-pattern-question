#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;    
    cout<<"enter a number: ";
    cin>>n;
    m=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          cout<<j;
        }
        for(int j=1;j<=m;j++){
          cout<<" ";
        }
       
        for(int j=i;j>=1;j--){
          cout<<j;
        }
        cout<<endl;
        m=m-2;
    }

 //  With the space in between the numbers

    //   int j,i,m=0;
    //      m=2*(n-1);
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //       cout<<j<<" ";
    //     }
    //     for(int k=1 ; k<=(n-i)*4 ; k++)
    //            {
    //                cout<<" ";
    //            }    
    //     for(int j=i;j>=1;j--){
    //     cout<< j<<" ";
    //     }
    //     cout<<endl;
    //     m=m-2;
    // }
    return 0;
}