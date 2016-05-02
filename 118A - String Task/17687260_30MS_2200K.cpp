#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string word;
    cin>>word;
    string newWord;
    string vowel = "aoyeui";
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') word[i] -= 'A' - 'a';
        bool isVowel = false;
        for (int j = 0; j < 6; j++) {
            if (word[i] == vowel[j]) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            newWord += ".";
            newWord += word[i];
        }
    }
    cout<<newWord<<endl;
}