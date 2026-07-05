// https://codeforces.com/contest/977/problem/E

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

vector<vector<ll>> adj;
vector<bool> visited;

bool dfs(int s){
    visited[s] = true;

    bool ciclo = adj[s].size() == 2;
    
    for(auto a : adj[s]){
        if(!visited[a])
            ciclo = dfs(a) && ciclo;
    }

    return ciclo;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll n, m; cin >> n >> m;
    adj = vector<vector<ll>>(n+1);
    visited = vector<bool>(n+1, false);

    while(m--){
        ll a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    ll count = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            if(dfs(i)) count++;;
        }
    }

    cout << count;
    
    return 0;
}
