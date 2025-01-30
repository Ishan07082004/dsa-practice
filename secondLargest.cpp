#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int secondLargest(int arr[], int n){
  if(n<2){
    return -1;
  }
  int large = INT_MIN, second_large = INT_MIN;
  int i;
  for(int i=0; i<n; i++){
    if(arr[i] > large){
      second_large = large;
      large = arr[i];
    } else if(arr[i] > second_large && arr[i] != large){
      second_large = arr[i];
    }
  }
  return second_large;
}
int main() {
  int arr[] = {4,3,2,6,9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int sL = secondLargest(arr, n);
  cout << "Second Largest number is: " << sL << endl;
  return 0;
}