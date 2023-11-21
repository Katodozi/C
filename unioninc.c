#include <stdio.h>

union IntOrFloat {
    int i;
    float f;
};

int main() {
    union IntOrFloat value;
    value.i = 10;
    printf("Value as integer: %d\n", value.i);
    value.f = 3.14;
    printf("Value as float: %f\n", value.f);
    printf("Value as integer after assigning float: %d\n", value.i);
    return 0;
}

