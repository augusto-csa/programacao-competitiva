#include<bits/stdc++.h>
using namespace std;

int main(){
  int a, b; cin >> a >> b;
  int ans = 0;

  for(int i = 0; i < a; i++){
    int h; cin >> h;
    if(h > b) ans += 2;
    else ans++;
  }

  cout << ans;
}
