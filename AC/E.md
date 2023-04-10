# G1

1. a) 

   - The address of X should be in the MAR by now so the computer extracts its value and stores it on the MBR and the Accumulator
   - That should be the first EXECUTE phase
   - The computer goes into FETCH mode again for the next instruction
   - DECODES the instruction
   - The CPU goes into EXECUTE mode again
   - The value of X gets sent to the ALU along with the opcode of the instruction.
   - The ALU now knows the first operand and the operation that it has to perform on it.
   - The value of Y is extracted from the memory address stored in the MAR and stored into the MBR
   - The value in the MBR is sent to the accumulator and the ALU
   - The ALU performs the operation and now stores the result in the accumulator.

   b) The Ax register could be useful as an auxiliary  to store the value of both operands without having them overwrite each other. 

2. a)

   b) Returns the address-offset to the first letter of the string contained in "msg" into the register dx for the entire modified string to be printed on the screen.

   c) Copies the content of the register "al" into the position that the address-offset stored in dx currently points to.
   
   d) inmediate addressing

# G2



# G3

A segment based architecture divides the programs in segments 

# G4

QPI: QuickPath Interconnection  Protocol created by Intel designed to connect and allow communication between the processor and IO hubs.

Turbo Boost: Technology that allows processor to run to its maximum capacity instead of the default settings it had.

Hyper threading: Technology that allows multiple threads to run on a core. This increases the performance because multiple processes can be run at the same time.

SDRAM: synchronous dynamic random access memory. Type of RAM with increased efficiency due to it working synchronized to the system clock

SSD: Solid State Drive. Type of external storage unit that doesn't use mobile parts and works only on electric signals. This makes this type of storage faster and resistant to corruption.

# G5

a) 

51 %2 = 1
51 / 2 = 25

25%2 = 1
25/2 = 12

12%2 = 0
12/2 = 6

6%2 = 0
6/2 = 3

3%2 = 1
3/2 = 1

0011 0011
   3	    3 		HEX

b) by 2's complement

36 = 00100100

inv(36) = 11011011

inv(36)+1 = 11011100

# G6

1. It's a set of instructions being run by the computer. I/O unit, Memory Unit, Control Unit, ALU

   A process table contains information about all the processes such as the user that requested the process to run, state and the process id.

2. The process might be blocked because it depends on another process' result or a resource that another process is using. It went through new, ready and executing phases before going into a blocked state.

3. Both OS support multi-threading and are able to interrupt a process and run it at a later time.

4. The kernel has the most basic level of control over all the computer hardware. The kernel manages the RAM access and determines which programs have higher priority to the resources access.

