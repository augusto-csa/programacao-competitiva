#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ln "\n"

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll menor = LLONG_MAX, maior = -LLONG_MAX;
        while(n--){
            ll a; cin >> a;
            if(a > maior) maior = a;
            if(a < menor) menor = a;
        }
        maior++;
        cout << maior-menor << ln;
    }
    return 0;
}