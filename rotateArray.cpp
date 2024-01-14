class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) {
            k =  k%nums.size() ;
        }
        int s = nums.size()-k;
        reverse(nums.begin() , nums.begin()+s);
         reverse(nums.begin()+s , nums.end());
         reverse(nums.begin() , nums.end());

    }
};