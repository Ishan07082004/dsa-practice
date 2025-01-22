#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back
int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
    cout << sum << " ";
  }
  return 0;
}