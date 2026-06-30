#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(0);cin.tie(0);

    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        set<ll> s;
        for(int i = 0; i < n; i++){
            ll a; cin >> a;
            s.insert(a);
        }

        ll maior = 1;
        ll sequencia = 1;

        vector<ll> v;

        for(auto a : s){
            v.push_back(a);
        }

        for(int i = 1; i < v.size(); i++){
            if(v[i] == v[i-1]+1){
                sequencia++;
            } else {
                sequencia = 1;
            }
            maior = max(maior, sequencia);
        }

        cout << maior << endl;
    }
    return 0;
}
