                                                Introduction to Computing
1.1 Computing Systems（Omit)

1.2 Computer Organization

1.2.1 Computing Systems
 
The instructions and data are stored in a high-speed memory unit.

And the control unit fetches these instructions from memory, decodes them, 
and directs the system to execute the operations indicated by the instructions.

Those operations that are arithmetical or logical in nature are carried out using 
the circuits of the arithmetic-logic unit(ALU) of the CPU.

These operations are known as processing.

                                                CPU = Central Processing Unit
                                                
                                                
<img width="323" alt="cpu" src="https://cloud.githubusercontent.com/assets/11711081/26626952/a0e183a0-45ad-11e7-940a-fee89b813326.png">


In contrast to the one-instruction-at-a-time operation by the CPU in the von Neumannn architecture, 
parallel processing computers improve performance by employing two or more CPUS.The world's fastest 
supercompters employ thousands of CPU chips and for this reason are termed  massively parallel processing 
computer.
    
    
Parallel computing, however, requires a very different programming strategy in order to make use of the 
power of systems with thousands of processors.


1.2.2 Storage

The memory unit of a computer system serves servel purposes.

Main memory is also knowns internal, primary, or random access memory(RAM), and its main function is store 
the instructions and data of the programs being executed.

Most modern computers also have a smaller amount of high-speed memory called cache memory that is usually on
the same chip as the CPU.

It is used to speed up execution by storing a set of recent or current instructions being executed so they need
not be fetched from main memory.

Also, as part of the CPU's processing, it may need to temporarily write down(store) a numbrt and read(retrieve) it 
later.

The CPU can use main memory in this manner, but there is also a set of special high-spped memory locations within the
CPU called registers.

Values that stored in registers can typically be accessed thousands of times faster than values that are stored in RAM

One problem with RAM and registers in that they are volatile；that is, if the power to the computing system is shut off. 







