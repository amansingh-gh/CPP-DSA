#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



class Solution {
public:
    bool methodOne(string s, string t){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s==t) return true;
        else return false;
    }

    bool methodTwo(string s, string t){
        int freqTable[256] = {0};
        for(int i=0; i<s.size(); i++){
            freqTable[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            freqTable[t[i]]--;
        }

        for(int i=0; i<256; i++){
            if(freqTable[i] != 0){
                return false;
            }
            
        }
        return true;
    }

    bool isAnagram(string s, string t) {
        // return methodOne(s,t);
        return methodTwo(s,t);
    }
};

int main(){
    string s = "anagram";
    string t = "nagaram";
    
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

    if (s==t){
        cout << "It is a valid anagram";
    }
    else{
        cout << "Not an anagram";
    }

    // cout << s << endl;
    // cout << t;


    return 0;
}