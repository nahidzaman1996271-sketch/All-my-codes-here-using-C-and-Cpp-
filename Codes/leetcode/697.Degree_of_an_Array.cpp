class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());

        vector<int> arr(max + 1, 0);

        int freq = 0;
        vector<int> freq_ele;

        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]]++;

            if (arr[nums[i]] > freq) {
                freq = arr[nums[i]];
            }
        }

        for (int i = 0; i <= max; i++) {
            if (arr[i] == freq) {
                freq_ele.push_back(i);
            }
        }

        int len = nums.size();

        for (int i = 0; i < freq_ele.size(); i++) {
            int first = -1;
            int last = -1;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == freq_ele[i]) {
                    if (first == -1) {
                        first = j;
                    }

                    last = j;
                }
            }

            if (last - first + 1 < len) {
                len = last - first + 1;
            }
        }

        return len;
    }
};