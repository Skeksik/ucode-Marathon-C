#include "../inc/minilibmx.h"

bool mx_check_op(char *op) {
    char valid_op[5] = {'+', '-', '*', '/', '?'};
    if (mx_strlen(op) != 1) return false;
    for (int i = 0; i < 5; i++) {
        if (op[0] == valid_op[i]) return true;
    }
    return false;
}

bool mx_check_num(char *num) {
    for (int i = 0; num[i] != '\0'; i++) {
        if (i == 0 && (num[i] == '-')) continue;
        if (!mx_isdigit(num[i]) && (num[i] != '?')) return false;
    }
    return true;
}

bool mx_valid_num(int num, char *cnum) {
    char *temp = mx_full_itoa(num, cnum);
    for (int i = 0; cnum[i] != '\0'; i++) {
        if (cnum[i] == '?') continue;
        if (cnum[i] != temp[i]) return false;
    }
    free(temp);
    return true;
}

void mx_check_result(int num1, char op, int num2, int res) { 
    if (op == '+' && mx_add(num1, num2) == res) {
        mx_print_result(num1, op, num2, res);
    }
    if (op == '-' && mx_sub(num1, num2) == res) {
        mx_print_result(num1, op, num2, res);
    }
    if (op == '*' && mx_mul(num1, num2) == res) {
        mx_print_result(num1, op, num2, res);
    }
    if (op == '/' && num2 != 0 ) {
        if (mx_div(num1, num2) == res)
            mx_print_result(num1, op, num2, res);
    }
}

