#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   int a,b;
   char s;
   cin>>a>>s>>b;
   if (s=='<')
   { if (a<b){
    cout<<"Right";
   } else {
    cout<<"Wrong";
   }
   }

    if (s=='>')
   { if (a>b){
    cout<<"Right";
   } else {
    cout<<"Wrong";
   }
   }
  
    
    if (s=='=')
   { if (a==b){
    cout<<"Right";
   } else {
    cout<<"Wrong";
   }
   }
  
   
    return 0;
}