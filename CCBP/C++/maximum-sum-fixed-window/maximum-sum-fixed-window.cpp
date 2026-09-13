#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int bestFixedWindowSum(vector<int>& values, int k) {
        int totalSum = 0;
        for (int i = 0; i < k; i++){
            totalSum += values[i];
        }
        
        int maxSum = totalSum;
        
        for (int i = k; i < values.size(); i++){
            totalSum += values[i] - values[i - k];
            maxSum = max(totalSum, maxSum);
        }
        
        return maxSum;
        
    }
};  