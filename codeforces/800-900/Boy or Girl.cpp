#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s; cin >> s;
    set<char> se;
    for(auto a : s) se.insert(a);
    if(se.size()%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
