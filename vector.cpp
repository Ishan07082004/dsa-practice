#include<bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v;
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);

  cout << v[0] << "\n";
  cout << v[1] << "\n";

  for(auto x : v) {
    cout << x << "\n";
  }

  // for(int i=0; i <= v.size(); i++) {
  //   cout << v[i] << " ";
  // }
  return 0;
}