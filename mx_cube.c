void mx_cube2(int row, int n);
void mx_cube3(int row, int n);
void mx_cube4(int row, int n, int *spaceCount);
void mx_cube5(int row, int n);
void mx_printchar(int c);
void mx_cube(int n) {
    if (n > 1) {
        int spaceCount = -1;
        for (int row = 0; row < (3 + (n / 2) + n); row++) {
            mx_cube2(row, n);
            mx_cube3(row, n);
            if (row > 0) {
                mx_cube4(row, n, &spaceCount);
                for (int x = spaceCount; x > 0; x--) {
                    mx_printchar(32);
                }
                mx_cube5(row, n);
            }
            mx_printchar(10);
        }
    }
}
void mx_cube2(int row, int n) {
    if (row < ((n / 2) + 1) ) {
        for(int i = 0; i <= ((n / 2) - row); i++) {
            mx_printchar(32);
        }
    }
    if (row == 0 || row == ((n / 2) + 1) || row == (3 + (n / 2) + n) - 1) {
        mx_printchar(43);
        for(int i = 0; i < (2 * n); i++) {
            mx_printchar(45);
        }
        mx_printchar(43);
    }
}
void mx_cube3(int row, int n) {
    if (row > 0 && row < ((n / 2) + 1)) {
        mx_printchar(47);
        for(int i = 0; i < (2 * n); i++) {
            mx_printchar(32);
        }
        mx_printchar(47);
    }
    if (row < ((3 + (n / 2) + n) - 1) && row > ((n / 2) + 1)) {
        mx_printchar(124);
        for(int i = 0; i < (2 * n); i++) {
            mx_printchar(32);
        }
        mx_printchar(124);
    }
}
void mx_cube4(int row, int n, int *spaceCount) {
    if (row <= (n / 2) + 1 ) {
        (*spaceCount)++;
    }
    if (row > (n + 1) ) {
        (*spaceCount)--;
    }
}
void mx_cube5(int row, int n) {
    if (row > 0 && row < (n + 1) ) {
        mx_printchar(124);
    }
    else if (row == (n + 1) ) {
        mx_printchar(43);
    }
    else if ( row > (n + 1) && row < ((3 + (n / 2) + n) - 1) ) {
        mx_printchar(47);
    }
}

