class Solution {
public:
    int mySqrt(int x) {
        int target = x;
        int s=0;
        int e = x;
        int m = s+ (e-s)/2;
        int a = -1;
        while(s<= e){
            if(1LL * m * m == target){
                return m;
            }
            if(1LL * m * m > target){
                e = m-1;
            }
            else{
                a = m;
                s = m+1;
            }
            m = s +(e-s)/2;
        }
        return a;
        
    }
};