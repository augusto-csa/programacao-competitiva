#include<bits/stdc++.h>
using namespace std;

int main(){
  char vow[] = {'a', 'e', 'i', 'o', 'u', 'y'};

  string in; cin >> in;
  string out = "";

  for(char &a : in){
    a = (char) tolower(a);
    bool vowB = false;
    for(char b : vow){
      if(a == b){
        vowB = true;
      }
    }
    if(!vowB) out = out + "." + a;
  }
  
  cout << out;
}
