#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define PB push_back

ll factorial(int n) {
  ll result = 1;
  for(int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
  }
  return 0;
}