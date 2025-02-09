#include <bits/stdc++.h>

using namespace std;

bool isCircularSentence(string sentence) {
    vector<string> tokens;
    stringstream check(sentence);
    string temp;

    while(getline(check, temp, ' ')) {
        tokens.push_back(temp);
    }

    int len = tokens.size();
    for (int i = 0; i < len; i++){
        if(tokens[i].back() != tokens[(i+1)%len].front()) {
            return false;
        }
    }

    return true;
}

int main() {
    string s;
    getline(cin, s);
    if(isCircularSentence(s)) {
        cout << "Yay\n";
    } else {
        cout << "Nay\n";
    }
    return 0;
}
