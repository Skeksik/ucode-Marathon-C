#include "../inc/minilibmx.h"

bool mx_isspace(char c) {
	return ((int)c == 32 
			|| c == '\n' 
			|| c == '\f' 
			|| c == '\t'
			|| c == '\r');
}

