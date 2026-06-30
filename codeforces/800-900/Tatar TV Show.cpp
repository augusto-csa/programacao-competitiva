#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ln "\n"

int main() {
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        bool b = true;
        for(int i = 0; i < n; i++){
            if(i < n-k){
                if(s[i] == '1'){
                    if(i+k >= s.size()){
                        cout << "NO" << ln;
                        b = false;
                        break;
                    }
                    if(s[i+k] == '1') s[i+k] = '0';
                    else s[i+k] = '1';
                }
            } else {
                if(s[i] == '1') {
                    cout << "NO" << ln;
                    b = false;
                    break;
                }
            }
        }
        if(b) cout << "YES" << ln;
    }
    return 0;
}