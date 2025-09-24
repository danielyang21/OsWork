#include <cstdio>
void kernelMain(void* multiboot_structure, unsigned int magicnumber) {
    printf("Hello world!");
    printf("%d", magicnumber);

    while(1);
}