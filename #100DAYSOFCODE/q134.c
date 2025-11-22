//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

int main() {
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    enum Status result = SUCCESS;

    if (result == SUCCESS) {
        printf("Operation was successful.\n");
    }
    else if (result == FAILURE) {
        printf("Operation failed.\n");
    }
    else if (result == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}
