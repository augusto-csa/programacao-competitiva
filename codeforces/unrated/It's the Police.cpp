// https://codeforces.com/gym/101149/problem/I

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl '\n'

vector<vector<ll>> adj;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll n, m; cin >> n >> m;
    adj = vector<vector<ll>>(n+1);

    while(m--){
        ll a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    ll menorGrauAux = LLONG_MAX;
    ll menorGrau = 1;
    
    for(int i = 1; i <= n; i++){
        ll size = adj[i].size();
        if(size < menorGrauAux){
            menorGrau = i;
            menorGrauAux = size;
        }
    }
    
    vector<ll> polices(n, 1);
    
    polices[menorGrau-1] = 0;
    for(auto a : adj[menorGrau]){
        polices[a-1] = 0;
    }
    
    for(auto a : polices) cout << a << " ";

    return 0;
}
