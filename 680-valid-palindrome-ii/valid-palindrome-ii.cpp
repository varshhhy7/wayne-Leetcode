class Solution {
public:
    // Helper function to check if a substring is a palindrome
    bool isValidPalindrome(string s, int l, int h) {
        while (l < h) {
            if (s[l] != s[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l = 0, h = s.size() - 1;

        while (l < h) {
            if (s[l] != s[h]) {
                // Try skipping one character (either l or h)
                return isValidPalindrome(s, l + 1, h) || isValidPalindrome(s, l, h - 1);
            }
            l++;
            h--;
        }
        return true; // The string is already a palindrome
    }
};
