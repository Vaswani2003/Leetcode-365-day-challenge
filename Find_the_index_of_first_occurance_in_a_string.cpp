/*
Find the Index of the First Occurrence in a String
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Solution details: Time Complexity = O(n), runtime = 0ms.
*/

class Solution {
public:
    int strStr(string hay, string needle) {
        return hay.find(needle);
    }
};
