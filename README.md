# C Programming & Computer Systems Practice

A collection of C programming exercises, MIPS assembly programs, and digital logic circuits created while learning fundamental computer science and computer systems concepts.

This repository contains self-practice exercises and coursework-related material from **CS 120**, covering topics ranging from basic C syntax to memory management, data structures, bitwise operations, assembly programming, and digital logic.

## Topics Covered

### C Programming

The C programs in this repository explore fundamental and intermediate concepts including:

* Variables, conditionals, and loops
* Functions
* Arrays and strings
* Pointers and memory addresses
* Dynamic memory allocation
* Structures and `typedef`
* Linked lists
* Stack implementations
* File input/output
* Bitwise operations
* Command-line compilation
* Basic Makefile usage

Examples include:

* `pointer.c` — pointer fundamentals
* `memory.c` — memory addresses and pointer arithmetic
* `DMA.c` — dynamic memory allocation
* `basic_linkedlist.c` — basic linked-list implementation
* `stack.c` — stack-related practice
* `struct.c` / `structure.c` — C structures
* `bits.c` — bitwise operations and binary representation
* `string.c` / `string_input.c` — string manipulation
* `file_manipulate/` — file-related exercises

## Assembly Programming

The repository also contains assembly exercises used to better understand how high-level C programs translate into lower-level machine operations.

Examples include:

* Arithmetic operations
* Variables and memory
* Functions
* Conditional statements
* Loops
* Stack operations
* C-to-assembly comparisons

Assembly files use the `.s` extension and include examples such as:

```text
add.s
function.s
if-else.s
memory_stack.s
stack.s
sum.s
while_assem.s
```

These exercises primarily use **MIPS-style assembly**.

## Digital Logic & Logisim

The `.circ` files contain digital logic circuit exercises created with **Logisim**.

Topics include:

* Multiplexers
* Karnaugh maps
* Adders/subtractors
* Sequential circuits
* Combinational logic
* Traffic-control circuits

Example circuit files:

```text
20240209-4bitaddsub.circ
k_map.circ
mux.circ
seq_circ.circ
sequential_circuit.circ
traffic_controller.circ
```

## Repository Structure

```text
C_Programming-Self-Practice/
│
├── CS_120/                    # CS 120 practice/course materials
├── Logism (circuit)/          # Digital logic circuit material
├── file_manipulate/           # File I/O exercises
│
├── *.c                        # C programming exercises
├── *.s                        # Assembly exercises
├── *.circ                     # Logisim circuit files
├── makefile                   # Basic GCC compilation example
└── README.md
```

## Getting Started

### Prerequisites

To compile the C programs, install a C compiler such as:

* GCC
* Clang

For the digital logic exercises, install **Logisim** or a compatible Logisim distribution.

A MIPS-compatible simulator may be needed to execute some of the assembly programs.

### Clone the Repository

```bash
git clone https://github.com/quocgiahuydo/C_Programming-Self-Practice.git
cd C_Programming-Self-Practice
```

### Compile a C Program

Most C files can be compiled individually with GCC:

```bash
gcc filename.c -o program
```

Then run:

```bash
./program
```

For example:

```bash
gcc basic_linkedlist.c -o linkedlist
./linkedlist
```

### Compile with Warnings

For additional compiler feedback while practicing C:

```bash
gcc -Wall -Wextra filename.c -o program
```

## Learning Objectives

The main purpose of this repository is to build a stronger understanding of how software interacts with computer hardware.

Through these exercises, I practiced:

* Writing and debugging C programs
* Working directly with memory using pointers
* Allocating and freeing dynamic memory
* Implementing fundamental data structures
* Understanding binary and bitwise operations
* Translating high-level programming concepts into assembly
* Understanding registers, memory, and stack behavior
* Designing basic combinational and sequential digital circuits

## Notes

This repository represents a learning process rather than a single production application. Some files are small experiments designed to test individual concepts, while others come from exercises involving C, assembly, and digital logic.

As a result, individual programs may use different compilation or execution methods.

## Author

**Harry Do**

GitHub: [@quocgiahuydo](https://github.com/quocgiahuydo)

---

*Created as part of my practice in C programming, computer architecture, assembly language, and digital logic.*
