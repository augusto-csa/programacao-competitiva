#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        for(auto &a : v) cin >> a;
        sort(v.begin(), v.end());
        ll a = v[1] - v[0];
        for(int i = 1; i < n; i++){
            a = min(a, v[i] - v[i-1]);
        }
        cout << a << endl;
    }
    return 0;
}
