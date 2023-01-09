#include <stdio.h>

struct myStructure {
    int x;
    int y;
};

int main() {
    struct myStructure point;
    point.x = 10;
    point.y = 20;

    printf("X = %d\n", point.x);
    printf("Y = %d\n", point.y);

    return 0;

}