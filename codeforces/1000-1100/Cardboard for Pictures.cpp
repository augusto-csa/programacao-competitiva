#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    ll t; cin >> t;

    while(t--){
        ll n, c; cin >> n >> c;

        vector<ll> v(n);
        for(auto &a : v) {
            cin >> a;
        }

        ll l = 1;
        ll r = sqrt(c) + 1;
        ll ans = 0;

        
        while(l <= r){
            ll m = l + (r-l)/2;
        
            ll sum = 0;
            
            for(auto a : v){
                ll val = 2*m + a;
                sum += val * val;
                if(sum > c) break;
            }
            
            if(sum > c){
                r = m-1;
            } else if (sum < c) {
                l = m+1;
            } else {
                ans = m;
                break;
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}