#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, result = 0;
    string s;
    cin >> N >> s;
    for (int i = 0 ; i < N ; i++) {
        char sIndexNumber = s[i];
        int sIndexNumInt = int(sIndexNumber)-48;
        result += sIndexNumInt;
    }
    cout << result;
}
