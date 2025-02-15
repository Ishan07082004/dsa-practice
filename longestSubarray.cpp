#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int getLongestSubarray(vector<int> &a, long long k){
  int n = a.size();
  int left = 0, right = 0;
  long long sum = a[0];
  int maxLen = 0;
  while(right < n){
    // if sum is greater than k, reduce the subarray from left
    // until it becomes less or equal to k
    while(left <= right && sum > k){
      sum -= a[left];
      left++;
    }
    // if sum is equal to k, update the maxLen,i.e, the answer.
    if (sum == k){
      maxLen = max(maxLen, right - left + 1);
    }
    // move forward the right pointer 
    right++;
    if(right < n) sum += a[right];
  }
  return maxLen;
}

int main() {
  vector<int> a = {2, 3, 5, 1, 9};
  long long k = 10;
  int len = getLongestSubarray(a, k);
  cout << "Length of the subarray is: " << len << "\n";
  return 0;
}