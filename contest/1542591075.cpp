//
// Created by Explo on 10/4/2017.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input;
    cin >> input;

    int substrings;
    cin >> substrings;

    vector<string> answers;
    vector<string> leftcont;
    vector<string> rightcont;

    string temp;

    char l = input.at(0);
    char r = input.at(1);

    for (int i = 0; i < substrings; i++) {
        cin >> temp;

        if (temp == input) {
            answers.push_back(temp);
            break;
        }
        if (temp.at(1) == l) {
            leftcont.push_back(temp);
        }
        if (temp.at(0) == r) {
            rightcont.push_back(temp);
        }
    }

    if (!answers.empty() || (!leftcont.empty() && !rightcont.empty())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}