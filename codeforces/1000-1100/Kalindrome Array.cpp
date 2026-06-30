#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v(n);
        set<ll> ks;
        for(auto &a : v) cin >> a;
        ll left = 0;
        ll right = n-1;
        while(left <= right){
            ll a = v[left];
            ll b = v[right];
            if(a != b && ks.size() == 0) {
                ks.insert(a);
                ks.insert(b);
            }
            right--;
            left++;
        }
        
        if(ks.size() == 0){
            cout << "YES" << endl;;
            continue;
        }

        bool c = false;
        for(auto a : ks){
            vector<ll> v2;
            for(auto b : v) {
                if(b != a) v2.push_back(b);
            }
    
            left = 0;
            right = v2.size()-1;
            bool d = true;
            while(left <= right){
                ll a = v2[left];
                ll b = v2[right];
                if(a != b) {
                    d = false;
                }
                right--;
                left++;
            }
            if(d == true){
                c = true;
                break;
            }
        }
        
        if(c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}