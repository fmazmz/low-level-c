#include "boot_sequence.h"
#include <stdio.h>
#include <sys/sysinfo.h>

void boot_sequence_init() {
    printf("[BOOT] Initializing boot_sequence...\n");
    printf("[INFO] Initializing system state...\n");

    struct sysinfo s_info;
    sysinfo(&s_info);

    const unsigned long total_memory_bytes = s_info.totalram * s_info.mem_unit;
    const unsigned long free_memory_bytes = s_info.freeram * s_info.mem_unit;
    const unsigned int total_mb = total_memory_bytes / 1024 / 1024;
    const unsigned int free_mb  = free_memory_bytes / 1024 / 1024;
    const long uptime = s_info.uptime / 3600;


    printf("[INFO] Total memory     : %d MB\n", total_mb);
    printf("[INFO] Used memory      : %d MB\n", free_mb);
    printf("[INFO] Uptime hours     : %ld\n", uptime);

}
