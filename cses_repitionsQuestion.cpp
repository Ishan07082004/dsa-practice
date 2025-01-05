#include<bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    cin >> dna;
    int maxLength = 1, currentLength = 1;
    for (size_t i = 1; i < dna.length(); i++) {
        if (dna[i] == dna[i - 1]) {
            currentLength++;
        } else {
            maxLength = max(maxLength, currentLength);
            currentLength = 1; 
        }
    }
    maxLength = max(maxLength, currentLength);
    cout << maxLength << endl;
    return 0;
}
