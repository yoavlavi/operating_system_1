#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main() {
    int x = memsize();
    printf("Memory size: %d bytes\n", x);
    char *ptr = malloc(20000);
    x = memsize();
    printf("Memory size after malloc(20k): %d bytes\n", x);
    free(ptr);
    x = memsize();
    printf("Memory size after free: %d bytes\n", x);
    return 0;
}