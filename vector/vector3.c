#include "vector3.h"

vector3_t sum(const vector3_t* vector1, const vector3_t* vector2) {
    vector3_t result;
    result.x = vector1->x + vector2->x;
    result.y = vector1->y + vector2->y;
    result.z = vector1->z + vector2->z;
    return result;
}

vector3_t sub(const vector3_t* vector1, const vector3_t* vector2) {
    vector3_t result;
    result.x = vector1->x - vector2->x;
    result.y = vector1->y - vector2->y;
    result.z = vector1->z - vector2->z;
    return result;
}

double dot(const vector3_t* vector1, const vector3_t* vector2) {
    return vector1->x * vector2->x + vector1->y * vector2->y + vector1->z * vector2->z;
}

vector3_t cross(const vector3_t* vector1, const vector3_t* vector2) {
    vector3_t result;
    result.x = vector1->y * vector2->z - vector2->y * vector1->z;
    result.y = vector2->x * vector1->z - vector1->x * vector2->z;
    result.z = vector1->x * vector2->y - vector2->x * vector1->y;
    return result;
}