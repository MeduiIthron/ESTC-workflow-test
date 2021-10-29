#include <stdio.h>
#include "../vector/vector3.h"

int main(void) {
    vector3_t vector1;
    vector3_t vector2;

    printf("Input first vector coords X, Y, Z: >>> ");
    scanf("%lf %lf %lf", &vector1.x, &vector1.y, &vector1.z);
    printf("Input second vector coords X, Y, Z: >>> ");
    scanf("%lf %lf %lf", &vector2.x, &vector2.y, &vector2.z);

    vector3_t resultSum = sum(&vector1, &vector2);
    printf("Sum of (%lf, %lf, %lf) and (%lf, %lf, %lf) is (%lf, %lf, %lf)\n",
           vector1.x, vector1.y, vector1.z,
           vector2.x, vector2.y, vector2.z,
           resultSum.x, resultSum.y, resultSum.z);

    vector3_t resultSub = sub(&vector1, &vector2);
    printf("Sub of (%lf, %lf, %lf) and (%lf, %lf, %lf) is (%lf, %lf, %lf)\n",
           vector1.x, vector1.y, vector1.z,
           vector2.x, vector2.y, vector2.z,
           resultSub.x, resultSub.y, resultSub.z);

    double resultDot = dot(&vector1, &vector2);
    printf("Dot of (%lf, %lf, %lf) and (%lf, %lf, %lf) is %lf\n",
           vector1.x, vector1.y, vector1.z,
           vector2.x, vector2.y, vector2.z,
           resultDot);

    vector3_t resultCross = cross(&vector1, &vector2);
    printf("Cross of (%lf, %lf, %lf) and (%lf, %lf, %lf) is (%lf, %lf, %lf)\n",
           vector1.x, vector1.y, vector1.z,
           vector2.x, vector2.y, vector2.z,
           resultCross.x, resultCross.y, resultCross.z);
    return 0;
}