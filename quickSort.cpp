#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back
#define vi vector<int>

int partition(vi &arr, int low, int high){
  int pivot = arr[low];
  int i = low;
  int j = high;
  while(i < j) {
    while(arr[i] <= pivot && i<=high-1){
      i++;
    }
    while(arr[j]>pivot && j>=low+1){
      j--;
    }
    if(i<j) swap(arr[i],arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}

void quick_sort(vi &arr, int low, int high){
  if(low<high){
    int pIndex = partition(arr, low, high);
    quick_sort(arr,low, pIndex-1);
    quick_sort(arr, pIndex+1,high);
  }
}
vi qS(vi arr){
  quick_sort(arr, 0, arr.size() - 1);
  return arr;
}

int main() {
  vi arr = {4,6,2,5,7,9,1,3};
  int n = arr.size();
  cout<<"Before using quick sort: ";
  for(int i=0;i<n;i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  arr = qS(arr);
  cout << "After Using quick sort: " << "\n";
  for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}