#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int main() {
  int n;
  cin >> n;
  int even = 0;
  int odd = 0;
  int positive = 0;
  int negative = 0;

  for(int i = 0; i < n; i++) {
    int num;
    cin >> num;

    if(num % 2 == 0) {
      even++;
    } else {
      odd++;
    }

    if(num > 0) {
      positive++;
    } else if(num < 0){
      negative++;
    }
  }
  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << positive << endl;
  cout << "Negative: " << negative << endl;
  return 0;
}