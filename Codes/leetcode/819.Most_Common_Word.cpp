
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> mp;
        paragraph += " ";
        string curr = "";
        set<string> banned_set;

        for (auto i : banned) {
            banned_set.insert(i);
        }

        for (int i = 0; i < paragraph.size(); i++) {
            if (paragraph[i] >= 'a' && paragraph[i] <= 'z') {
                curr += paragraph[i];
            }
            else if (paragraph[i] >= 'A' && paragraph[i] <= 'Z') {
                curr += tolower(paragraph[i]);
            }
            else {
                if (curr != "") {
                    mp[curr]++;
                }
                curr = "";
            }
        }

        int maxi = 0;
        string ans = "";

        for (auto i : mp) {
            if (banned_set.count(i.first) == 0) {
                if (i.second > maxi) {
                    maxi = i.second;
                    ans = i.first;
                }
            }
        }

        return ans;
    }
};
