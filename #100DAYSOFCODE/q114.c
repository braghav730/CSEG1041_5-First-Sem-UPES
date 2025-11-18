//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>

int main() {
    char s[1000];
    int visited[128];   
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s[^\n]", &s); 

    for (i = 0; i < 128; i++)
        visited[i] = -1;   

    for (i = 0; s[i] != '\0'; i++) {

        if (visited[(int)s[i]] >= start) {
            start = visited[(int)s[i]] + 1;
        }

        visited[(int)s[i]] = i;

        int length = i - start + 1;

        
        if (length > maxLen)
            maxLen = length;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
