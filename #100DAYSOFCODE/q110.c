//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int deque[n];
    int front = 0, back = -1;

    for (int i = 0; i < n; i++) {

        if (front <= back && deque[front] <= i - k)
            front++;

        while (front <= back && arr[deque[back]] <= arr[i])
            back--;

        deque[++back] = i;

        if (i >= k - 1)
            printf("%d ", arr[deque[front]]);
    }

    return 0;
}
