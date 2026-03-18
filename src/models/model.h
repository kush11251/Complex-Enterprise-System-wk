#ifndef MODEL_H
#define MODEL_H

typedef struct Model Model;

Model* Model_create();
void Model_destroy(Model* self);

#endif