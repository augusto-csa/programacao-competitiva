// https://codeforces.com/contest/1195/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

int main() {
    
    ll n; cin >> n;
    vector<ll> r1(n);
    for(auto &a : r1) cin >> a;
    vector<ll> r2(n);
    for(auto &a : r2) cin >> a;
    
    vector<vector<ll>> dp(n+1, vector<ll>(4, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3; j++){
            if(j == 1){
                dp[i][j] = max({dp[i-1][1], dp[i-1][2], dp[i-1][3]});
            } else if(j == 2){
                dp[i][j] = r1[i-1] + max(dp[i-1][1], dp[i-1][3]);
            } else if(j == 3){
                dp[i][j] = r2[i-1] + max(dp[i-1][1], dp[i-1][2]);
            }
        }
    }

    cout << max({dp[n][1], dp[n][2], dp[n][3]});
    return 0;
}
