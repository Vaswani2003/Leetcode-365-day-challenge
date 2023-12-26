/*

49. Group anagrams

Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        vector<vector<string>> ans;
        string x;
        for(auto word: strs){
            x = word;
            sort(word.begin(), word.end());
            (hash[word]).push_back(x);
        }
        for(auto vec: hash){
            ans.push_back(vec.second);
        }
        return ans;

    }
};
