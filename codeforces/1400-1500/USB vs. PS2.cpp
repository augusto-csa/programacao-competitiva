#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c; cin >> a >> b >> c;
    ll n; cin >> n;
    vector<pair<ll, string>> v(n);
    for(int i = 0; i < n; i++){
        ll preco; cin >> preco;
        string port; cin >> port;
        pair p = {preco, port};
        v[i] = p;
    }

    sort(v.begin(), v.end());

    ll sum = 0;
    ll count = 0;
    for(auto e : v){
        if(e.second == "USB"){
            if(a>0){
                a--;
                count++;
                sum += e.first;
            } else if(c>0){
                c--;
                count++;
                sum += e.first;
            }
        } else {
            if(b>0){
                b--;
                count++;
                sum += e.first;
            } else if(c>0){
                c--;
                count++;
                sum += e.first;
            }
        }
    }

    cout << count << " " << sum;
    
    return 0;
}