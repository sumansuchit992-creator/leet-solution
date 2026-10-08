class Solution {
public:
    void reverseString(vector<char>& s) {
    
        int i =0;
        int j = static_cast<int>(s.size()) - 1;
        while(i<=j){
            swap(s[i],s[j]);
            i++ ;
            j--;

        }
        
    }
};