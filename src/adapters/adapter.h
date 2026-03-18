#ifndef ADAPTER_H
#define ADAPTER_H

typedef struct Adapter Adapter;

Adapter* Adapter_create();
void Adapter_init(Adapter* self);
void Adapter_run(Adapter* self);
void Adapter_destroy(Adapter* self);

#endif