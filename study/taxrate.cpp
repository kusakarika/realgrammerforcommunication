// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int a;
    cin >> a;
    int max = 50000;

    for (int i = 1; i < max; i++) {
        double b = i;
        int c = b * 1.08;
        if(a == c) {
            cout << i << endl;
            return 0;
        } 
    }
    cout << ":(" << endl;
}
