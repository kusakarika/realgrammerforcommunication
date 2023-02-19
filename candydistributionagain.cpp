// https://atcoder.jp/contests/agc027/tasks/agc027_a
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int children;
    int treet;
    cin >> children;
    cin >> treet;
    vector<int> v1(children);

    for(int i = 0; i < children; i++) {
        cin >> v1[i];
    }
    std::sort(v1.begin(), v1.end());
    int joycnt = 0;


    int requrecnt = 0;
    int treetcnt = treet;
    for(int i = 0; i < children; i++) {
        requrecnt += v1[i];
        if (treet >= v1[i]) {
            joycnt++;
            treet = treet - v1[i];
        }
    }

    if (treetcnt > requrecnt) joycnt--;
    if(joycnt < 0) joycnt = 0;
    cout << joycnt << endl;
}
