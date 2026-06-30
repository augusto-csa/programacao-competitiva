#include<bits/stdc++.h>

using namespace std;

int main(){

    char vow[] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    string s; cin >> s;

    int maxJump = 0;
    int pos = 0 ;
    for(int i = 0; i < s.size(); i++){
        bool vowB = false;
        for(int j = 0; j < 6; j++){
            if(s[i] == vow[j]) vowB = true;
        }

        if(vowB){
            maxJump = max(maxJump, (i+1) - pos);
            pos = i+1;
        }

        if(i+1 == s.size() && pos != s.size()){
            maxJump = max(maxJump, (int) s.size() + 1 - pos);
        }
    }


    cout << maxJump;
    return 0;
}