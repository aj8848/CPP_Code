#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, remainder, original;

    cout << "Enter a number: ";
    cin >> num;

    original = num;  // store the original number

    // reverse the number
    while (num != 0) {
        remainder = num % 10;                // get the last digit
        reversed = reversed * 10 + remainder; // build reversed number
        num /= 10;                            // remove the last digit
    }

    // check if palindrome
    if (original == reversed)
        cout << original << " is a palindrome number." << endl;
    else
        cout << original << " is not a palindrome number." << endl;

    return 0;
}
