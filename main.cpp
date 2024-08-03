#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    int wordCount = 1;
    int i;
    for (i = 0; i < strlen(input); i++) {
        if (isspace(input[i])) {
            wordCount++;
        }
    }

    char* words[wordCount];
    int j = 0;
    char* token = strtok(input, " ");
    while (token != NULL) {
        words[j++] = token;
        token = strtok(NULL, " ");
    }

    printf("Number of words: %d\n", wordCount);
    printf("Words in reverse order:\n");
    for (i = wordCount - 1; i >= 0; i--) {
        printf("%s ", words);
    }
    printf("\n");

    return 0;
}
