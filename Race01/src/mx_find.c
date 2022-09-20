#include "../inc/minilibmx.h"

void mx_find(char *num1, char op, char *num2, char *res) {
    if (op == '?') {
        mx_find(num1, '+', num2, res);
        mx_find(num1, '-', num2, res);
        mx_find(num1, '*', num2, res);
        mx_find(num1, '/', num2, res);
        return;
    }
    if (num1[0] == '-') num1++;
    if (num2[0] == '-') num2++;
    if (res[0] == '-') res++;

    for (int i = mx_min_pos_num(num1);; i = mx_next(num1, i)) {
        for (int j = mx_min_pos_num(num2);; j = mx_next(num2, j)) {
            for (int k = mx_min_pos_num(res);; k = mx_next(res, k)) {
                int i1 = (num1[-1] == '-') ? i * -1 : i;
                int j1 = (num2[-1] == '-') ? j * -1 : j;
                int k1 = (res[-1] == '-') ? k * -1 : k;
                mx_check_result(i1, op, j1, k1);
                if (k == mx_max_pos_num(res)) break;
            }
            if (j == mx_max_pos_num(num2)) break;
        }
        if (i == mx_max_pos_num(num1)) break;
    }
}

