class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> results(s.size()+1);
        int leftPointer = 0;
        int rightPointer = s.size();
        int index = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='I') results[index++]=leftPointer++;
            else results[index++] = rightPointer--;
        }

        if(s[s.size()-1]=='I')results[index] = leftPointer;
        else results[index] = rightPointer;

        return results;
    }
};