#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int D, C, R, contc = 0, contr = 0, cont = 0, flag = 1;

    cin >> D >> C >> R;

    int * vetorc = new int [C];
    int *vetorR = new int [R];

    for(int i = 0; i < C; i++){
        cin >> vetorc[i];
    }

    for(int i = 0; i < R; i++){
        cin >> vetorR[i];
    }

    while(flag){

        if(vetorc[contc]<= D  && contc != C){
            D -= vetorc[contc];
            cont++;
            contc++;
            if(contr == R)
                flag++;
            
        }

        else if(contr != R){
            D += vetorR[contr];
            contr++;
            cont++;
        }

        else{
            flag--;
            if(contc == C)
                flag = 0;
        }
    }

    cout << cont << endl;

    delete[] vetorR;
    delete[] vetorc;

    return 0;
}
