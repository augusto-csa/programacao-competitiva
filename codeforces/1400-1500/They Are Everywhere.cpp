#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    set<char> types;
    map<char, ll> dTypes;
    ll ans = LLONG_MAX;

    string s; cin >> s;

    for(auto a : s) {
        types.insert(a);
    }
    
    ll left = 0, right = 0;

    dTypes[s[0]]++;

    if(dTypes.size()==types.size()){
        if((right - (left-1)) < ans){
            ans = right - (left-1);
            cout << ans;
            return 0;
        }
    }

    
    while(right < n){
        right++;
        if(right > n) break;
        if(dTypes[s[right]] < 1){
            dTypes[s[right]]++;
        } else {
            dTypes[s[right]]++;
            while(dTypes[s[left]] > 1){
                dTypes[s[left]]--;
                left++;
            }
        }

        if(dTypes.size()==types.size()){
            if((right - (left-1)) < ans){
                ans = right - (left-1);
            }
        }
    }
    
    cout << ans;
    
    return 0;
}
