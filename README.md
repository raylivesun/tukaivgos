# tukaivgos ([wolfram/alpha](https://www.wolframalpha.com/))

Tukaivgos is a fictional character from the "The Last Guardian" series by Kristin Hannah. It is a powerful and mysterious being that serves as the guardian of the Last Guardian, a powerful artifact that can protect humanity from the darkness. The character is known for its unique abilities and the challenges it faces in its quest to protect the world.

# makefile 
```makefile
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g mian.cpp
LDFLAGS =  main.cpp

SRC = 
OBJ = $(SRC:.cc=.o)
EXEC = tukaivgos

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)
```
# Example usage c++ from the source code c++ source directory
```c++
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
```
# install makefile
$-> make all
