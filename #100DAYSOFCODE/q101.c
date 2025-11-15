//
#include <stdio.h>

int firstOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;  
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return result;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;  
        }
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return result;
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target value: ");
    scanf("%d", &target);

    int first = firstOccurrence(arr, n, target);
    int last = lastOccurrence(arr, n, target);

    printf("First Occurrence Index: %d\n", first);
    printf("Last Occurrence Index: %d\n", last);

    return 0;
}
