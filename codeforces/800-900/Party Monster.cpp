#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        map<char, int> m;
        string s; cin >> s;
        for(char a : s){
            m[a]++;
        }
        if(m['('] == m[')']) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}