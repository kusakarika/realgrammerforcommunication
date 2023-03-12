// https://atcoder.jp/contests/abc293/tasks/abc293_b
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> input(N+1);
    vector<int> ouput(N+1);
    for (int i = 1; i<=N; i++) {
        cin >> input[i];
        ouput[i] = 0;
    }

    for (int i = 1; i <= N; i++) {
        if(ouput[i] == 0) {
            ouput[input[i]] = 1;
        }
    } 

    vector<int> out;
    for (int i = 1; i <= N; i++) {
        if(ouput[i] == 0) {
            out.push_back(i);
        }
    }
    sort(out.begin(),out.end());
    cout << out.size() << endl;
    for (int i = 0; i < out.size(); i++) {
        if(i == 0) {
            cout << out[i];
        } else {
            cout << " " << out[i];
        }
    }
}
