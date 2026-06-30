#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  map<string, int> s;
  
  for(int i = 0; i < n; i++) {
    string str; cin >> str;
    if(s[str] == 0) {
      cout << "OK\n";
      s[str] = 1;
    } else {
      string novo = str + to_string(s[str]);
      
      while(s.count(novo)) {
        s[str]++;
        novo = str + to_string(s[str]);
      }
      
      cout << novo << "\n";
      s[str]++;
    }
  }
  return 0;
}
