#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        for(auto &a : v) cin >> a;
        ll left = 1, right = n;
        ll c = LLONG_MAX;
        bool b = false;
        while(left <= right){
            ll m = left + (right - left)/2;
            ll ans = 0;

            for(int i = 0; i < m; i++){
                if(v[i] == 2) ans++;
            }

            ll teste = 0;
            for(int i = m; i < n; i++){
                if(v[i] == 2) teste++;
            }
            
            if(ans == teste){
                b = true;
                c = min(c, m);
            }

            if(ans < teste){
                left = m+1;
            } else {
                right = m-1;
            }
        }
        if(!b) cout << -1 << '\n';
        else if(c > n) cout << -1 << '\n';
        else cout << c << '\n';
    }
    
    return 0;
}