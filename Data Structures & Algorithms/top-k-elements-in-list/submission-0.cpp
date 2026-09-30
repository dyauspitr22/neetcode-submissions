class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //We have to use BucketSort here somehow. This way the problem can be solved in O(n) time.
        unordered_map<int, int> frequency_map;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> result;
        for(auto entry: nums){
            frequency_map[entry]++;
        }

        for(auto &p: frequency_map){
            bucket[p.second].push_back(p.first);
        }

        for(int i=nums.size(); i>=1; --i){
            if(!(bucket[i].empty()) && result.size()!=k){
                result.insert(result.end(), bucket[i].begin(), bucket[i].end());
            }
        }
        return result;
    }
};
