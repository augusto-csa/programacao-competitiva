#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gdc(ll a, ll b){
    return b == 0 ? a : gdc(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    string a, b; cin >> a >> b;
    if(a!=b){
        cout << 1;
    } else {
        cout << a;
    }
    return 0;
}