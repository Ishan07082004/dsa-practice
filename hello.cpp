#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back
int main() {
  int arr[] = {2,3,6,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int max = *max_element(arr, arr+n);
  cout << "Maximum element: " << max << endl;
  return 0;
}