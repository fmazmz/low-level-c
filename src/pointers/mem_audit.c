#include "mem_audit.h"
#include <stdio.h>


static int* modifyPointer(int *ptr) {
    printf("\n[MODIFY] Dereferencing pointer at %p\n", ptr);
    printf("[BEFORE] Value: %d\n", *ptr);

    *ptr = *ptr * 3;

    printf("[AFTER]  Value: %d\n", *ptr);
    return ptr;
}

void initMem() {
    printf("[INFO] Initializing stack variables on memory...\n");
    int nmr = 10;
    int *nmrPtr = &nmr;

    printf("[INFO] Stack memory initialized\n");

    printf("\n[ALLOC] Variable 'nmr'\n");
    printf("Address : %p\n", &nmr);
    printf("Value   : %d\n", nmr);

    printf("\n[PTR INIT] Pointer 'nmrPtr'\n");
    printf("Pointer Address : %p\n", &nmrPtr);
    printf("Points to       : %p\n", nmrPtr);
    printf("Dereferenced    : %d\n", *nmrPtr);

    modifyPointer(nmrPtr);

    printf("\n[FINAL STATE]\n");
    printf("Variable 'nmr' Value          : %d\n", nmr);
    printf("Pointer 'nmrPtr' Address      : %p\n", &nmrPtr);
    printf("Points to                     : %p\n", nmrPtr);
    printf("Pointer Dereferenced Value    : %d\n", *nmrPtr);
}