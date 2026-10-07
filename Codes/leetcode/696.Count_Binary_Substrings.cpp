class Solution {
public:
    int countBinarySubstrings(string s) {
        int currCount=0;
        int prevCount=0;
        int totalCount=0;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                currCount++;
            }else{
                totalCount+=min(currCount,prevCount);
                prevCount=currCount;
                currCount=1;
            }
        }
        totalCount+=min(currCount,prevCount);
        return totalCount;
    }
};