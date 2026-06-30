#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t; cin >> t;
    while(t--){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll count = 0;
        if(b < d){
            a += d-b;
            count += d-b;
        } else if (b>d) {
            cout << -1 << '\n';
            continue;
        }

        if(a > c){
            count += a-c;
            cout << count << '\n';
            continue;
        } else if (a == c){
            cout << count << '\n';
            continue;
        }
        
        cout << -1 << '\n';
    }

    return 0;
}