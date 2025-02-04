#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

int getSingleElement(vector<int> &v){
  int n = v.size();
  map<int,int> mpp;
  for(int i=0; i<n; i++){
    mpp[v[i]]++;
  }
  for(auto it : mpp){
    if(it.second == 1) return it.first;
  }
  return -1;
}
int main() {
  vector<int> v = {1,1,2,3,3};
  int ans = getSingleElement(v);
  cout << "The single element is: " << ans << endl;
  return 0;
}