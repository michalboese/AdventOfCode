#include <iostream>
#include <vector>

using namespace std;

int main() {
    string example = "1abc33dsa";
    string values;
    int sum = 0;

    size_t firstDigitPos = example.find_first_of("0123456789");
    if (firstDigitPos != string::npos) {
        values += example[firstDigitPos];
    }

    size_t lastDigitPos = example.find_last_of("0123456789");
    if (lastDigitPos != string::npos) {
        values += example[firstDigitPos];
    }



    cout << "Sum: " << values << endl;

    return 0;
}
