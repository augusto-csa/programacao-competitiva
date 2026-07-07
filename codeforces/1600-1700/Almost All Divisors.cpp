// https://codeforces.com/contest/1165/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        ll maior = -LLONG_MAX;
        ll menor = LLONG_MAX;
        for(auto &a : v){
            cin >> a;
            maior = max(maior, a);
            menor = min(menor, a);
        }

        ll x = maior*menor;
        bool b = true;
        for(auto a : v){
            if(x%a != 0) {
                b=false;
                break;
            }
        }

        ll contagem = 0;
        for(ll i = 2; i*i <=x; i++){
            if(x % i == 0){
                contagem++;
                if(i*i!=x) contagem++;
            }
        }
        
        if(b && contagem == n) cout << x << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}
