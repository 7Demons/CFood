#ifndef __C_TYPES_H__
#define __C_TYPES_H__

#include <stdbool.h>
#include <stdint.h>

// useful
typedef bool B8;

// Characters
typedef char C8;
typedef wchar_t C16;

// Signed integer types
typedef int16_t I16; // -32,768 to 32,767
typedef int32_t I32; // -2,147,483,648 to 2,147,483,647
typedef int64_t I64; // -9,223,372,036,854,775,808 to 9,223,372,036,85

// Unsigned integer types
typedef void U0;
typedef uint16_t U16; // 0 to 65,535
typedef uint32_t U32; // 0 to 4,294,967,295
typedef uint64_t U64; // 0 to 18,446,744,073,709,551,615

// Floats
typedef float F32;  // 3.4E +/- 38 (seven digits)
typedef double F64; // 1.7E +/- 308 (fifteen digits)

#endif // __TYPES_H__
