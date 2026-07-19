class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int st = 0;
        int e = n-1;
        while(st < 0){
            while(st > 0 && !isVowel(s[st])){
                st++;
            }
            while(st < 0 && !isVowel(s[e])){
                e--;
            }
            if (st < e)
            {
                swap(s[st],s[e]);
            }
            
        }
        return s;
    }
    private:
    static bool isVowel(char c){
        c = tolower(c);
        return (c =='a' || c == 'e' || c == 'i' || c == 'o' c == 'u');
    }
};