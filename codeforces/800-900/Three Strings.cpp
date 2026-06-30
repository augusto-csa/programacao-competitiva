#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;

  for(int i = 0; i < n; i++){
    string a; cin >> a;
    string b; cin >> b;
    string c; cin >> c;
    bool ans = true;
    for(int j = 0; j < a.size(); j++){
      if((a[j] == c[j] && c[j] != b[j]) || (b[j] == c[j] && c[j] != a[j]) || (a[j] == b[j] && b[j] == c[j])){
      } else {
        ans = false;
      }
    }
    if(ans){
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
