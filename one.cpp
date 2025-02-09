#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int addition(int &n){
  int a = n * n + n * n;
  return a;
}
int main() {
  int n;
  cout << "Hello, please add your given number: ";
  cin >> n;
  cout << addition(n);
  return 0;
}