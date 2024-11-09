#include <iostream>
#include <string>
using namespace std;

int Count(const string& str) {
    if (str.length() < 3)
        return 0;

    int k = 0;
    for (size_t i = 0; i <= str.length() - 3; i++) {
        if (str.substr(i, 3) == "abc") {
            k++;
        }
    }
    return k;
}

string Change(string& str) {
    if (str.length() < 3)
        return str;

    string result;
    size_t i = 0;

    while (i < str.length()) {
        if (i <= str.length() - 3 && str.substr(i, 3) == "abc") {
            result += "**";
            i += 3;
        }
        else {
            result += str[i];
            i++;
        }
    }

    str = result;  // «м≥нюЇмо вх≥дний параметр
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " groups of 'abc'" << endl;

    string result = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << result << endl;

    return 0;
}