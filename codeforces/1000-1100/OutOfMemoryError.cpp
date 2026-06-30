#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve(){
    int n, m, h; cin >> n >> m >> h;
    vector<ll> a(n), b(n);
    int i = 0;
    for(auto &e : a){
        cin >> e;
        b[i] = e;
        i++;
    }
    ll x, y;
    set<ll> s;
    while(m--){
        cin >> x >> y;
        x--;
        s.insert(x);
        b[x] = b[x] + y;
        if(b[x] > h){
            for(ll j : s){
                b[j] = a[j];
            }
            s.clear();
        }
    }
    for(int i = 0; i < n; i++)
        cout << b[i] << ' ';
    cout << "\n";
}

int main(){

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
