#include "../inc/minilibmx.h"

int mx_max_pos_num(char *num) {
    int res = 0;
    int i = 0;

    if (num[0] == '-') i++;
    for (; num[i] != '\0'; i++) {
        if (num[i] == '?') res = res *10 + 9;
        else res = res * 10 + (num[i] - '0');
    }
    return res;
} 

int mx_min_pos_num(char *num) {
    int res = 0;
    int i = 0;
    
    if (num[0] == '-') i++;
    for (; num[i] != '\0'; i++) {
        if (num[i] == '?') res = res *10 + 0;
        else res = res * 10 + (num[i] - '0');
    }
    return res;
} 

int mx_next(char *num, int prev) {
    int res = ++prev;

    while (!mx_valid_num(res, num)) res++;
    return res;
}

