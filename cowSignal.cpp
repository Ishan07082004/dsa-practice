#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define PB push_back
int main() {
  ll A, B, C;
  cin >> A >> B >> C;
  if(A < B) {
    cout << A;
  } else {
    cout << B;
  }
  if(B < C) {
    cout << B;
  } else {
    cout << C;
  }
  if(C < A) {
    cout << C;
  } else {
    cout << A;
  }
  return 0;
}