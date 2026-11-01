class Solution {
public:
    string toGoatLatin(string sentence) {
        string result = "";
        string word = "";
        bool first = true;
        bool consonent = false;
        char cons;
        int count = 1;

        for (int i = 0; i <= sentence.length(); i++) {
            if (i == sentence.length() || sentence[i] == ' ') {
                first = true;

                if (consonent == true) {
                    word.append(1, cons);
                    consonent = false;
                }

                word.append("ma");

                for (int j = 0; j < count; j++) {
                    word.append(1, 'a');
                }

                result.append(word);

                if (i != sentence.length()) {
                    result.append(1, ' ');
                }

                word = "";
                count++;
            }
            else if (first == true) {
                if (sentence[i] == 'a' || sentence[i] == 'e' ||
                    sentence[i] == 'i' || sentence[i] == 'o' ||
                    sentence[i] == 'u' || sentence[i] == 'A' ||
                    sentence[i] == 'E' || sentence[i] == 'I' ||
                    sentence[i] == 'O' || sentence[i] == 'U') {

                    word.append(1, sentence[i]);
                    first = false;
                }
                else {
                    cons = sentence[i];
                    consonent = true;
                    first = false;
                }
            }
            else {
                word.append(1, sentence[i]);
            }
        }

        return result;
    }
};
