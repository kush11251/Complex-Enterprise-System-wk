#include "src/controllers/controller.h"
#include "src/models/model.h"

struct Controller {
    Service *service;
};

Controller* Controller_create() {
    Controller *controller = malloc(sizeof(Controller));
    controller->service = Service_create();
    return controller;
}

void Controller_init(Controller* self) {
    Service_init(self->service);
}

void Controller_run(Controller* self) {
    Model *model = Model_create();
    Service_run(self->service, model);
    Model_destroy(model);
}

void Controller_destroy(Controller* self) {
    Service_destroy(self->service);
    free(self);
}