#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int *occurrences) {
    char c;

    // Read characters until Enter (\n) is pressed
    while ((c = getchar()) != '\n') {
        // Check if the character is alphabetic
        if (isalpha(c)) {
            // Convert the character to uppercase and calculate the index of the corresponding letter
            int index = toupper(c) - 'A';
            // Increment the occurrence count for the letter at the calculated index
            (*(occurrences + index))++;
        }
    }
}

bool is_anagram(int *occurrences1, int *occurrences2) {
    // Compare the occurrence counts of each letter in the two arrays
    for (int i = 0; i < 26; i++) {
        // If any counts differ, the words are not anagrams
        if (*(occurrences1 + i) != *(occurrences2 + i)) {
            return false;
        }
    }
    // All counts match, the words are anagrams
    return true;
}

int main(void) {
    // Array to store occurrence counts of letters in the first word
    int occurrences1[26] = { 0 };
    // Array to store occurrence counts of letters in the second word
    int occurrences2[26] = { 0 };
-
    printf("Enter first word: ");
    // Call scan_word to calculate the occurrence counts for the first word
    scan_word(occurrences1);

    printf("Enter second word: ");
    // Call scan_word to calculate the occurrence counts for the second word
    scan_word(occurrences2);

    if (is_anagram(occurrences1, occurrences2)) {
        printf("The words are anagrams.\n");
    } else {
        printf("The words are not anagrams.\n");
    }

    return 0;
}
