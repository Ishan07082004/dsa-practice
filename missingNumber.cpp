#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define PB push_back

int main() {
  ll n, input, sum = 0;
  cin >> n;

  for(int i = 0; i < n - 1; i++) {
    cin >> input;
    sum += input;
  }

  cout << (n * (n + 1) ) / 2 - sum << endl;
  return 0;
}