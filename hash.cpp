#include <iostream>
#include <string>
#include <cctype>
using namespace std;

long long computeHash(string text) {
    const long long p = 31;
    const long long m = 1000000009;

    long long hash = 0;

    for (char c : text) {
        if (isalpha(c)) {
            long long value = tolower(c) - 'a' + 1;
            hash = (hash * p + value) % m;   
        }
    }

    return hash;   
}
