#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

#define INVALID_OPERAND "Invalid operand: "
#define INVALID_OPERATION "Invalid operation: "
#define INVALID_RESULT "Invalid result: "

bool mx_isdigit(int c);
bool mx_isspace(char c);
bool mx_check_op(char *op);
bool mx_check_num(char *num);
bool mx_valid_num(int num, char *cnum);

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_print_result(int num1, char op, int num2, int res);
void mx_printerr(const char *s);
void mx_show_error(char *error, char *x);

void mx_check_result(int num1, char op, int num2, int res);
void mx_find(char *num1, char op, char *num2, char *res);

char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);char *mx_strtrim(const char *str);
char *mx_strnew(const int size);
char *mx_itoa(int number);
char *mx_full_itoa(int num, char *cnum);

int mx_strlen(const char *s);
int mx_min_pos_num(char *num);
int mx_max_pos_num(char *num);
int mx_next(char *num, int prev);

int mx_add(int a, int b);
int mx_div(int a, int b);
int mx_mul(int a, int b);
int mx_sub(int a, int b);

#endif

