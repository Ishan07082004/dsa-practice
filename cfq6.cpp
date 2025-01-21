#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
typedef bool b;
// #define PB push_back

b isPrime(int x) {
    if (x <= 1) return false;  
    for (int i = 2; i * i <= x; i++) {  
        if (x % i == 0) return false;   
    }
    return true;  
}
int main() {
  int X;
    cin >> X;  // Input the number
    if (isPrime(X)) {
        cout << "YES" << endl;  // Output YES if prime
    } else {
        cout << "NO" << endl;   // Output NO if not prime
    }
    return 0;
}