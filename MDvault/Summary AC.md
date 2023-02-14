**Computer**: Any machine that stores data. processes it and provides results. Computers use electrical energy to function. They are fast and precise. Computers can work with any type of data: numbers, words, images and sounds.

**Hardware**: Group of physical components that make a computer. Ex. Keyboard, monitor, CPU

**Software**: Group of programs made from instructions in a programming language which objective is to run certain tasks that can be specific or generic. 

- Processor: 
	- Reads, interprets and executes instructions
	- Reads and stores data (RAM)
	- Uses control signals (ex. read, write, int) for the general control of the system operations
	- Emits and receives interrupt signals

- **RAM**: Random Access Memory

- **ROM**: Read Only Memory

- **CPU**: Central Processor Unit
	- **CU**: Control Unit
	- **ALU**: Arithmetic and Logic Unit
	- **Registers:** Small memory space used in every operation made by the CPU
- **Motherboard**: Also called mainboard, is a printed circuit board (PCB or PCI in portuguese). It holds all the components in the computer and allows communication between them.
- **BIOS**: Basic Input Output System. Set of basic programs that performs preliminary tests on hardware, detects the presence of I/O devices, starts the OS and controls the system I/O. The BIOS is a firmware stored in the motherboard in a ROM.
- **Chipset**: controls access to RAM and peripherals
	- Northbridge: Controls memories (board)
	- Southbridge: Controls peripherals
- 

## Memory Hierarchy





Memories: 
SDRAM
SRAM
EEPROM


## Bytes

- **Bit**: Smallest information unit. Can be 1 or 0
- Byte: Set of 8 bits
- Kilobyte (**KB**): 1KB = 1024 bytes
- Megabyte (**MB**): 1MB = 1024 $\times$ 1024 = 1 048 576 = $1024^2$
- Gigabyte (**GB**): 1GB = 1024 $\times$ 1024 $\times$ 1024 = $1024^3$
- Terabyte (**TB**): 1TB = 1024 $\times$ 1024 $\times$ 1024 $\times$ 1024 = $1024^4$
- Petabyte (**PB**): 1PB = 1024 $\times$ TB = $1024^5$
- Exabyte (**EB**): 1EB = 1024 $\times$ PB = $1024^6$



## Operative System

## Synchronism and Asynchronism

## Logic

## Machine Cycle

- Fetch:
	- MBR/ MDR : Memory Buffer/Data Register. Temporary auxiliar register used to store data or instructions.
	- MAR: Memory Address Register. Temporary auxiliar register used to store register addresses. (may be the same as IR)
	- PC: Program Counter. Stores the memory address of the next instruction.
	- IR: Instruction Register. Current instruction being executed
	- **Process**: The next instruction is fetched from the memory address that is currently stored in the PC, and stored in the IR. At the end of the fetch operation, the PC points to the next instruction that will be read at the next cycle.
- Decode:
	- CU: Control Unit
	- **Process**: The control unit interprets the instruction. During this cycle the instruction inside the IR gets decoded.
- Execute:
	- **Process**: The CU passes the decoded information as sequence of control signals to the relevant function units of the CPU to perform the actions required by the instruction such as passing data from registers to the ALU to perform mathematical or logic functions.
- 

- 

## Assembly

The name **Direct addressing** itself makes clear that it does not involve any medium for accessing the data from memory. It is the most straightforward method of addressing, where the address field holds the effective address operand.

**EA = A**

In the direct addressing mode, the address field requires less word space, therefore restricting the address range. So, one of the ways is to have the address field referring the address of a word in memory, in order to hold a full-length address of the operand. This is known as **indirect addressing**. In simple words, this addressing mode uses a register to contain the actual address where the data is stored.

**EA = (A)**

Here, ‘A’ inside the parenthesis designates the “contents of A”, and EA is the effective address.

## 28 ate ao kernel

**Sistema operativo**: Set of programs and associated data which allow the efficient usage and management of the available computer resources.  

**OS Functions**: 
- I/O:
	-  Read or write data into external storage units (HDDs, CDs, etc)
	- Data printing
	- Communication between peripherals and CPU
- Command Interpretation
	- Reading, interpreting and executing user-written commands
- Folder/directories management
	- Folder creation and manipulation
	- Folder storage on fast access logical and physical structures
	- Secondary memory control
- Security
	-  Defines access modes to protect folders
	- User protection
	- System protection
- Multitasking / Processor usage control / Shared Time
	- Multiple users can access the computer at the same time
	- Multiple users executing programs (processes) in shared processing time
	- Processor usage control
- Physical-Virtual memory management
	- Physical (RAM) and Virtual (Swap) memory management
	-  Pages (Virtual pages) and Frames (Physical pages) creation and management  
	- Allows permutation between physical and virtual memory
- Communication
	- Communication with other computers, internally or using telecommunication
- Accounting
	- Registers the used resources
- Software development
	- Tools to write, maintain and execute programs (Ex. compilers, libraries, etc)

OS Modules:
- Process Management
- Main memory management
- Folder/directory management
- I/O Management
- Secondary memory management
- Network management
- System security and protection
- Command interpretation (Shell)

**KERNEL:** 

The kernel (core)(nucleo), with the device drivers and firmware makes the most basic level of control over all the computer hardware devices. (CPU, Memory, devices)

The kernel manages the RAM accesses and determines which programs have higher priority of access to the computer resources and what hardware resources the applications can use. Doing this establishes a connection between applications and hardware

![[Pasted image 20230213234251.png]]

## 29

## Linux commands



