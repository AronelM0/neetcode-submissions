class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int, char> seen1;
        unordered_map <int, char> seen2;
        for(int i = 0; i < s.length(); ++i){
            seen1[s[i]]++;
        }
        for(int i = 0; i < t.length(); ++i){
            seen2[t[i]]++;
        }
        for(int i = 0; i < t.length() || i < s.length(); ++i){
            if((seen2[t[i]] != seen1[t[i]]) || (seen2[s[i]] != seen1[s[i]]))
                return false;
        }
        return true;
    }
};
