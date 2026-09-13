#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    vector<int> buildPrefixTotals(vector<int>& values, int n) {
        
        vector<int> v(n, 0);
        
        v[0] = values[0];
        
        for (int i = 1; i < n; i++){
            v[i] = values[i] + v[i - 1];
        }
        return v;
    }
};