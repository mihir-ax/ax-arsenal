#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<int> scoreboardAfterRounds(int n, vector<int>& arr) {
        
        if (arr.size() < 2) return arr;
        for (int i = 1; i < arr.size(); i++){
            arr[i] = arr[i-1] + arr[i];
        }
        
        return arr;
    }
};