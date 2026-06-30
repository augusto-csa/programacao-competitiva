#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define pb push_back

int main() {
    ios::sync_with_stdio(0);cin.tie(nullptr);
    ll n; cin >> n;
    map<ll, ll> m;
    ll count = 0;
    for(int i = 0; i < n; i++) {
        ll a; cin >> a;
        m[a]++;
    }

    count += m[3] + m[4];
    m[1] -= m[3];
    m[1] = (m[1] > 0) ? m[1] : 0;

    count += ((m[1] + m[2] * 2)+3)/4;

    cout << count;

    return 0;
}
