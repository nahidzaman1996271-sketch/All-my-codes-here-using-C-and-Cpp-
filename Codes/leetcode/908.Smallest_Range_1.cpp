class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int m=*max_element(nums.begin(),nums.end());
        int mi=*min_element(nums.begin(),nums.end());
        if(m-mi-2*k<0){
            return 0;
        }
        else{
            return m-mi-2*k;
        }
    }
};