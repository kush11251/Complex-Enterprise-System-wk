#include "src/controllers/controller.h"
#include <stdio.h>

int main() {
    Controller *controller = Controller_create();
    Controller_init(controller);
    Controller_run(controller);
    Controller_destroy(controller);
    return 0;
}