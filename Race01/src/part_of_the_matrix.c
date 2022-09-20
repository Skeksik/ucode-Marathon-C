#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
        return -1;
    }

    char *operation = mx_strtrim(argv[2]);
    char *num1 = mx_strtrim(argv[1]);
    char *num2 = mx_strtrim(argv[3]);
    char *result = mx_strtrim(argv[4]);

    if (!mx_check_op(operation)) mx_show_error(INVALID_OPERATION, operation);
    if (!mx_check_num(num1)) mx_show_error(INVALID_OPERAND, num1);
    if (!mx_check_num(num2)) mx_show_error(INVALID_OPERAND, num2);
    if (!mx_check_num(result)) mx_show_error(INVALID_RESULT, result);

    mx_find(num1, operation[0], num2, result);

    free(operation);
    free(num1);
    free(num2);
    free(result);

    return 0;
}

