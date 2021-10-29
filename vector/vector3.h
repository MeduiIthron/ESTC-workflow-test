#ifndef VECTOR3_H
#define VECTOR3_H

typedef struct vector3_t {
    double x;
    double y;
    double z;
} vector3_t;

vector3_t sum(const vector3_t* vector1, const vector3_t* vector2);
vector3_t sub(const vector3_t* vector1, const vector3_t* vector2);
double dot(const vector3_t* vector1, const vector3_t* vector2);
vector3_t cross(const vector3_t* vector1, const vector3_t* vector2);

#endif //VECTOR3_H
