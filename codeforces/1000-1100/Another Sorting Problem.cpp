#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        for(auto &a : v) cin >> a;
        ll k = 0;
        for(int i = 0; i < n-1; i++){
            if(v[i] > v[i+1]){
                k = max(k, v[i] - v[i+1]);
            }
        }

        ll last = v[0];
        bool b = true;
        for(int i = 1; i < n; i++){
            if(last <= v[i]){
                last = v[i];
            } else if (v[i] + k >= last){
                last = v[i] + k;
            } else {
                b = false;
            }
        }
        if(b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
