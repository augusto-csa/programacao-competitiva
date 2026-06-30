#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        for(auto &a : v) cin >> a;
        ll last = v[0];
        if(n == 1) {
            cout << last << endl;
            continue;
        }
        for(int i = 1; i < n; i++){
            if(last > v[i]) {
                v[i] += last;
            }
            last = v[i];
        }
        cout << last << endl;
    }
    return 0;
}
