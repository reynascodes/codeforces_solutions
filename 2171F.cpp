//not solved 
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
int n;
cin >> n;
vector<int> p(n);
for (int i = 0; i < n; i++) {
cin >> p[i];
}

if (p[0] != 1) {
cout << "No" << endl;
continue;
}

cout << "Yes" << endl;

set<int> seen;
seen.insert(p[0]);

for (int i = 1; i < n; i++) {
int cur = p[i];
int parent = -1;

for (int v : seen) {
if (v < cur) {
parent = v;
break;
}
}

cout << cur << " " << parent << endl;
seen.insert(cur);
}
}

return 0;
}