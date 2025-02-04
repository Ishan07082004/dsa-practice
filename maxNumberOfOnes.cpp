#include<bits/stdc++.h>
using namespace std;
// typedef long long ll;
// #define PB push_back

class Solution{
  public: 
    int findMaxNumberOfOnes(vector <int> &nums){
      int cnt = 0;
      int maxi = 0;
      for(int i = 0; i<nums.size(); i++){
        if(nums[i] == 1){
          cnt++;
        } else {
          cnt = 0;
        }
        maxi = max(maxi, cnt);
      }
      return maxi;
    }
};
int main() {
  vector<int> nums = {1,1,0,1,1,1};
  Solution obj;
  int ans = obj.findMaxNumberOfOnes(nums);
  cout << "Max num of Ones in the array are: " << ans;
  return 0;
}