Tags: #abi #binary

### Application binary interface (**ABI**) 
is an interface between two binary program modules; often, one of these modules is a library or operating system facility, and the other is a program that is being run by a user.

 An **ABI** defines how data structures or computational routines are accessed in machine code, which is a low-level, hardware-dependent format; in contrast, an **[[API]]** defines this access in source code, which is a relatively high-level, hardware-independent, often human-readable format. <br>A common aspect of an ABI is the _'calling convention'_, which determines how data is provided as input to or read as output from computational routines; examples are the x86 calling conventions.

Adhering to an **ABI**(which may or may not be officially standardized) is usually the job of a compiler, operating system, or library author; however, an application programmer may have to deal with an ABI directly when writing a program in a mix of programming languages (or even different compilers for the same language).

## Description
<u>ABIs cover details such as</u>:
* a processor instruction set (with details like register file structure, stack organization, memory access types, ...)
* the sizes, layouts, and [[Data structure alignment|alignments]] of basic [[data type]]s that the processor can directly access
* the **calling convention**, which controls how [[Function - programming|function]]s' arguments are passed and return values are retrieved; for example, whether all parameters are passed on the stack or some are passed in registers, which registers are used for which function parameters, and whether the first function parameter passed on the stack is pushed first or last onto the stack
* how an application should make [[system call]]s to the operating system and, if the **ABI specifies direct system calls** rather than **procedure calls to system** call stubs, the system call numbers
* and in the case of a **complete operating system ABI**, the binary format of *object files, program libraries* and so on.
