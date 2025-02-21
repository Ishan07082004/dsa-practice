#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

string twoSum(int n, vector<int> &v, int target){
  unordered_map<int, int> mpp;
  for(int i=0;i<n;i++){
    int num = v[i];
    int moreNeeded = target - num;
    if(mpp.find(moreNeeded) != mpp.end()) {
      return "YES";
    }
    mpp[num] = i;
  }
  return "NO";
}

int main() {
  int n = 5;
  vector<int> v = {2,5,6,8,11};
  int target = 14;
  string ans = twoSum(n, v, target);
  cout << ans << endl;
  return 0;
}