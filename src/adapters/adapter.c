#include "src/adapters/adapter.h"

struct Adapter {
    int flag;
};

Adapter* Adapter_create() {
    Adapter *adapter = malloc(sizeof(Adapter));
    adapter->flag = 0;
    return adapter;
}

void Adapter_init(Adapter* self) {
    self->flag = 1;
}

void Adapter_run(Adapter* self) {
    printf("Adapter running with flag %d\n", self->flag);
}

void Adapter_destroy(Adapter* self) {
    free(self);
}