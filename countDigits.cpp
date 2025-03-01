#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back
int count_digits(int n){
  int cnt = 0;
  while(n>0){
    cnt = cnt + 1;
    n = n / 10;
  }
  return cnt;
}
int main() {
  int N = 12345;
  cout << "N: " << N << endl;
  int digits = count_digits(N);
  cout << "No. of digits are: " << digits << endl;
  return 0;
}