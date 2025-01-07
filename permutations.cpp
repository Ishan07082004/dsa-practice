#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int main() {
  int n;
  cin >> n;

  int value = 2;
  if (n == 2 || n == 3) {
    cout << "NO SOLUTION";
    return 0;
  }
  while(value <= n) {
    cout << value << " ";
    value += 2;
  }

  value = 1;
  while(value <= n) {
    cout << value << " ";
    value += 2;
  }
  return 0;
}