#include<bits/stdc++.h>
using namespace std;

int main()
{  
     int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i)cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// pattern for left aling right tringle 
// void pattern1(int n) {
   
// }
// // Pattern  for right angle triangle 
// void pattern2(int n){
//     for(int i=0;i<n;i++){
//         for (int j = 0;j <= n; j++)
//         {
//              if(i<j) cout<<" ";
//              else   cout<<"* ";
//         }
//         cout<<endl;
//     }

// }
// // pattern for equilateral triangle 
// void pattern3(int n){
//     for(int i=0;i<n;i++){
//         for (int j = 0;j <= n; j++)
//         {
//              if(i<j)  cout<<"* ";
//              else cout<<" ";
//         }
//         cout<<endl;
//     }

// }
