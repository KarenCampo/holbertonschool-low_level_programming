									Project 0x14. C

# ***Bit manipulation***


## Resources

* [How to convert from Decimal to Binary](https://www.wikihow.com/Convert-from-Decimal-to-Binary)
* [Basic of Bit Manipulation](https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/)
* [C - Bitwise Operators](https://www.youtube.com/watch?v=Hs9w-yzM-AI)
* [How do you set, clear, and toggle a single bit?](https://stackoverflow.com/questions/47981/how-do-you-set-clear-and-toggle-a-single-bit)
* [Binary representation of a given number](https://www.geeksforgeeks.org/binary-representation-of-a-given-number/)


## Some Requirements

* Programs and Functions will be compiled with **gcc 4.8.4**
* All files will be ompiled on **Ubuntu 14.04 LTS**
* The prototypes of all of the functions and the prototype of the function **_putchar** should be included in your header file called **holberton.h**
*  The use of global variables is forbidden
* No more than 5 functions per file

## Learning objectives

* How to Convert Decimal to Binary
* Basics of Bit Manipulation


### How to Convert Decimal to Binary

***Base 2, the Basis for Binary Code***

The base 2, or binary numbering system is the basis for all binary code and data storage in computing systems and electronic devices.

*The decimal*, also known as the denary or base 10 numbering system is what we use in everyday life for counting. The fact that there are ten symbols is more than likely because we have 10 fingers.

We use ten different symbols or numerals to represent the numbers from zero to nine.

Those numerals are 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9

When we get to the number ten, we have no numeral to represent this value, so it is written as: 10
The idea is to use a new place holder for each power of 10 to make up any number we want.
So 134 means one hundred, 3 tens and a 4 although we just interpret and read it as one hundred and thirty four.

In the decimal number system, we saw that ten numerals were used to represent numbers from zero to nine.
*Binary* only uses two numerals 0 and 1. Place holders in binary each have a value of powers of 2. So the first place has a value 20 = 1, the second place 21 = 2, the third place 22 = 4, the fourth place 23 = 8 and so on.

In binary we count 0, 1 and then since there's no numeral for two we move onto the next place holder so two is written as 10 binary. This is exactly the same as when we get to ten decimal and have to write it as 10 because there's no numeral for ten.

***Most Significant Bit (MSB) and Least Significant Bit (LSB)***

For a binary number, the most significant bit (MSB) is the digit furthermost to the left of the number and the least significant bit (LSB) is the rightmost digit.

    1010110010
    ^        ^
    |        |

   MSB      LSB

***Deimal and Binary Equivalents***

**Decimal**                    **Binary**

      0                             0
      1                             1
      2                             10
      3                             11
      4                             100
      5                             101
      6                             110
      7                             111
      8                             1000
      9                             1001


       
***Steps to Convert from Decimal to Binary***

If you don't have a calculator to hand, you can easily convert a decimal number to binary using the remainder method. This involves dividing the number by 2 recursively until you're left with 0, while taking note of each remainder.

1. Write down the decimal number.
2. Divide the number by 2.
3. Write the result underneath.
4. Write the remainder on the right hand side. This will be 0 or 1.
5. Divide the result of the division by 2 and again write down the remainder.
6. Continue dividing and writing down remainders until the result of the division is 0.

**e.g.**

28/2 = 14/2 = 7/2 = 3/2
0       0     1     1 1
 
28 = 11100 (read the remainders from the botton up)

***Steps to Convert Binary to Decimal***

Converting from binary to decimal involves multiplying the value of each digit (i.e. 1 or 0) by the value of the placeholder in the number

1. Write down the number.
2. Starting with the LSB, multiply the digit by the value of the place holder.
3. Continue doing this until you reach the MSB.
4. Add the results together.

Convert 10110111 to Decimal

  1    0    1    1    0    1   1   1 
|128 | 64 | 32 | 16 | 8 |  4 | 2 | 1 |
  ^     ^    ^    ^   ^    ^   ^   ^
  |     |    |    |   |    |   |   |
  |     |    |    |   |    |   |   |__ 1 x 1 = 1      =   1
  |     |    |    |   |    |   |_ ___  1 x 2 = 2      =   2
  |     |    |    |   |    |__ __ _  _ 1 x 4 = 4      =   4
  |     |    |    |   |__ ___ __ __ __ 0 x 8 = 0      =   0
  |     |    |    |__ ___ ____ ____ __ 1 x 16 = 16    =  16 
  |     |    |_  ____ _______ ____ ___ 1 x 32 = 32    =  32
  |     |_ __ ____ ___ ____ ___ __  __ 0 x 64 = 0     =   0
  |__ _ __ ___ ____ ____ ____ ____ ___ 1 x 128 = 128  = 128
                                                     +_ __ __
                                                       183
10110111 = 183

The binary number 1011011 can be written as 10110112 to explicitly indicate the base. Similarly 54 base 10 can be written 5410 Often however, the subscript is omitted to avoid excessive detail when the context is known. Usually subscripts are only included in explanatory text or notes in code to avoid confusion if several numbers with different bases are used together.


### Basis of Bit Manipulation

Bit wise operations or bitwise are something very common in programs with microcontrollers since they allow us to configure registers to use the included hardware, access the input and output stations, do "quick calculations", etc.

In C this type of manipulation is done with some operators that are included in the language. These operators are the same as those in the boolean algebra:

#### * &  --  Operator AND
Is a binary operator that operates on two equal-lenght bit patterns. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0.

**e.g.**

  10101010  &
  11001100
  _ ___ ___
  10001000      So... If both bits are in the same position and are 1, the result will be 1. This is a multipliation operation.

#### * |  --  Operator OR
 operates on two equal-length bit patterns, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit in the resulting bit pattern is 0, otherwise 1.

**e.g**

   10101010  |
   11001100
   ___ __ ___
   11101110    This one is an sum operation 

#### * ~  --  Operator NOT
is an unary operator that flips the bits of the number, if the ith bit is 0, it will change it to 1 and vice versa. Bitwise NOT is nothing but simply the ones complement of a number* ^  --  operator XOR
  
**e.g**

 ~ 10101010
  __ __ __  _
   01010101       This operator simply flips the number

#### * ^  -- Xor Operator
 also takes two equal-length bit patterns. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1.

**e.g.**

    10101010 ^
    11001100
    _ __ __ __
    01100110  Here the difference of bits in the same position equals 1, and the equality of them results in 0.
 
#### * >>  --  Right Shift
 Right shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the right and append 1 at the end. Right shift is equivalent to dividing the bit pattern with 2k ( if we are shifting k bits ).

**e.g.**

   10101010  >>3
   _ _ _ __ _ _
   00010101       This one moves the bits to the right


#### * <<  --  Left Shift    
is a binary operator which shift the some number of bits, in the given bit pattern, to the left and append 0 at the end. Left shift is equivalent to multiplying the bit pattern with  ( if we are shifting k bits ).

**e.g.**
    00010101  <<3
    __  _ _ __
    10101000    Here is like the previous one but the movement is to the left

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

## *Author*

* [Karen Campo](https://github.com/KarenCampo)
