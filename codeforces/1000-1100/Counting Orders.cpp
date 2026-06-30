#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;

        vector<ll> va(n);
        vector<ll> vb(n);

        for(auto &a : va) cin >> a;
        for(auto &a : vb) cin >> a;

        sort(va.rbegin(), va.rend());
        sort(vb.rbegin(), vb.rend());

        ll left = 0, right = 0;

        ll sum = 1;
        ll count = 0;
        bool flag = false;
        while(left < n){
            ll valor1 = va[right];
            ll valor2 = vb[left];

            while(valor1 > valor2 && !flag){
                count++;
                right++;
                if(right == n) {
                    flag = true;
                    break;
                }
                valor1 = va[right];
            }

            sum = (sum* (count - left)) % 1000000007;
            left++;
        }
        
        cout << sum << endl;
    }
    
    
    return 0;
}