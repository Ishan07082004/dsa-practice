#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int getSingleElement(vector<int> &arr){
  int n = arr.size();
  map<int, int> mpp;
  // here we are declaring the hashing of the given array
  for(int i=0; i<n; i++){
    mpp[arr[i]]++;
  }
  // find the single element and return the answer
  for(auto it: mpp){
    if(it.second == 1){
      return it.first;
    }
  }
  // this line will never execute if the array contains a single element
  return -1;
}

int main() {
  vector<int> arr = {4,1,1,2,2};
  int ans = getSingleElement(arr);
  cout << "The single element is: " << ans << endl;
  return 0;
}