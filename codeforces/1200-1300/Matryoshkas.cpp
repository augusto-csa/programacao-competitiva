#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        map<ll, ll> m;
        for(ll &a : v) {
            cin >> a;
            m[a]++;
        }
        sort(v.begin(), v.end());
        ll count  = 0;
        for(auto a : v){
            if(m[a-1] > 0){
                m[a-1]--;
            } else {
                count++;
            }
        }
        cout << count << endl;
    }
}