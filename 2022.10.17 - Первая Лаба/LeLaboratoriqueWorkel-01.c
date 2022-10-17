#include <stdio.h>
#include <math.h>

// Subject: Lab-01_Task-02;
// Last: 2022.10.17 14:50

int main() {
    float x, y, z;
    int PreEnter = 0;

    if (PreEnter == 1) {
        printf("Enter x: ");
        scanf("%f", &x);
        printf("Enter y: ");
        scanf("%f", &y);
        printf("Enter z: ");
        scanf("%f", &z);
    } else {
        x = 25.0f;
        y = 16.0f;
        z = 9.0f;
    }

    // Plus
    float xyp = x + y;
    float yzp = y + z;
    float zxp = z + x;

    // Minus
    float xym = x - y;
    float yzm = y - z;
    float zxm = z - x;

    if (x > yzp & x > yzm)
        printf("%f", x);
    else if (y > zxp & x > zxm)
        printf("%f", y);
    else if (z > xyp & x > xym)
        printf("%f", z);
    else
        printf("wtf dude?");

    return 0;
}