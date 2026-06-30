#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++){
        ll a; cin >> a;
        ll b; cin >> b;
        pair p = {a, b};
        v[i] = p;
    }

    sort(v.begin(), v.end());

    ll dia = -LLONG_MAX;

    for(auto a : v){
        ll menor = min(a.first, a.second);
        if(menor < dia){
            dia = max(a.first, a.second);
        } else {
            dia = menor;
        }
    }

    cout << dia;
    
    return 0;
}