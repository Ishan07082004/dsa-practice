#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("blist.in");
    ofstream fout("blist.out");

    int n; 
    fin >> n;

    vector<int> buckets(1001, 0); 

    for (int i = 0; i < n; ++i) {
        int si, ti, bi; 
        fin >> si >> ti >> bi;

        buckets[si] += bi;        
        buckets[ti + 1] -= bi;    
    }

    int max_buckets = 0, current_buckets = 0;

    for (int t = 1; t <= 1000; ++t) {
        current_buckets += buckets[t];
        max_buckets = max(max_buckets, current_buckets);
    }

    fout << max_buckets << endl; 

    return 0;
}
