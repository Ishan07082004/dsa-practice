#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

void bubble_sort(int arr[], int n){
  if(n==1) return;

  for(int j=0; j<= n-2; j++) {
    if (arr[j] > arr[j+1]) {
      swap(arr[j], arr[j+1]);
    }
  }
  bubble_sort(arr, n-1);
}

int main() {
  int arr[] = {13, 46, 36, 20, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Before " << endl;
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  bubble_sort(arr, n);
  cout << "After " << "\n";
  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}