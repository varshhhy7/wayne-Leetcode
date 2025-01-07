class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse from the last digit to the first
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // If the current digit is less than 9, increment it and return
                digits[i]++;
                return digits;
            }
            // Set current digit to 0 if it is 9 (carry over)
            digits[i] = 0;
        }
        
        // If we exit the loop, all digits were 9, so we need a leading 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
