#include<bits/stdc++.h>
using namespace std;

// sets do not contain same numbers twice.
// all the numbers in sets are unique to each other

int main() {
  set<int> s;
  s.insert(3);
  s.insert(4);
  s.insert(5);
  cout << s.count(3) << endl;
  s.erase(3);

  set<int> d = {1,2,3,4,5};
  cout << d.size() << "/n";
  for (auto x : d) {
    cout << x << "\n";
  }
}