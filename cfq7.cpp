#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    string reversedN = N;
    reverse(reversedN.begin(), reversedN.end());
    reversedN.erase(0, reversedN.find_first_not_of('0'));

    string trimmedN = N;
    trimmedN.erase(0, trimmedN.find_first_not_of('0'));
    string reversedTrimmedN = trimmedN;
    reverse(reversedTrimmedN.begin(), reversedTrimmedN.end());

    cout << reversedN << endl;

    if (trimmedN == reversedTrimmedN) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
