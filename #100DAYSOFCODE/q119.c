//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];
    int visited[n];  

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (visited[arr[i]] == 1) {
            printf("Repeated element is: %d\n", arr[i]);
            return 0;
        }

        visited[arr[i]] = 1;  
    }

    printf("No repeated element found.\n");
    return 0;
}
