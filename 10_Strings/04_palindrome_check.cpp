/*
 * Program: Palindrome Check
 * Description: Compares characters from both ends of the string moving
 *              inward. If all pairs match, it's a palindrome.
 */

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str);

int main() {
    string word = "madam";

    if (isPalindrome(word)) {
        cout << "\"" << word << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << word << "\" is NOT a palindrome." << endl;
    }

    return 0;
}

bool isPalindrome(const string &str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
