#include "../inc/minilibmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) return NULL;

    while (mx_isspace(*str)) str++;
    int len = mx_strlen(str);
    while (mx_isspace(str[len - 1])) len--;
    char *temp = mx_strnew(len);

    mx_strncpy(temp, str, len);
    return temp;
}

