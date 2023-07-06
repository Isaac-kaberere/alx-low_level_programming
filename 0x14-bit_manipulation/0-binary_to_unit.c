#include <iostream>
#include <cstring>
#include "main.h"

unsigned int binary_to_uint(const char *b) {
    // Check if the input string is NULL
    if (b == NULL) {
        return 0;
    }

    unsigned int result = 0;
    int len = strlen(b);

    // loop to iterate every character in the string
    for (int i = 0; i < len; i++) {
        // control flow to check whether the character is ‘0’ or ‘1’
        if (b[i] == '0' || b[i] == '1') {
            // change the new result to the left by 1 bit
            result <<= 1;
            // Add the new bit to the result
            result |= (b[i] - '0');
        } else {
            // Invalid character found, return 0
            return 0;
        }
    }

    return result;
}

int main() {
    const char *binaryStr = "11010110";
    unsigned int result = binary_to_uint(binaryStr);
    std::cout << "Binary: " << binaryStr << std::endl;
    std::cout << "Unsigned int: " << result << std::endl;

    return 0;
}

