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
        ll last = -1;
        bool b = true;
        for(auto a : v){
            if(last >= a){
                b = false;
                break;
            }
            last = a;
        }

        if(b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
