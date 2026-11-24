class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;

        for(int i = 0; i < emails.size(); i++) {
            int f = 0;
            string cs = "";

            for(int j = 0; j < emails[i].size(); j++) {

                if(emails[i][j] == '@') f++;

                if(f == 0) {
                    if(emails[i][j] == '.') {
                        continue;
                    }
                    else if(emails[i][j] == '+') {
                        while(emails[i][j] != '@') j++;

                        cs += '@';
                        f++;
                    }
                    else {
                        cs += emails[i][j];
                    }
                }
                else {
                    cs += emails[i][j];
                }
            }

            s.insert(cs);
        }

        return s.size();
    }
};