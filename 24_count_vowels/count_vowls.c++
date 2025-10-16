#include <iostream>
#include <string>
using namespace std;

int count_vowels(const string &str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    string str = "the real goat";
    int result = count_vowels(str);
    cout << result << endl;
    return 0;
}