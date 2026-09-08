class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequent;

        for(int& i : nums)
        {
            frequent[i]++;
        }
        
        priority_queue<pair<int, int>> pq;
        for(auto& pair : frequent)
        {
            pq.push({pair.second, pair.first});
        }

        vector<int> result;
        while(k-- > 0 && !pq.empty())
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};