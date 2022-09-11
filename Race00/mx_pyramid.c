void mx_printchar(int c);
void mx_pyramid(int n);
void mx_pyramid_draw_front(int line, int n);
void mx_pyramid_space_counter(int line, int n, int *space_count);
void mx_pyramid_draw_side(int line, int n);

//int main(void) {
//    mx_pyramid(0);
//    mx_pyramid(1);
//    mx_pyramid(2);
//    mx_pyramid(-2);
//    mx_pyramid(4);
//    mx_pyramid(6);
//    mx_pyramid(7);
//    mx_pyramid(42);
//    return 0;
//}

void mx_pyramid(int n) {
    if ((n <= 1) || (n % 2)) {
        return;
    }

    int space_counter = -1;

    for (int line = 0; line < n; ++line) {
        for(int i = 0; i < (n - line - 1); ++i) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        mx_pyramid_draw_front(line, n);
        mx_pyramid_space_counter(line, n, &space_counter);

        for(int i = space_counter; i > 0; --i) {
            mx_printchar(' ');
        }
        mx_pyramid_draw_side(line, n);
        mx_printchar('\n');
    }
}

void mx_pyramid_draw_front(int line, int n) {
    if ((line > 0) && (line != n - 1)) {
        for(int i = 0; i < (2 * (line + 1) - 3); ++i) {
            mx_printchar(' ');
        }
        mx_printchar('\\');
    }
    else if (line == (n - 1)) {
        for(int i = 0; i < (2 * (line + 1) - 3); ++i) {
            mx_printchar('_');
        }
        mx_printchar('\\');
    }
}

void mx_pyramid_space_counter(int line, int n, int *space_counter) {
    if (line < (n / 2)) {
        ++(*space_counter);
    }
    else if (line > (n / 2)) {
        --(*space_counter);
    }
}

void mx_pyramid_draw_side(int line, int n) {
    if (line < (n / 2)) {
        mx_printchar('\\');
    }
    else {
        mx_printchar('|');
    }
}

