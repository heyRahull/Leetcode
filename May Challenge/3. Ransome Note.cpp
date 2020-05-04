/*
Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mp1;
        map<char,int>mp2;

        for(int i=0;i<(int)magazine.size();i++)
        {
            mp1[magazine[i]]++;
        }

        for(int i=0;i<(int)ransomNote.size();i++)
        {
            mp2[ransomNote[i]]++;

        }

        for(int i=0;i<mp2.size();i++)
        {
            if(mp2[i]>mp1[i]){
            return false;

            }
        }return true;

    }
};
