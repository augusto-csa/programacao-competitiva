#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k; cin >> n >> k;

    ll left = 1, right = n;
    
    while(1){
        ll m = left + (right-left)/2;
        ll jar = (m * (m + 1)) / 2;
        if(jar == k){
            cout << 0;
            return  0;
        }
        
        ll restante = n - m;
        if(jar - restante == k){
            cout << restante;
            return 0;
        }

        jar = jar - restante;
        if(jar > k){
            right = m-1;
        } else {
            left = m+1;
        }
    }
    
    return 0;
}
