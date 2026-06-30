#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll t; cin >> t;

    while(t--){
        ll n, q; cin >> n >> q;

        vector<ll> s(n);
        vector<ll> p(n+1);
        vector<ll> vMax(n);
        ll maxA = -LLONG_MAX;
        for(int i = 0; i < n; i++) {
            ll a; cin >> a;
            s[i] = a;
            maxA = max(maxA, a);
            vMax[i] = maxA;
        }

        p[0] = 0;

        for(int i = 1; i <= n; i++){
            p[i] = p[i-1] + s[i-1];
        }
        
        while(q--){
            ll x; cin >> x;
            auto a = upper_bound(vMax.begin(), vMax.end(), x);
            cout << p[distance(vMax.begin(), a)] << " ";
        }
        cout << endl;
    }
    
    return 0;
}