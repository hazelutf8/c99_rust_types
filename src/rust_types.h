#include <stdbool.h>
#include <stdint.h>

#ifndef _C99_RUST_TYPES_H_
#define _C99_RUST_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

// Fixed size unsigned types
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#ifdef UINT64_MAX  // stdint.h optional
typedef uint64_t u64;
#endif

// Fixed size signed types
typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
#ifdef INT64_MAX  // stdint.h optional
typedef int64_t i64;
#endif

// Pointer sized types
#ifdef UINTPTR_MAX  // stdint.h optional
typedef uintptr_t usize;
#else
typedef unsigned int usize;
#endif
#ifdef INTPTR_MAX  // stdint.h optional
typedef intptr_t isize;
#else
typedef int isize;
#endif

// Compile time fixed size assertions, if `STATIC_ASSERT` exists
#ifdef STATIC_ASSERT
STATIC_ASSERT(sizeof(u8)  == 1, "unsigned 1 byte");
STATIC_ASSERT(sizeof(u16) == 2, "unsigned 2 bytes");
STATIC_ASSERT(sizeof(u32) == 4, "unsigned 4 bytes");
#ifdef UINT64_MAX  // stdint.h optional
STATIC_ASSERT(sizeof(u64) == 8, "unsigned 8 bytes");
#endif

STATIC_ASSERT(sizeof(i8)  == 1, "signed 1 byte");
STATIC_ASSERT(sizeof(i16) == 2, "signed 2 bytes");
STATIC_ASSERT(sizeof(i32) == 4, "signed 4 bytes");
#ifdef INT64_MAX  // stdint.h optional
STATIC_ASSERT(sizeof(i64) == 8, "signed 8 bytes");
#endif
#endif  // STATIC_ASSERT

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // _C99_RUST_TYPES_H_
