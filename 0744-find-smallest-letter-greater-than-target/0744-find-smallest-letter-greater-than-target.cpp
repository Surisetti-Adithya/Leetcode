class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char k) {
        int l=0 , h=s.size()-1 , m;
        while(l<h){
            m=l+(h-l)/2;
            if (k<s[m])
                h=m;
            else {
                l=m+1;
            }
        }
        if (k>=s[h])
            return s[0];
        return s[h];
    }
};