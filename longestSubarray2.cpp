#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int getLongestSubarray(vector<int> &v, int k){
  int n = v.size();
  map<int, int> preSumMap;
  int sum = 0;
  int maxLen = 0;
  for(int i=0; i<n; i++){
    // calculate the prefixSum till index i:
    sum += v[i];

    // if sum is equal to k, update the maxLen
    if(sum == k){
      maxLen = max(maxLen, i+1);
    }
    // calculate the sum of remaining part i.e. x-k:
    int rem = sum - k;
    // calculate the length and update maxLen:
    if(preSumMap.find(rem) != preSumMap.end()){
      int len = i - preSumMap[rem];
      maxLen = max(maxLen, len);
    }
    // finally update the map checking the conditions:
    if(preSumMap.find(sum) == preSumMap.end()){
      preSumMap[sum] = i;
    }
  }
  return maxLen;
}

int main() {
  vector<int> v = {-1,1,1};
  int k = 1;
  int len = getLongestSubarray(v, k);
  cout << "The Length of the longest subarray is: " << len << "\n";
  return 0;
}