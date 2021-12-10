#include "mymemcpy.h"


int main() {
    const char src[30] = "https://al2698.github.io/co110a";
    char dest[30];
    mymemcpy(dest, src, strlen(src)+1)
}
