#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; 
    cin >> n;
    cin.ignore();
    while (n--) {
        string s;
        getline(cin, s);
        vector<string> words;
        string word;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word.push_back(s[i]);
            }
        }
        words.push_back(word);

// -----------------------------------------------------------------------------------

        stable_sort(words.begin(), words.end(), [](const string &a, const string &b) {
            if (a.size() != b.size()) return a.size() > b.size();
            return false;
        });

        for (int i = 0; i < words.size(); i++) {
            if (i > 0) cout << " ";
            cout << words[i];
        }
        cout << endl;
    }
    return 0; 
}