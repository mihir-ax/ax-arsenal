#include <bits/stdc++.h>
using namespace std;

class solution {
    public:
    int maximizeProfit(int n, vector<int>& elements) {
        // Write your code here...
        
        int smallest = elements[0];
        if (elements.size() < 1) return smallest;
        
        for (int i = 1; i < elements.size(); i++){
            if (elements[i] < smallest){
                smallest = elements[i];
            }
            elements[i] = elements[i] + elements[i - 1];
        }
        
        return elements[n - 1] - smallest;
    }
};