#include "../inc/minilibmx.h"

char *mx_itoa(int number) {
    char buffer[12];
    int len = 0;
    int digit;
    int power = 1;

    for (int i = number / 10; i != 0; i /= 10) {
        power *= 10;
    }

    if (number < 0) {
        buffer[len++] = '-';
    }
    while (power != 0) {
        digit = number / power % 10;
        if (number < 0) {
            digit *= -1;
        }
        buffer[len++] = (char)('0' + digit);
        power /= 10;
    }
    buffer[len++] = '\0';
    char *res = mx_strnew(len);
    for(int i = 0; i < len + 1; i++) res[i] = buffer[i];
    return res;
}

char* mx_full_itoa(int num, char* cnum) {
    int i = 0;
    char *t = mx_itoa(num);
    char *res = mx_strnew(mx_strlen(cnum));
    int g = mx_strlen(cnum) - mx_strlen(t);
    int g1 = g;

    if (t[0] == '-') {
        res[i++] = '-';
    }
    for (; i < mx_strlen(cnum); i++) {
        if (g-- > 0) {
            res[i] = '0';
        }
        else {
            res[i] = t[i - g1];
        }
    }
    return res;
}


