#include <string>
#include <iostream>

using namespace std;

#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_length = 0;
        int curr_length = 0;

        unordered_map<char, int> char_map;
        
        int l = 0;

        for(int r = 0; r < s.size(); r++) {
            if (char_map.count(s[r]) && char_map[s[r]] >= l) {
                l = char_map[s[r]] + 1;
            }

            char_map[s[r]] = r;


            curr_length = r - l + 1;
            max_length = max(curr_length, max_length);
        }
        return max_length;
    }
};

int main() {
    string test;

    cin >> test;

    Solution logest;
    cout << logest.lengthOfLongestSubstring(test);

    return 0;
}