#ifndef ALIGN_H
#define ALIGN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PAGE_SIZE 4096

#ifndef CACHE_LINE_SIZE
  #if defined(__s390__)
    #define CACHE_LINE_SIZE 256
  #elif defined(__powerpc__) || defined(__aarch64__)
    #define CACHE_LINE_SIZE 128
  #else
    #define CACHE_LINE_SIZE 64
  #endif
#endif

#define CACHE_ALIGNED __attribute__((aligned(CACHE_LINE_SIZE)))
#define DOUBLE_CACHE_ALIGNED __attribute__((aligned(2 * CACHE_LINE_SIZE)))

#define EMPTY (void *) -1

#endif /* end of include guard: ALIGN_H */
