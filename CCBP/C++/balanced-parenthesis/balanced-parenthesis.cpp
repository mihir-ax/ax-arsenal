#include<bits/stdc++.h>
using namespace std;


class solution {
public:
    bool balancedParentheses(string s) {
        stack <char> stk;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                stk.push(s[i]);
            } else if (stk.empty()){
                return false;
            } else {
                if (s[i] == ')' || s[i] == '}' || s[i] == ']'){
                    
                    if ((stk.top() == '(' && s[i] == ')') || (stk.top() == '{' && s[i] == '}') || (stk.top() == '[' && s[i] == ']') ) {
                        stk.pop();
                        continue;
                    } 
                    
                } else if (stk.empty()){
                    return true;
                }
            }
        }
        if (stk.empty()){
            return true;
        } else {
            return false;
        }
    }
};