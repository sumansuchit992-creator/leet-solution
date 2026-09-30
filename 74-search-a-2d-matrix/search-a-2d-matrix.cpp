class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int s= 0;
        int e= rows*cols - 1;
        

        while(s <=e){
            int mid= s+(e-s)/2;
            int rowind = mid/cols;
            int colind = mid%cols;
            if(matrix[rowind][colind]== target){
                return true;
            }
            if(matrix[rowind][colind] < target){
                s= mid +1;

            }
            else{
                e = mid -1;
            }
            mid = s+ (e-s)/2;
        }
        return false;
        
    }
};