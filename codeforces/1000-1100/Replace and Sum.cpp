#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0)

int main() {
    fast;
    ll t; cin >> t;
    while(t--){
        ll n, q; cin >> n >> q;
        vector<ll> c(n);
        for(auto &a : c) cin >> a;
        vector<ll> d(n);
        for(auto &a : d) cin >> a;
        vector<ll> v(n);
        for(int i = 0; i < n; i++) v[i] = max(c[i], d[i]);

        vector<ll> maximos(n);
        ll last = -1;
        for(int i = n-1; i >= 0; i--){
            maximos[i] = max(v[i], last);
            last = maximos[i];
        }

        vector<ll> prefix(n+1, 0);
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + maximos[i-1];
        }

        while(q--){
            ll a, b; cin >> a >> b;
            cout << prefix[b] - prefix[a-1] << " ";
        }
        cout << endl;
    }
    return 0;
}
