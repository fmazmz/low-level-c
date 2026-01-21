#include "pointers/mem_audit.h"
#include "basics/boot_sequence.h"


int main() {
    boot_sequence_init();
    initMem();
    return 0;
}