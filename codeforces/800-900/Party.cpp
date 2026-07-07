// https://codeforces.com/problemset/problem/115/A

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl '\n'

vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> dist;
queue<ll> q;

void bfs(ll x){
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while(!q.empty()){
        ll a = q.front(); q.pop();
        for(auto b : adj[a]){
            if(visited[b]) continue;
            visited[b] = true;
            dist[b] = dist[a]+1;
            q.push(b);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll n; cin >> n;
    adj = vector<vector<ll>>(n+1);
    visited = vector<bool>(n+1);
    dist = vector<ll>(n+1);

    vector<ll> v;
    
    for(int i = 1; i <= n; i++){
        ll a; cin >> a;
        if(a == -1) {
            v.pb(i);
            continue;
        }
        adj[i].pb(a);
        adj[a].pb(i);
    }
    
    for(auto a : v) bfs(a);

    cout << *max_element(dist.begin(), dist.end())+1;
    
    return 0;
}
