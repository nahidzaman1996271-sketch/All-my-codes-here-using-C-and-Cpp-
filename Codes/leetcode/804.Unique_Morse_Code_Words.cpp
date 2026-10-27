class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morseCode[] =
        {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> sets;
        
        for(auto i: words){
            string temp;
            for(auto j: i){
                temp+=morseCode[j-'a'];
            }
            sets.insert(temp);
        }
        return sets.size();
    }
};