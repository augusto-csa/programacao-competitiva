// https://codeforces.com/problemset/problem/230/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll n = 1000000;
    
    vector<ll> sieve(n+1);

    sieve[0] = 1;
    sieve[1] = 1;
    
    for(int i = 2; i <= n; i++){
        if(sieve[i]) continue;

        for(int u = 2*i; u <= n; u+= i){
            sieve[u] = i;
        }
    }
    
    ll t; cin >> t;
    while(t--){
        ll x; cin >> x;

        ll raiz = sqrt(x);

        if(raiz*raiz == x && sieve[raiz] == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
