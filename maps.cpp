#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back
int main() {

  map<string, int> m;
  m["monkey"] = 1;
  m["banana"] = 6;
  m["boxer"] = 7;
  cout << m["boxer"] << endl;

  for (auto x : m) {
    cout << x.first << " " << x.second << "\n";
  }

  return 0;
}