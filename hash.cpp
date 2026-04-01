#include <iostream>
#include <string>
#include <cctype>
using namespace std;

long long computeHash(string text) {
    const int p = 31;
    const int m = 1e9 + 9;

    long long hash = 0;
    long long power = 1;

    for (char c : text) {
        if (isalpha(c)) {
            hash = (hash + (tolower(c) - 'a' + 1) * power) % m;
            power = (power * p) % m;
        }
    }

    return (hash + m) % m;
}
