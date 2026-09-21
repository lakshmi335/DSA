class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.size();
        while(i<j){
            bool left = (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                         s[i] == 'o' || s[i] == 'u' ||
                         s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                         s[i] == 'O' || s[i] == 'U');

            bool right = (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' ||
                          s[j] == 'o' || s[j] == 'u' ||
                          s[j] == 'A' || s[j] == 'E' || s[j] == 'I' ||
                          s[j] == 'O' || s[j] == 'U');
            if (left && right) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if (left) {
                j--;
            }
            else {
                i++;
            }
        }

        return s;
    }
};