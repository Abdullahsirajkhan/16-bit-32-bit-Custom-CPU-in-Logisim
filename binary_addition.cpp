#include <iostream>
#include <string>
using namespace std;

string bin_add(string s1, string s2) {
    string result = "";
    int i = s1.length() - 1;
    int j = s2.length() - 1;
    int carry = 0;

    // Loop until both strings are processed or there's a carry left
    while (i >= 0 || j >= 0 || carry) {
        int bit1 = (i >= 0) ? s1[i] - '0' : 0;
        int bit2 = (j >= 0) ? s2[j] - '0' : 0;

        int sum = bit1 + bit2 + carry;
        result = char((sum % 2) + '0') + result;
        carry = sum / 2;

        i--;
        j--;
    }

    return result;
}

int main() {
    string s1 = "10101010";
    string s2 = "10001001";
    cout << "Binary Addition: " << bin_add(s1, s2) << endl;
    return 0;
}
