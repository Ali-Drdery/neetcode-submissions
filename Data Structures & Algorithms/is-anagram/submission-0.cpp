class Solution {
public:
    bool isAnagram(string s, string t) {
        // Step 1: Check lengths match
        if (s.length() != t.length()) return false;

        // Step 2: Build frequency array
        int freq[26] = {0};

        // Process both strings in a single pass
        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++; // Increment for character in s
            freq[t[i] - 'a']--; // Decrement for character in t
        }

        // Step 3: Verify all counts are zero
        for(int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false; // Mismatch found
            }
        }
        
        return true; // Exact match, perfectly balanced
    }
};