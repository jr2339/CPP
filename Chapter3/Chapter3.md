                                                Chapter3: Types in C++
3.1 Introductory Example: Radioactive Decay </br>
3.2 Types, Literals, Variables, and Constants</br>
3.3 Data Representation</br>

Chapter Summary</br>
Test Yourself

# 3.1 Introductory Example: Radioactive Decay</br>
3.1.1  Problem</br>
A scientist at Uranium University is conducting research with radioactive elelment polonium. The half of polonium is 140 days, whihc means
that because of radiocative decay, the amount that remains after 140 days is one-half of the original amount. He would like to know how much polonium will remian after running the experiment for 180 days if 10 milligrams after present initially.</br>

3.1.2</br>

3.1.2.1 Behavior</br>
The problem should output to the screen a prompt for the name of radioactive element, its half-life, the initial amout, and a time period.
It will then read these values from the keyboard.The program should then compute the amount remaining after the specified time peroid and output the input values along with this value to the screen.</br>

# 3.2 Types, Literals, Variables, and Constants</br>
3.2.1 Fundamental Types</br>

The most important fundamental data types provided in C++ are the following:</br>
integers: whole number and their negatives: of type int</br>
integer variations: types short, long and unsigned</br>
reals: fractional numbers: of type float, double, or long double</br>
characters: letters, digits, symbols, and ounctuation: of type char</br>
booleans: logical values true and false: of type bool</br>
A value of one of these type is called a literal.</br>

3.2.1.1 Integers</br>

Integer literals are string of digits that may be preceded by a - sign or a + sign. They are interpreted as</br>
Octal(base-eight):</br> 
            
    integers if they begin with 0 and all digits are octal digits0,1,....,7
Hexadecimal(base-sixteen):</br> 

    integers if they with 0x --- the hexadecimal digitals for ten, eleven,...,fifteen are A,B,...F or their lowcase equivalents a,b,....f
decimal(base-ten):</br>

    integers otherwise
Short int(or just short):</br>

    values usually are usually stored in 16bits(3 bytes) and can range from -2^15(=-32768) through 2^15-1(=32767)
            
Long int(or just long):</br>
    
    values are the same as int values in some versions of C++, while in others they are 64-bit values, ranging from -2^63 to 2^63 -1.
            
An unsigned int(or just unsigned):</br>
    
    is a nonnegative integer whose size usually is the word size of the particular machine being used, typically 0 through 2^32-1(=4294967295)
            
 An unsigned short:</br>
 
     is usually a 16-bit value, ranging from 0 through 2^16-1(=65535)
 An unsigned long:</br>
 
     is usually a 32-bit or 64-bit value, ranging from 0 through 2^32-1 or 0 through 2^64-1
           







