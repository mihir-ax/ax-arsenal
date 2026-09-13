#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    vector<string> generateTitlePrefixes(string title) {
        vector<string> v;
        
        if (title.empty()) return v;
        
        v.push_back(string (1, title[0]));
        
        for (int i = 1; i < title.size(); i++){
           v.push_back(v[i-1] + title[i]);
        }
        
        return v;
        
    }
};