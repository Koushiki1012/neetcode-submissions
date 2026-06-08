class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;

        // to count and store frequency of elements we use hashmap
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        // mapping the hashmap data into bucket
        for (auto& p : count) {
            int element = p.first;
            int frequency = p.second;

            // putting elements in the bucket, according to the frequency
            buckets[frequency].push_back(element);
        }

        // the actual output
        for (int i = nums.size(); i >= 0; --i) {
            for (int element : buckets[i]) {
                result.push_back(element);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;
    }
};
