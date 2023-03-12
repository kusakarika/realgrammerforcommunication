//https://atcoder.jp/contests/abc293/tasks/abc293_a
#include <iostream>
#include <vector>

using namespace std;
int main(){
    string a;
    cin >> a;
    string out;

    for (int i = 0; i < a.length(); i++) {
        if(i % 2 == 1) {
                out += a.substr(i,1);
                out += a.substr(i - 1,1);
        }
    } 
    cout << out << endl;
}
