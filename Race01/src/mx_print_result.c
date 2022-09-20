#include "../inc/minilibmx.h"

void mx_print_result(int num1, char op, int num2, int res) {
    mx_printint(num1);
    mx_printchar(' ');
    mx_printchar(op);
    mx_printchar(' ');
    mx_printint(num2);
    mx_printstr(" = ");
    mx_printint(res);
    mx_printchar('\n');
}

