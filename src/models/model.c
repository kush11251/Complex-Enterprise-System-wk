#include "src/models/model.h"

struct Model {
    int data;
};

Model* Model_create() {
    Model *model = malloc(sizeof(Model));
    model->data = 0;
    return model;
}

void Model_destroy(Model* self) {
    free(self);
}