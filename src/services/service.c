#include "src/services/service.h"
#include "src/utils/utils.h"

struct Service {
    Utils *utils;
};

Service* Service_create() {
    Service *service = malloc(sizeof(Service));
    service->utils = Utils_create();
    return service;
}

void Service_init(Service* self) {
    Utils_init(self->utils);
}

void Service_run(Service* self, Model* model) {
    Utils_run(self->utils, model);
}

void Service_destroy(Service* self) {
    Utils_destroy(self->utils);
    free(self);
}