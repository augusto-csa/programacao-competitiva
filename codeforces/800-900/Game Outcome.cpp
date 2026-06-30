#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int array[n][n];
    int count = 0;

    for(int i = 0; i < n; i++){
        if(n > 1){
            for(int j = 0; j < n; j++){
                int number; cin >> number;
                array[i][j] = number;
            }
        } else {
            cin >> array[i][i];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a = 0, b = 0;

            for(int column = 0; column < n; column++){
                a+=array[column][j];
            }

            for(int row = 0; row < n; row++){
                b+=array[i][row];
            }

            if(a > b) count++;
        }
    }

    cout << count;
    return 0;
}