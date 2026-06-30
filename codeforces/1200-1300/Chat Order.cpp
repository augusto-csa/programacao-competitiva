#include <bits/stdc++.h>
#define pb push_back

typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    int t; cin >> t;
    stack<string> s;
    while(t--){
        string a; cin >> a;
        s.push(a);
    }

    map<string, int> nome;

    while(s.size()>0){
        string a = s.top();
        s.pop();
        if(nome[a] < 1) cout << a << "\n";
        nome[a]++;
    }
    
    
    return 0;
}