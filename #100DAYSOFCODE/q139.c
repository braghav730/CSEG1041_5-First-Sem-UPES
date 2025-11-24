//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE = 5,
    TIMEOUT = 10
};

int main() {

    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}

