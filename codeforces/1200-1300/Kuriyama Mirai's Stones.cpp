#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
typedef long long ll;

using namespace std;

int main() {
    ll n; cin >> n;
    vector<ll> v(n);
    vector<ll> v1(n);
    for(int i = 0; i < n; i++) {
        ll a; cin >> a;
        v[i] = a;
        v1[i] = a;
    }

    sort(v1.begin(), v1.end());

    vector<ll> p(n+1, 0);
    vector<ll> p1(n+1, 0);
    p[0] = 0;
    p1[0] = 0;

    for(int i = 1; i <= n; i++){
        p[i] = p[i-1] + v[i-1];
        p1[i] = p1[i-1] + v1[i-1];
    }

    ll q; cin >> q;

    while(q--){
        ll type, l, r; cin >> type >> l >> r;
        if(type == 1){
            cout << p[r] - p[l-1] << endl;
        } else {
            cout << p1[r] - p1[l-1] << endl;
        }
    }
    
    return 0;
}