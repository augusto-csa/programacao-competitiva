#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main() {
    ll t;
    cin >> t;

    while(t--){
        ll n; cin >> n;
        vector<char> v(n);
        for(char &a : v) cin >> a;
        char lastChar = v[0];
        cout << lastChar;
        for(int i = 1; i < n; i++){
            if(v[i] == lastChar){
                if(i+1<n){
                    cout << v[i+1];
                    lastChar = v[i+1];
                    i++;
                }
            }
        }
        cout << endl;
    }
    
    return 0;
}