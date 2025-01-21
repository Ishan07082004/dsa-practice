#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back;
int main() {
  int n;
  cin >> n;
  int max_value = 0;
  for(int i = 0; i < n; i++) {
    int num;
    cin >> num;
    if(max_value < num) {
      max_value = num;
    }
  }
  cout << max_value << endl;
  return 0;
}