#ifndef memory_h
#define memory_h

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)
#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldcount), \
            sizeof(type) * (newCount))

void * reallocate(void * pointer, size_t oldSize, size_t newSize);

#endif
