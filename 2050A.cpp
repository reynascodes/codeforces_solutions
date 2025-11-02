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
      string s;
      int wordcount,maxchar;
      int currentsize=0;
      int ans=0;
      cin>>wordcount>>maxchar;
      vector<string>array(wordcount);
      for (int i = 0; i < wordcount; i++)
      {
        cin>>array[i];
      }
      for (int i = 0; i < wordcount; i++)
      {
       currentsize+=array[i].size();

       if (maxchar>=currentsize)
       {
         ans++;
       }else
       {
        break;
       }
       
       
      }
      
      cout<<ans<<endl;
        
    }
    
    return 0;
}//all testcases passed