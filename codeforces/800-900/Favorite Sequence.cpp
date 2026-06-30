#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ll t;
    cin >> t;

    while(t--){
        ll n; cin >> n;
        vector<int> v(n);
        for(int &a : v) cin >> a;
        int left = 0;
        int right = n-1;
        while(left < right){
            cout << v[left] << " ";
            cout << v[right] << " ";
            left++;
            right--;
        }
        if(n%2 != 0) cout << v[left];
        cout << '\n';
    }
    
    return 0;
}