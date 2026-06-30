#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n, m, q; cin >> n >> m >> q;
    string s; cin >> s;
    string t; cin >> t;
    
    vector<int> f(n);

    for(int i = 0; i <= n - m; i++){
        if(s.substr(i,m) == t){
            f[i+m-1] = 1;
        }
    }
    
    vector<int> p(n+1);
    p[0] = 0;
    
    for(int i = 1; i <= n; i++){
        p[i] = f[i-1] + p[i-1];
    }

    while(q--){
        ll a, b; cin >> a >> b;
        if(b-a+1<m) cout << 0 << endl;
        else {
            a = a + m - 2;
            cout << p[b] - p[a] << endl;
        }
    }
    return 0;
}