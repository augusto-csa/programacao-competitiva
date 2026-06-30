#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll n; cin >> n;

    vector<ll> v(n);
    vector<ll> p(n+1, 0);

    for(auto &a : v) cin >> a;

    p[0] = 0;
    
    for(int i = 1; i <= n; i++){
        p[i] = p[i-1] + v[i-1];
    }

    ll w; cin >> w;
    
    while(w--){
        ll a; cin >> a;
        auto it = upper_bound(p.begin(), p.end(), a);
        // 0 2 9 12 16 25
        ll indice = it-p.begin();
        if(indice == 1) {
            cout << 1 << endl;
            continue;
        }
        
        it--;
        indice = it-p.begin();
        
        if(a == p[indice]){
            cout << indice << endl;
            continue;
        }

        it++;
        indice = it-p.begin();
        cout << indice << endl;
    }

    
    return 0;
}