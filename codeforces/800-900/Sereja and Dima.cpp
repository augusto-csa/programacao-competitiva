#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
typedef long long ll;

using namespace std;

int main() {
    fast_io
    ll n; cin >> n;
    vector<ll> v(n);
    for(auto &a : v) cin >> a;

    ll p1 = 0, p2 = 0;
    ll turn = 0;
    ll left = 0, right = n-1;
    while(left <= right){
        ll carta = 0;
        if(v[left] > v[right]){
            carta = v[left];
            left++;
        } else {
            carta = v[right];
            right--;
        }
        if(turn == 0) p1+=carta;
        else p2+=carta;
        turn = (turn == 0) ? 1 : 0;
    }

    cout << p1 << " " << p2;
    return 0;
}