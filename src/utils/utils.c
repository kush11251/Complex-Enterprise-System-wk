#include "src/utils/utils.h"
#include <stdio.h>

struct Utils {
    int flag;
};

Utils* Utils_create() {
    Utils *utils = malloc(sizeof(Utils));
    utils->flag = 0;
    return utils;
}

void Utils_init(Utils* self) {
    self->flag = 1;
}

void Utils_run(Utils* self, Model* model) {
    printf("Utils running with flag %d and model data %d\n", self->flag, model->data);
}

void Utils_destroy(Utils* self) {
    free(self);
}