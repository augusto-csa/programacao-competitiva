#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--){
        ll a, b, x; cin >> a >> b >> x;
        ll maior = max(a, b);
        ll menor = min(a, b);
        if(a == b){
            cout << 0 << endl;
            continue;
        }

        ll op = 0, aux = 0;
        ll diff = 0, melhor = LLONG_MAX;
        while(maior != menor){
            diff = maior - menor;
            melhor = min(melhor, op + diff);
            maior/=x;
            op++;
            if(maior < menor){
                aux = menor;
                menor = maior;
                maior = aux;
            }
        }
        cout << min(op, melhor) << endl;
    }
    return 0;
}
