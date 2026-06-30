#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;

    vector<ll> v1(n);
    for(auto &a : v1) cin >> a;
    sort(v1.begin(), v1.end());
    ll m = n/2;
    vector<ll> v(n-m);
    int j = 0;
    for(int i = m; i < n; i++){
        v[j] = v1[i];
        j++;
    }
    
    ll left = v[0], right = v[0] + k, resposta = v[0];

    while(left <= right){
        ll m = left + (right - left)/2;

        ll custo = 0;
        for(auto a : v){
            if(a < m) custo += (m - a);
        }
        
        if(custo <= k) resposta = m;

        if(custo > k){
            right = (m-1);
        } else {
            left = (m+1);
        }
    }
    
    cout << resposta;
    
    return 0;
}