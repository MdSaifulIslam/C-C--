#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        // Move start index forward and end index backward
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, world!";   
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);
    return 0;
}
