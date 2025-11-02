#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        int friendcount,alicecookies,temp_alicecookies;
        int array[99];
        
        cin>>friendcount>>alicecookies;
        temp_alicecookies=alicecookies;
        for (int i = 0; i < friendcount; i++)
        {
          cin>>array[i];
        }
        while(true){
        int less=0;
        int equal=0;
        for (int i = 0; i < friendcount; i++)
        {
        int val=array[i];
         
        
         if (val<temp_alicecookies){
            less++;
         }else if(val==temp_alicecookies) {
            equal++;
         }
        
         }
        int limit=100;
         
          if(less!=0&&equal==0&& temp_alicecookies==alicecookies){
                cout<<0<<endl;
                break;
            }else if(less!=0&&equal==0&&temp_alicecookies!=alicecookies){
               cout<< temp_alicecookies-alicecookies<<endl;
               break;
            
            }else{
            temp_alicecookies++;
         }
      }
        }
    
    
    return 0;
}             
          