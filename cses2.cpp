#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define PB push_back
int main() {
  ll n, sum = 0;
  cin >> n;
  for(int i = 1; i < n; ++i) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << n*(n+1) / 2 - sum;
  return 0;
}