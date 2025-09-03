
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

string trim(const string& strIn) {
    string trimmed_s = strIn;

    trimmed_s.erase(trimmed_s.begin(), std::find_if(trimmed_s.begin(), trimmed_s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
    }));

    trimmed_s.erase(std::find_if(trimmed_s.rbegin(), trimmed_s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
    }).base(), trimmed_s.end());

    return trimmed_s;
}


int main() {
    cout << "\n\n Welcome to My Reverse a String program!\n\n";

    string myStrToReverse = "A Long String to Reverse";
    cout << "\n The string before being reversed is: " << myStrToReverse;
    reverse(myStrToReverse.begin(), myStrToReverse.end());
    cout << "\n My reversed string is: " << myStrToReverse;

    string myStr01 = "   this is a literal string   ";

    int strlength = 0;

    strlength = myStr01.length();

    cout << "\n The length of my myStr01 is: " << strlength;
    cout << "\n\n myStr01 is:" << myStr01 << "\n";

    string myTrimmedStr = trim(myStr01);

    strlength = myTrimmedStr.length();
    cout << "\n The length of my myTrimmedStr is: " << strlength;
    cout << "\n myTrimmedStr is:" << myTrimmedStr << "\n\n";



    return 0;
}