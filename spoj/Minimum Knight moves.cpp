// https://www.spoj.com/problems/NAKANJ/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define endl '\n'

vector<vector<bool>> visited;
vector<vector<ll>> dist;

void bfs(ll col, ll lin){
    queue<pair<ll,ll>> q;
    visited[col][lin] = true;
    dist[col][lin] = 0;

    pair<ll, ll> pA = {col, lin};
    q.push(pA);
    
    while(!q.empty()){
        auto p = q.front(); q.pop();
        vector<pair<ll, ll>> possibilidades = {
            {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, 
            {2, 1}, {2, -1}, {-2, 1}, {-2, -1}
        };
        
        for(auto c : possibilidades){
            ll a = p.first+c.first;
            ll b = p.second+c.second;
            if(a <= 8 && a >= 1 && b <= 8 && b >= 1){
                if(visited[a][b]) continue;
                visited[a][b] = true;
                dist[a][b] = dist[p.first][p.second]+1;
                q.push({a,b});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll t; cin >> t;
    while(t--){
        visited = vector<vector<bool>>(9, vector<bool>(9, false));
        dist = vector<vector<ll>>(9, vector<ll>(9, 0));
        
        string a, b; cin >> a >> b;
        ll colIni = a[0] - 'a' + 1, linIni = a[1] - 48;
        ll colDest = b[0] - 'a' + 1, linDest = b[1] - 48;

        bfs(colIni, linIni);
        cout << dist[colDest][linDest] << endl;
    }
    
    return 0;
}
