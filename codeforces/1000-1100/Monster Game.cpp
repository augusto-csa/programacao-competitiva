#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define fast ios::sync_with_stdio(0);cin.tie(0)

int main() {
    fast;
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> s(n);
        vector<ll> b(n);

        ll maior = -LLONG_MAX;
        for(auto &a : s) {
            cin >> a;
            maior = max(maior, a);
        }
        for(auto &a : b) cin >> a;
        sort(s.begin(), s.end());

        vector<ll> prefix(n+1, 0);
        for(int i = 1; i <= n; i++){
            prefix[i] = prefix[i-1] + b[i-1];
        }

        ll melhor = 0;
        for(int i = 0; i < n; i++){
            ll x = s[i];

            ll espadas = n-i;

            auto it = --upper_bound(prefix.begin(), prefix.end(), espadas);
            ll quantidade = it - prefix.begin();
            melhor = max(quantidade*x, melhor);
        }
        cout << melhor << endl;
    }
    return 0;
}
