class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.find_last_not_of(' ');
        int length = 0;
        //cout << i;
        while(i >= 0 && s[i] != ' '){
            length++;
            i--;
        }
        return length;
    }
};
