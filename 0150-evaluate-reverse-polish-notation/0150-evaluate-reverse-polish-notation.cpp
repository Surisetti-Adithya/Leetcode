class Solution {
public:
    stack<int> a;
    int evalRPN(vector<string>& s) {
        for (int i=0 ; i<s.size() ; i++){
            if (s[i] == "+" || s[i] == "-" || s[i] == "*" || s[i] == "/"){
                int x = a.top();
                a.pop();
                int y = a.top();
                a.pop();
                if (s[i] == "+"){
                    a.push(x+y);
                }
                else if (s[i] == "-"){
                    a.push(y-x);
                }
                else if (s[i] == "*"){
                    a.push(x*y);
                }
                else{
                    a.push(y/x);
                }
            }
            else{
                a.push(stoi(s[i]));
            }
        }
        return a.top();
    }
};