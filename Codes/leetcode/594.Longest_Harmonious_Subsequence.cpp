class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxLength = 0;
        unordered_map<int, int> freqMap;

        for (int num : nums) {
            freqMap[num]++;
        }

        for (auto it : freqMap) {
            int num = it.first;
            int count = it.second;

            if (freqMap.find(num + 1) != freqMap.end()) {
                int len = count + freqMap[num + 1];
                maxLength = max(maxLength, len);
            }
        }

        return maxLength;
    }
};