class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0 , h=a.size()-1 , m;
        while(l<h){
            m=l+(h-l)/2;
            if (a[l]<a[h])
                return a[l];
            /*if (a[m]>a[m-1] && a[m]>a[m+1])
                return a[m];*/
            if (a[m]>a[h])
                l=m+1;
            else 
                h=m; 
        }
        return a[l];
    }
};