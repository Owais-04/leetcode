#include <unordered_set>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        vector<int> left(26, 0), right(26, 0);
        unordered_set<char> seen;

        
        for (char c : s) {
            right[c - 'a']++;
        }

        unordered_set<string> uniquePalindromes;

        for (int i = 0; i < n; ++i) {
            char current = s[i];
            right[current - 'a']--; 

            
            for (char between = 'a'; between <= 'z'; ++between) {
                if (left[between - 'a'] > 0 && right[between - 'a'] > 0) {
                    
                    uniquePalindromes.insert(string(1, s[i]) + between + s[i]);
                }
            }

            left[current - 'a']++; 
        }

        return uniquePalindromes.size();
    }
};
