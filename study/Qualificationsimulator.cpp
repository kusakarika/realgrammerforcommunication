// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int N, A, B;
    string S;
    cin >> N;
    cin >> A;
    cin >> B;
    cin >> S;
    int sum = A + B;
    int Allcnt = 0;
    int Bcnt = 0;
    for (int i = 0; i < N; i++) {
        if(sum > Allcnt && S[i] == 'a') {
            cout << "Yes" << endl;
            Allcnt += 1;
        } else if (sum > Allcnt && S[i] == 'b' && B > Bcnt) {
            cout << "Yes" << endl;
            Allcnt += 1;
            Bcnt += 1;
        } else {
            cout << "No" << endl;
        }

    }
}
