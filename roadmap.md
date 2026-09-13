# C Programming — Complete Roadmap (Beginner to Advanced)

A full, ordered path to mastering C and writing efficient, low-level code.

---

## Stage 1: Setup & Basics
- [ ] Install a compiler (GCC / Clang) and set up a terminal / IDE
- [ ] Understand the compilation process (source → executable)
- [ ] Structure of a C program (`main()`, headers, `#include`)
- [ ] Variables and data types (`int`, `float`, `double`, `char`, `_Bool`)
- [ ] Type sizes and `sizeof`
- [ ] Constants (`const`, `#define`)
- [ ] Operators: arithmetic, relational, logical, bitwise, assignment, ternary
- [ ] Type casting and type conversion (implicit vs explicit)
- [ ] Input/output: `printf`, `scanf`, format specifiers
- [ ] Comments and code style conventions

## Stage 2: Control Flow
- [ ] `if`, `else if`, `else`
- [ ] `switch` statements
- [ ] Loops: `while`, `do-while`, `for`
- [ ] `break`, `continue`, `goto`
- [ ] Nested loops and conditions

## Stage 3: Functions
- [ ] Function declaration vs definition
- [ ] Parameters, return values, pass-by-value
- [ ] Recursion
- [ ] Scope: local, global, block scope
- [ ] Storage classes: `auto`, `static`, `extern`, `register`
- [ ] Function prototypes and header declarations

## Stage 4: Arrays and Strings
- [ ] One-dimensional arrays
- [ ] Multi-dimensional arrays
- [ ] Strings as `char` arrays and null termination
- [ ] String library functions: `strlen`, `strcpy`, `strcat`, `strcmp`, `strtok`
- [ ] Array-to-pointer decay
- [ ] Passing arrays to functions

## Stage 5: Pointers (Core of Low-Level C)
- [ ] Pointer basics: address-of (`&`), dereference (`*`)
- [ ] Pointer arithmetic
- [ ] Pointers and arrays relationship
- [ ] Pointers to pointers (`**`)
- [ ] `void*` pointers
- [ ] `const` with pointers (pointer to const, const pointer)
- [ ] Function pointers
- [ ] Arrays of function pointers (callback tables)

## Stage 6: Memory Management
- [ ] Stack vs heap memory
- [ ] `malloc`, `calloc`, `realloc`, `free`
- [ ] Memory leaks, dangling pointers, double-free bugs
- [ ] Buffer overflows and safe coding practices
- [ ] Understanding memory addresses and layout
- [ ] Tools: `valgrind`, AddressSanitizer

## Stage 7: Structures, Unions, Enums
- [ ] `struct` definition and usage
- [ ] Nested and self-referential structures
- [ ] `typedef`
- [ ] `union` and use cases
- [ ] `enum`
- [ ] Struct padding, alignment, and memory layout
- [ ] Bit fields inside structs

## Stage 8: File Handling
- [ ] `fopen`, `fclose`, file modes
- [ ] `fread`, `fwrite` (binary I/O)
- [ ] `fprintf`, `fscanf`, `fgets` (text I/O)
- [ ] Error handling (`errno`, `perror`)
- [ ] Text files vs binary files

## Stage 9: Preprocessor
- [ ] `#define` (macros, constants)
- [ ] Function-like macros vs inline functions
- [ ] Conditional compilation: `#ifdef`, `#ifndef`, `#if`
- [ ] Header guards (`#pragma once` / `#ifndef` guards)
- [ ] Multi-file `#include` mechanics

## Stage 10: Bit-Level Programming
- [ ] Bitwise operators: `& | ^ ~ << >>`
- [ ] Bit masking, setting/clearing/toggling bits
- [ ] Flags and bit fields
- [ ] Endianness (big-endian vs little-endian)
- [ ] Two's complement representation

## Stage 11: Data Structures (Implement from Scratch)
- [ ] Linked lists (singly, doubly, circular)
- [ ] Stacks and queues
- [ ] Binary trees, BSTs
- [ ] Hash tables
- [ ] Dynamic arrays (like a manual vector)
- [ ] Graphs and basic traversal (BFS/DFS)

## Stage 12: Multi-File Projects & Build Systems
- [ ] Splitting code into `.c` / `.h` files
- [ ] Header files and declarations vs definitions
- [ ] Compiling multiple files, linking
- [ ] Static libraries (`.a`) vs shared libraries (`.so`/`.dll`)
- [ ] Writing Makefiles
- [ ] Using `gdb` for debugging

## Stage 13: Compilation & Memory Internals
- [ ] Compilation stages: preprocessing → compiling → assembling → linking
- [ ] Object files and symbol tables
- [ ] Stack frames and calling conventions
- [ ] Reading assembly output (`objdump`, Compiler Explorer)
- [ ] Data alignment and cache lines
- [ ] Memory segments: text, data, bss, heap, stack

## Stage 14: Writing Efficient / Low-Level Code
- [ ] Cache-friendly data access (locality of reference)
- [ ] Minimizing heap allocations
- [ ] Inline functions vs macros
- [ ] Loop unrolling and branch prediction basics
- [ ] Compiler optimization flags (`-O0` to `-O3`, `-Os`)
- [ ] `volatile` and `restrict` keywords
- [ ] Undefined behavior — what it is and why it matters
- [ ] Writing portable vs platform-specific code
- [ ] Struct-of-arrays vs array-of-structs for performance

## Stage 15: Concurrency
- [ ] Processes vs threads
- [ ] POSIX threads (`pthread_create`, `pthread_join`)
- [ ] Mutexes and race conditions
- [ ] Condition variables
- [ ] Atomic operations basics

## Stage 16: Systems-Level C
- [ ] System calls: `read`, `write`, `open`, `close`
- [ ] File descriptors vs `FILE*`
- [ ] Signals and signal handlers
- [ ] Memory-mapped I/O (`mmap`)
- [ ] Environment variables, process arguments (`argc`, `argv`)
- [ ] Basics of embedded/driver-level C (registers, hardware I/O)

## Stage 17: Practice & Mastery
- [ ] Solve data structure/algorithm problems in C
- [ ] Build a small project (e.g., mini shell, memory allocator, text editor)
- [ ] Read real-world C codebases (e.g., Redis, SQLite source)
- [ ] Learn to profile code (`gprof`, `perf`)
- [ ] Study the C standard (C99/C11/C17) for edge cases

---

### Suggested Order Summary
1. Basics → 2. Control Flow → 3. Functions → 4. Arrays/Strings → 5. Pointers → 6. Memory → 7. Structs/Unions → 8. Files → 9. Preprocessor → 10. Bit-Level → 11. Data Structures → 12. Multi-File/Build → 13. Compilation Internals → 14. Efficiency → 15. Concurrency → 16. Systems-Level → 17. Practice/Mastery