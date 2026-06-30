#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
typedef long long ll;

using namespace std;

int main() {
    ll n, k; cin >> n >> k;

    ll left = 1, right = n, resposta = n;

    while(left <= right){
        ll m = left + (right - left)/2;

        int i = 0;
        ll sum = 0;
        ll result = 1;
        while(result != 0){
            ll p = k;
            p = pow(k, i);
            result = m/p;
            sum += result;
            i++;
        }

        if(sum >= n){
            resposta = min(sum, m);
        }

        if(sum >= n){
            right = m-1;
        } else {
            left = m+1;
        }
    }

    cout << resposta;
    return 0;
}