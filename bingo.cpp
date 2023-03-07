// https://atcoder.jp/contests/abc157/tasks/abc157_b
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int a, b, c, d, e, f, g, h, i;
    int cnt;
    vector<vector<int> > data(9, vector<int>(2));
    for (int i = 0; i<9; i++) {
        cin >> data[i][0];
        data[i][1] = 0;
    }

    cin >> cnt;
    for(int i = 0; i<cnt; i++) {
        int input_num;
        cin >> input_num;
        for(int j = 0; j<9; j++) {
            if(input_num == data[j][0]) {
                data[j][1] = 1;
            }
        }
    }
    if(
        (data[0][1] == 1 && data[1][1] == 1 && data[2][1] == 1)
        || (data[0][1] == 1 && data[3][1] == 1 && data[6][1] == 1)
        || (data[0][1] == 1 && data[4][1] == 1 && data[8][1] == 1)
        || (data[3][1] == 1 && data[4][1] == 1 && data[5][1] == 1)
        || (data[6][1] == 1 && data[7][1] == 1 && data[8][1] == 1)
        || (data[1][1] == 1 && data[4][1] == 1 && data[7][1] == 1)
        || (data[2][1] == 1 && data[5][1] == 1 && data[8][1] == 1)
        || (data[2][1] == 1 && data[4][1] == 1 && data[6][1] == 1)
     ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// $ g++ downstar.cpp
// $ 10
