#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "src/services/service.h"

typedef struct Controller Controller;

Controller* Controller_create();
void Controller_init(Controller* self);
void Controller_run(Controller* self);
void Controller_destroy(Controller* self);

#endif