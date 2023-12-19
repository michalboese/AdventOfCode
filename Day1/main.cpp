#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {
    system("cd");
    vector<string> input;
    ifstream inputFile("input.txt");

    if (inputFile.fail()) {
        cerr << strerror(errno) << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        input.push_back(line);
    }

    vector<string> lineValues;

    int sum = 0;
    for (string s : input) {
        string currentLine;
        size_t firstDigitPos = s.find_first_of("0123456789");
        if (firstDigitPos != string::npos) {
            currentLine += s[firstDigitPos];
        }

        size_t lastDigitPos = s.find_last_of("0123456789");
        if (lastDigitPos != string::npos) {
            currentLine += s[lastDigitPos];
        }
        lineValues.push_back(currentLine);
    }

    for (const string& s : lineValues) {
        sum += stoi(s);
    }

    cout << sum << endl;

    return 0;
}
