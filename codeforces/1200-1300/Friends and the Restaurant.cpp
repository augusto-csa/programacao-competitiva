// https://codeforces.com/contest/1729/problem/D

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> x(n);
        vector<ll> y(n);
        vector<ll> v(n);
        for(auto &a : x) cin >> a;
        for(auto &a : y) cin >> a;

        for(int i = 0; i < n; i++){
            v[i] = y[i] - x[i];
        }

        sort(v.begin(), v.end());

        ll left = 0;
        ll right = n-1;
        ll sum = v[left] + v[right];
        ll count = 0;
        while(left < right){
            if(sum < 0){
                left++;
                if(right != left) sum = v[left] + v[right];
            } else {
                count++;
                left++;
                right--;
                if(left < right) sum = v[left] + v[right];
            }
        }
        cout << count << endl;
    }
    
    return 0;
}
