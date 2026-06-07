class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (mpp[nums[i]] >= 2) {
                return true;
            }
        }
        return false;
    }
};