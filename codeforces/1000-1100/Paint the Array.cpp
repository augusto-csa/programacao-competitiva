#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> vP;
        vector<ll> vI;
        for(int i = 0; i < n; i++){
            ll a; cin >> a;
            if(i%2 == 0) vP.pb(a);
            else vI.pb(a);
        }
        ll mdcP = vP[0], mdcI = vI[0];
        for(auto a : vP){
            mdcP = gcd(mdcP, a);
        }

        for(auto a : vI){
            mdcI = gcd(mdcI, a);
        }

        vector<ll> v(n);
        ll j = 0;
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                v[i] = vP[j];
            } else{
                v[i] = vI[j];
                j++;
            }
        }

        ll last = -1;
        bool b = true;
        for(auto a : v){
            ll atual;
            if(a % mdcP == 0) atual = 0;
            else atual = 1;
            if(atual == last) b = false;
            last = atual;
        }
        
        if(b){
            cout << mdcP << endl;
            continue;
        }
        
        last = -1;
        b = true;
        for(auto a : v){
            ll atual;
            if(a % mdcI == 0) atual = 0;
            else atual = 1;
            if(atual == last) b = false;
            last = atual;
        }
        
        if(b){
            cout << mdcI << endl;
        } else cout << 0 << endl;
    }
    return 0;
}