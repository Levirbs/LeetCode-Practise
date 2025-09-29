#include <string>
#include <iostream>

using namespace std;

#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> substring_map;
        
        int length = 0;
        int curr_length = 0;

        for(long long i = 0; i < s.size(); i++) {
            if(!substring_map.count(s[i])) {
                substring_map[s[i]] = i;
                curr_length++;

                if (curr_length > length) length = curr_length;

            } else {
                substring_map.clear();
                substring_map[s[i]] = i;
                curr_length = 1;
                int temp = i - 1;
                char curr_char = s[temp];
                
                while(!substring_map.count(curr_char)) {
                    substring_map[s[temp]] = temp;
                    curr_length++;
                    temp--;
                    curr_char = s[temp];
                }
            }
        }
        return length;
    }
};

int main() {
    string test;

    cin >> test;

    Solution logest;
    cout << logest.lengthOfLongestSubstring(test);

    return 0;
}