#ifndef SERVICE_H
#define SERVICE_H

#include "src/models/model.h"

typedef struct Service Service;

Service* Service_create();
void Service_init(Service* self);
void Service_run(Service* self, Model* model);
void Service_destroy(Service* self);

#endif