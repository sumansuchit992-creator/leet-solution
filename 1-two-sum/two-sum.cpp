class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int>& arr;
        int i, j;

       // int n;
        //cout<<"enter your array size"<< endl;
        //cin>> n ;
        //cout<< "enter your array" << endl;
        //for(int i=0; i<n; i++){
            //cout<<nums[i];
        //}
       int findTarget(const vector<int>& nums, int target) ;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]== target){
                    return {i,j};
                }
            }
            
        }
        return {}; // Return default value
        
    }
};