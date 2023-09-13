#ifndef chunk_h
#define chunk_h

#include "common.h"
#include <cstdint>

typedef enum {
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
} Chunk;

void initChunk(Chunk * chunk);

#endif