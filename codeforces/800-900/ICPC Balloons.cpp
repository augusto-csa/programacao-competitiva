#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t; cin >> t;
    while(t--){
    map<char, int> repitido;
        int tamanho; cin >> tamanho;
        ll sum = 0;
        string a; cin >> a;
        for(char c : a){
            repitido[c]++;
            if(repitido[c] == 1){
                sum += 2;
            } else sum += 1;
        }
        cout << sum << "\n";
    }
    
    return 0;
}