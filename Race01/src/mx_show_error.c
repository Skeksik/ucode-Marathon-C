#include "../inc/minilibmx.h"

void mx_show_error(char *error, char *x) {
    mx_printerr(error);
    mx_printerr(x);
    mx_printerr("\n");
    exit(-1);
}

