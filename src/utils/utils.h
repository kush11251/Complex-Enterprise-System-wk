#ifndef UTILS_H
#define UTILS_H

typedef struct Utils Utils;

Utils* Utils_create();
void Utils_init(Utils* self);
void Utils_run(Utils* self, Model* model);
void Utils_destroy(Utils* self);

#endif