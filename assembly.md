# Assembly Language Basics (18.07) 
> by Stuart Elkeino [(pavittarx)](https://github.com/pavittarx)

This page contains notes & information to work with assembly language.

# Prequisites 
* Knowledge of Binary, Decimal & Hexadecimal number system.
* Knowledge of Compter Memory and related information.
* General Low Level Computer Knowledge.


# Registers 

## IA 32 Architecture 
* Ten 32-bit registers.
* Six 16-bit registers.

## Register Categories 
* General Registers
* Control Registers
* Segment Registers

## Group A: General Registers
* Data Registers
* Pointer Registers
* Index Registers

### Data Registers
They are used used for arithmetic, logic & other operations. These are four 32-bit registers (AX, BX, CX & DX).

These are used in three ways -

EAX, EBX, ECX, EDX - 32-bit data registers.\
AX, BX, CX, DX - 16-bit data registers & Lower Halves of 32-bit data registers.\
AH, BH, CH, DH - 8-bit data registers, Upper halves of 16-bit data registers.\
AL, BL, CL, DL - 8-bit Data Registers, Lower Halves of 16-bit data registers.

**AX (Accumlator Register)**\
This Register is used to store immediate arithmetic & logic results\
The 8051 has a primary & secondary accumlator, the second one is used by instructions when multiplying or dividing. The format splits the 16-bit result between two 8-bit accumlator register A, and the remainder in secondary acculator B.\
The modern ubiquitous Intel x86 (8080 & 8086), still use primary accumlator EAX, and secondary as EDX. It is used for I/O and most arithmetic instructions.

**BX (Base Register)**\
It is used in Index addressing.

**CX (Count Register)**\
It stores loop count of iterative statements.

**DX (Data Register)**\
It is used in I/O Operations.\
It is also used along with AX for multiplication & division operations involving large values. 

### Pointer Register

**IP (Instruction Pointer)** [16 bits]\
It stores offset address of instruction to be executed.

[=] IP in association with CS Registeras CS:IP gives complete address of current address in code segment.

**SP (Stack Pointer)** [16 bits]\
It provides offset value within the program stack.

[=] SS:SP refers to current position of data/address within the program stack.

**BP (Base Pointer)** [16-bits]\
It mainly helps in referencing the parameter variables passed to a subroutine.

[=] SS:BP gives location of the parameter.\
[=] DI:BP, SI:BP for special addressing.

### Index Registers

**SI & DI** are used for index addressing, and sometimes for addition & subtraction as well.

**SI (Source Index)**\
It is used as a source index for string operations.

**DI (Destination Index)**\
It is used as a destination index for string operations.


## Group B: Control Registers 
These are 32-bit IP registers combined with 32-bit Flag registers.\

**OF (Overflow Flag)**\
It indicates overfloe of a high order bit (left bit) of data after signed arithmetic operation.

**DF (Direction Flag)**\
It determines direction (left/right) for moving or compairing string data.\
DF=0, Left to Right Direction\
DF=1, Right to Left Direction.

**IF (Interrupt Flag)**\
It determines whether the external interrupts like keyboard input etc., are ignored/processed.\
IF=0, External Interrupts are disabled.\
IF=1, External Interrupts are enabled.

**TF (Trap Flag)**\
It allows setting the operation of the processor in a single step mode.\
The `DEBUG` program, used sets the TF, so we could step through exection of instruction one at a time.

**SF (Sign Flag)**\
It shows sign of the result of an arithmetic operation. The sign is set according to the sign of data item following the arithmetic operation.
The sign is indicated by the high order of leftmost bit.\
SF=0, Positive Result
SF=1, Negative Result

**ZF (Zero Flag)**\
It indicates result of arithmetic/comparison operation.\
A non-zero result clears ZF flag to 0.\
ZF=1, indicates a Zero Result.

**AF (Auxilary Carry Flag)**\
todo: Update the Auxilary Carry Flag definition\
It contains carry from bit 3 to bit 4 following an arithmetic operation.
It is used for specialised arithmetic.
The AF is set to 0, when 1 byte arithmetic operation causes a carry from bit 3 to bit 4.

**PF (Parity Flag)**\
It indicates total number of 1 bits in the result obtained from an arithmetic operation.\
PF=0, Even number of 1 bits.
PF=1, Odd number of 1 bits.

**CF (Carry Flag)**\
It contains the carry of 0/1 from  high order (leftmost) bit after an arithmetic operation.\
It stores content of last bit of shift/rotate operation.

The table indicates the position of flag bits in the 16-bit flag register.

<table>
<tr>
<td>Bit No </td>
<td> 15 </td>
<td> 14 </td>
<td> 13 </td>
<td> 12 </td>
<td> 11 </td>
<td> 10</td>
<td>  9 </td>
<td>  8 </td>
<td>  7 </td>
<td>  6 </td>
<td>  5 </td>
<td>  4 </td>
<td>  3 </td>
<td>  2 </td>
<td>  1 </td>
<td>  0 </td>
<tr>
<tr>
<td> Flag </td>
<td> - </td>
<td> -</td>
<td> -</td>
<td> -</td>
<td> O</td>
<td> D</td>
<td> I</td>
<td> T</td>
<td> S</td>
<td> Z</td>
<td> -</td>
<td> A</td>
<td> -</td>
<td> D</td>
<td> -</td>
<td> C</td>
<tr>
</table>

## Group C: Segment Registers

* Code Segment
* Data Segment 
* Stack Segment

### Code Segment
It contains all instructions to be executed.\
A 16-bit code segment (CS) register stores the starting address of the code  segment.

### Data Segment 
It contains data, constants & work areas.\
A 16-bit data segment (DS) register stores the starting address of data segment.

### Stack Segment
It contains data & return addresses of procedures/subroutines. It is implemented as a `Stack` data structure.\
The Stack Segment (SS) register stores the starting address of the stack.


The segment registers stores the starting address of a segment. In order to get the exact location of data/instruction, an offset/displacement value is required.\
To reference any memory location in a segment, the procedure combines the segment address in the segment register with the offset value of the location.


[=] There are few other segment registers apart from CS, DS & SS. `ES (Extra Segment), FS, GS` which provide additional segments for storing data.


### More about Segments 
A segment starts with an addresss evenly divisible by 16 (or hexadecimal 10, 0x10).\
The rightmost hex digit in all such memory addresses is 0, which is not generally stored in segment register 


# System Calls
System calls are API's for interface between the user space & kernel space.

## Linux System Calls 
1. Put the System Call Number in EAX register.
2. Store arguments to the system call in the registers EBX, ECX, etc.
3. Call the relevant interrupt.
4. The result is usually returned in EAX register. 

There are six registers, `EBX, ECX, EDX, ESI, EDI, EBP` that stores arguments of the system call used.\
These registers take consecutive arguments starting with the EBX register. If there are more than 6 arguments the memory location of the first register is stored in EBX register.

### Use of System Call sys-exit

``` 
mov eax, 1 ; System Call number (sys-exit)
int 0x80   ; call Kernel
```

## Common System Calls (Linux)
<table>
<tr>
<td>Name</td>
<td>%eax</td>
<td>%ebx</td>
<td>%ecx</td>
<td>%edx</td>
<td>%esx</td>
<td>%edi</td>
</tr>
<tr>
<td>sys_exit</td>
<td>1</td>
<td>int</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
</tr>
<tr>
<td>sys_fork</td>
<td>2</td>
<td>struct pt_regs</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
</tr>
<tr>
<td>sys_read</td>
<td>3</td>
<td>unsigned int</td>
<td>char*</td>
<td>size_t</td>
<td>-</td>
<td>-</td>
</tr>
<tr>
<td>sys_write</td>
<td>4</td>
<td>unsigned int</td>
<td>const char*</td>
<td>size_t</td>
<td>-</td>
<td>-</td>
</tr>
<tr>
<td>sys_open</td>
<td>5</td>
<td>const char*</td>
<td>int</td>
<td>int</td>
<td>-</td>
<td>-</td>
</tr>
<tr>
<td>sys_close</td>
<td>6</td>
<td>unsigned int</td>
<td>-</td>
<td>-</td>
<td>-</td>
<td>-</td>
</tr>
</table>

# Addressing Modes
In assembly language, most of the instructions require operands to be processed. An operand address provides the location where the data to be processed is stored.

When an instruction requires two operands,\
The first operand is generally the destination, that containes data in register/memory location.\
The second operand is the source, it contains either data to be delivered or the address of register/memory loaction, that contains data.

The very basic modes of addressing are - 
* Register Addressing
* Immediate Addressing
* Memory Addressing

### Register Addressing 
A register contains the operand. It can be first, second or both operands, depending upon the instruction.

``` 
mov dx, tax_rate ; register contains first operand
mov count, cx    ; register contains second operand
mov eax, ebx     ; both first & second operands are in a register
```
### Immediate Addressing 
The operand has an constant/direct value, or an expression sometimes.\
When an expression uses immediate addressing, the first operand can be  register/memory location but, the second operand is an immediate constant.\
The first operand defines length of data.

```
byte_value db 150  ; a byte value is defined
word_value dw 300  ; a word value is defined
add byte_value, 65 ; an immediate aoperand 65 is added
mov ax, 45h        ; immediate constant 45h is transferred to AX
```

### Direct Addressing 
When operand are specifie in memory addresing mode, direct access to the main memory is required (usually to data segment). This mode results in slower processing of data.\
In order to locate exact location of data in memory, we need starting address of the segment (typically found in `DS` register), and an offset value, which is also called `Effective Address`.

In direct addressing mode, the offset value is specified directly usually indicated by a variable name. The assembler calculates the offset value & maintains a symbol table, which stores the offset values of all variabled used in the program. 

In direct memory addressing, one of the operands refers to a memory location & the other operand references a register. 

```
add byte_value, dl ;adds the register in the memory location
mov bx, word_value ;operand is transferred to register from memory.
```

### Direct Offset Addressing 
This addressing mode uses the arithmetic operators to modify an address.

Following definitions, defines tables of data -->

```
byte_table db 14,15,22,45     ; table of bytes
word_table dw 134,345,564,270 ; table of words 
```

The following operation access data from tables in the memory inro registers.

```
mov cl, byte_table[2] ; gets 3rd element of byte_table
mov cl, byte_table+2  ; gives 3rd elemnt of byte_table

mov cx, word_table[3] ; gets 4th element of word_table
mov cx, word_table+3  ; gets 4th element of word_table
```

### Indirect Memory Addressing
This mode utilizes the computers ability of segment offset addressing.\
The base registers `EBX`/`BX`, `EBP`/`BP` & the index registers `DI,SI` coded with square brackets for memory refernces are used for this purpose.

Indirect addressing is generally used for variables containing several elements like arrays. The starting address of array is stored in (say) EBX register.


### Accessing Different elements of a variable 

```
my_table times 10 dw 0 ; allocates 10 words (2 bytes) each initialized to 0

mov ebx, [my_table]    ; effective address of my_table in ebx
mov [ebx], 110         ; my_table[0]=110
add ebx,2              ; ebx=ebx+2
mov [ebx], 123         ; my_table[1]=123

```

# Variables: Assembly Language 

Assemblers are computer programs which translates assembly language to an object file or machine language format. The popular ones are 
`MASM`, `NASM`, `TASM`, `WASM`.

NASM provides various `define` directives to reserve storage space for variables. The define assembler directive is used for allocation of storage space. It can be used to reserve & initialize one or more memory bytes.

### Allocating Storage Space for data

(variable-name) (directive) [,initial-value]

The assemble associates an offset value for each variable name  defined in the data segment.

<table>
<tr>
<td>Directive</td>
<td>Purpose</td>
<td>Storage Space</td>
</tr>
<tr>
<td>DB</td>
<td>Define Byte</td>
<td>allocates 1 byte</td>
</tr>
<tr>
<td>DW</td>
<td>Define Word</td>
<td>allocates 2 bytes</td>
</tr>
<tr>
<td>DD</td>
<td>Define Double Word</td>
<td>allocates 8 bytes</td>
</tr>
<tr>
<td>DT</td>
<td>Define Ten Bytes</td>
<td>allocates 10 bytes</td>
</tr>
</table>


Example -->
``` 
choice db 'y'
numbr dw 123456
neg_num dw -123456
real_num dd 1.235
real_num2 dq 125.27
```

#### Rules 
1. Each byte of a character is stored in its ASCII value in hexadecimal 
2. Each decimal value is automatically converted to its 16-bit binary equivalent & stores=d as a hexadecimal number.
3. Processor uses the little-endian byte ordering.
4. Negative numbers are converted into 2's complement presentation.
5. Short & Long floating point numbers are represented using 32-bits & 64-bits respectively.

### Allocating Space for Unintialized Data 
The reserve directives are used for reserving space