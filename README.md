# Godspeed: Golang to X86-64 compiler

Compiler Design course project done under Prof. Amey Karkare and Prof. Subhajit Roy, 2021-22-II semester.
SIT triplet:
* Source - Golang
* Implementation - C++
* Target - X86

## Group Members

|       Name      | Roll No |        Email        |
|:---------------:|:-------:|:-------------------:|
| Shubh Agrawal |  190828 |  agshubh@iitk.ac.in | 
|   Shubhankar Gambhir   | 190835 |  shbkgmbr@iitk.ac.in|
|  Tarun Kanodia |  190902 | taruntk@iitk.ac.in |
| V. Pramodh Gopalan | 190933 | pramodh@iitk.ac.in |

## Dependencies
* GNU Flex
* GNU Bison
* GNU Make


## Features:
### Basic:
- Native data types: Int, Char, Bool
- Variables and Expressions (Large expressions also supported)
- Conditional: if, if-else
- Loops: for
- Break, Continue
- Arrays
- Input, output
- Functions (support for arbitrary number of parameters), recursion
- Pointers
- Arithmetic operators
- Logical and bitwise operators

### Advanced:
- Multiple assignments in single line (a, b, c := 1,2,3)
- Dynamic Memory Allocation
- Auto-type inference
- Short variable declaration
- Multidimensional Arrays
- Multilevel Pointers
- Global variables

## Running the compiler
Steps to the generate the X86 code 
```
	make
	./bin/parser <path to go file>
```

Then execute the generated binary by:
```
	./a.out
```

