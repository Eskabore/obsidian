---
tags: #achieve #studies #courses #fullstack #webdeveloper
---

# Studies

**README**
Establish a regular work plan to alternate, optimize or increase pace.


## I/ FreeCodeCamp

## II/ CS50

### Week 1

### Week 2 - Arrays

#### Notes

**Clang**
> `clang` Clang /ˈklæŋ/ is a compiler front end for the C, C++, Objective-C, and Objective-C++ programming languages, as well as the OpenMP, OpenCL, RenderScript, CUDA, and HIP frameworks.
Clang is compatible with GCC. Its command-line interface shares many of GCC's flags and options. Clang implements many GNU language extensions and compiler intrinsics, some of which are purely for compatibility.
Clang's developers aim to reduce memory footprint and increase compilation speed compared to competing compilers, such as GCC. In October 2007, they report that Clang compiled the Carbon libraries more than twice as fast as GCC, while using about one-sixth GCC's memory and disk space. By 2011, Clang seems to retain this advantage in compiler performance. As of mid-2014, Clang still consistently compiles faster than GCC in a mixed compile time and program performance benchmark. However, by 2019, Clang is significantly slower at compiling the Linux Kernel than GCC while remaining slightly faster at compiling [[LLVM]].
\- **_Wikipedia,_** [Clang](https://www.wikiwand.com/en/Clang)

**Compiling**
Compiling in **_C_** is composed of 4 steps:
1. `preprocessing`
2. `compiling`
3. `assembling`
4. `linking`

**a.out**, _"assembler output"_, b is the conventional default file name for any program that is compiled directly (by user) with a compiler (ex: _Clang_).


#### Problem Sets

##### Problem Set 1
###### Credit
> In the file called credit.c in the credit directory, write a program that prompts the user for a credit card number and then reports (via printf) whether it is a valid American Express, MasterCard, or Visa card number, per the definitions of each’s format herein. So that we can automate some tests of your code, we ask that your program’s last line of output be AMEX\n or MASTERCARD\n or VISA\n or INVALID\n, nothing more, nothing less. For simplicity, you may assume that the user’s input will be entirely numeric (i.e., devoid of hyphens, as might be printed on an actual card) and that it won’t have leading zeroes. But do not assume that the user’s input will fit in an int! Best to use get_long from CS50’s library to get users’ input.

``` c++
#include <cs50.h>
#include <stdio.h>

// Calculate length of a given number
int get_length(long number)
{
    int i = 0;
    while (number > 0)
    {
        number = number / 10;
        i++;
    }
    return i;
}

// Main function
int main(void)
{
    // Get user's input
    long in_num = get_long("Enter Credit Card's number: ");


    // Verify if user's input is a valid credit card number
    int length = get_length(in_num);

    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
        return 0;
    }


    int total_sum1 = 0;
    int total_sum2 = 0;
    int total = 0;
    long n = in_num;
    int modulus1;
    int modulus2;
    int d1;
    int d2;
    long firsts = n;

    do
    {
        // Extract every second digit and add them together
        modulus1 = n % 10;
        n = n / 10;
        total_sum1 = total_sum1 + modulus1;

        // Extract every odd placed digit
        modulus2 = n % 10;
        n = n / 10;

        // Multiply by 2 every second last digit and add the results together
        modulus2 = modulus2 * 2;
        d1 = modulus2 % 10;
        d2 = modulus2 / 10;
        total_sum2 = total_sum2 + d1 + d2;
    }
    while (n > 0);

    // Sum of products ann digits that weren't multiplied
    total = total_sum1 + total_sum2;

    // Check if modulo 10 does not equals 0 and prints "INVALID"
    if (total % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }

// Identify Card Issuer

    // Get first 2 to digits
    do
    {
        firsts = firsts / 10;
    }
    while (firsts > 100);

    // Print out Card Issuer's Name accordingly

    // MASTERCARD
    if ((firsts / 10 == 5) && (firsts % 10 > 0 && firsts % 10 < 6))
    {
        printf("MASTERCARD\n");
    }

    // AMERICAN EXPRESS
    else if ((firsts / 10 == 3) && (firsts % 10 == 4 || firsts % 10 == 7))
    {
        printf("AMEX\n");
    }

    // VISA
    else if (firsts / 10 == 4)
    {
        printf("VISA\n");
    }

    else
    {
        printf("INVALID\n");
    }

}
```