#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &a : v) cin >> a;
    sort(v.begin(), v.end());
    ll m; cin >> m;
    while(m--){
        ll a; cin >> a;
        auto it = upper_bound(v.begin(), v.end(), a)--;
        cout << (it - v.begin()) << '\n';
    }
    
    return 0;
}