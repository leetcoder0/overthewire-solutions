//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2019 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int32_t function_80483a0(int32_t a1, int32_t a2);
int32_t function_80483b0(void);
int32_t function_80483c0(int32_t a1);
int32_t function_80483d0(int32_t a1);
int32_t function_80483e0(int32_t a1, int32_t a2);
int32_t function_8048400(int32_t a1, int32_t a2, int32_t a3, int32_t a4);
int32_t function_8048410(int32_t a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x80483a0 - 0x80483a6
int32_t function_80483a0(int32_t a1, int32_t a2) {
    // 0x80483a0
    return printf();
}

// Address range: 0x80483b0 - 0x80483b6
int32_t function_80483b0(void) {
    // 0x80483b0
    return geteuid();
}

// Address range: 0x80483c0 - 0x80483c6
int32_t function_80483c0(int32_t a1) {
    // 0x80483c0
    return puts();
}

// Address range: 0x80483d0 - 0x80483d6
int32_t function_80483d0(int32_t a1) {
    // 0x80483d0
    return system();
}

// Address range: 0x80483e0 - 0x80483e6
int32_t function_80483e0(int32_t a1, int32_t a2) {
    // 0x80483e0
    return setreuid();
}

// Address range: 0x8048400 - 0x8048406
int32_t function_8048400(int32_t a1, int32_t a2, int32_t a3, int32_t a4) {
    // 0x8048400
    return snprintf();
}

// Address range: 0x8048410 - 0x8048416
int32_t function_8048410(int32_t a1, int32_t a2) {
    // 0x8048410
    return access();
}

// Address range: 0x804852b - 0x8048604
int main(int argc, char ** argv) {
    // 0x804852b
    int32_t v1; // bp-528
    int32_t v2 = &v1; // 0x804853a
    int32_t v3;
    if (argv <= (char **)1) {
        // 0x8048547
        function_80483c0((int32_t)"*** File Printer ***");
        function_80483a0((int32_t)"Usage: %s filename\n", *(int32_t *)v3);
        // branch -> 0x80485fa
        // 0x80485fa
        return -1;
    }
    int32_t * v4 = (int32_t *)(v3 + 4); // 0x804857d
    int32_t result; // 0x8048603
    if (function_8048410(*v4, 4) == 0) {
        // 0x80485a8
        function_8048400(v2, 511, (int32_t)"/bin/cat %s", *v4);
        int32_t v5 = function_80483b0(); // 0x80485ca
        function_80483e0(function_80483b0(), v5);
        function_80483d0(v2);
        result = 0;
        // branch -> 0x80485fa
    } else {
        // 0x8048591
        function_80483c0((int32_t)"You cant have that file...");
        result = 1;
        // branch -> 0x80485fa
    }
    // 0x80485fa
    return result;
}

// --------------- Dynamically Linked Functions ---------------

// int32_t access(void);
// int32_t geteuid(void);
// int32_t printf(void);
// int32_t puts(void);
// int32_t setreuid(void);
// int32_t snprintf(void);
// int32_t system(void);

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (6.3.0)
// Detected functions: 8
// Decompilation date: 2019-12-24 19:09:00
