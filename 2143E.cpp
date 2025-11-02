#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool ok(string &s) {
    int b=0;
    for (char c:s) {
        b+=(c=='(' ? 1 : -1);
        if (b<0) return 0;
    }
    return b==0;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    if (n%2) { cout << -1 << endl; return; }
    int o=count(s.begin(),s.end(),'('), need=n/2;
    if ((need-o)%2) { cout << -1 << endl; return; }
    string t=s; int k=(need-o)/2;
    vector<int> op,cl;
    for (int i=0;i<n-1;i++) {
        if (s[i]==s[i+1]) {
            if (s[i]=='(') op.push_back(i);
            else cl.push_back(i);
            i++;
        }
    }
    if (k==0) {
        vector<int> all; 
        all.insert(all.end(),op.begin(),op.end());
        all.insert(all.end(),cl.begin(),cl.end());
        sort(all.begin(),all.end());
        for (int i=0;i<(int)all.size();i++) {
            int idx=all[i];
            if (i<(int)op.size()) t[idx]=t[idx+1]='(';
            else t[idx]=t[idx+1]=')';
        }
    } else if (k>0) {
        if ((int)cl.size()<k) { cout << -1 << endl; return; }
        for (int i=0;i<k;i++) t[cl[i]]=t[cl[i]+1]='(';
    } else {
        int m=-k;
        if ((int)op.size()<m) { cout << -1 << endl; return; }
        for (int i=0;i<m;i++) {
            int idx=op[op.size()-1-i];
            t[idx]=t[idx+1]=')';
        }
    }
    cout << (ok(t)?t:"-1") << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
}
//might be some logical erroe