#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, H, cont = 0, input;

    cin >> N >> H;

    for(int i = 0 ; i < N; i++){
        cin >> input;
        if(input <= H)
            cont++;
    }
    cout << cont << endl;

    return 0;
}
