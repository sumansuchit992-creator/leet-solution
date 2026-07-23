class Solution {
public:
    bool isPowerOfThree(int n) {
        for (double i = 0; i <= 20.1897521143; i++){
            double ans = pow(3,i);
            if(ans == n){
                return true ;
            }
        }
        return false ;
        
    }
};