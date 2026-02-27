#include "pointers/mem_audit.h"
#include "basics/boot_sequence.h"
#include "files/write_to_file.h"
#include "digital_timer/timer.h"


int main() {

    boot_sequence_init();
    initMem();
    write_to_file();
    start_timer();


    return 0;
}