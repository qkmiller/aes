#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "include/aes.h"

int main(int argc, char *argv[]) {
    printf("%d\n", argc);
    Byte b = uint8_to_byte(0x53);
    printf("High %d\nLow %d\n", b.nibble.h, b.nibble.l);
    print_args(argc, argv);
    return 0;
}
