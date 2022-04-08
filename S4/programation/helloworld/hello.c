#include <stdio.h>
#include <stdint.h>

int main()
{
    uint64_t dx = 0x77E435B08;
    while (dx) {
        putchar(0x726F6C6564574820 >> (((dx >>= 3) & 7) << 3) & 0xFF);
    }
}