<br>
<a href='#'>
<p align="center">
   <img width="100" src="./c-logo.png" alt="C File Icon">
</p>
</a>

<h1 align='center'>C Notes</h1>

<h6 align='center'>This is my notes that I made while learning to code in C</h6>
<br>

🔴1. Header file

```c
#include <stdio.h>

```

- 👆 this is called "header file library"

🔴2. to insert a new line use `\n`

eg:

```c
printf("hello/n")
printf("world")
```

output:

```c
hello
world
```

🔴3. if you put 2 `\n` characters, it will create a blank line
eg:

```c
printf("hello\n\n")
printf("world")
```

output:

```c
hello

world
```

🔴4. Comments:

- 👉 Single line comments starts with 2 forward slashes
- eg: `//this is a comments`
- 👉 Multi line comments starts with /_ and ends with _/
- eg:

  ```c
  /*
  This is a comment
  written in
  more than just one line
  */
  ```

🔴5. Data Types

- 👉 int - stores integers (whole nums)
- 👉 float - stores decimal nums
- 👉 double - stores decimal nums with higher precision
- 👉 char - stores single characters like 'a' or 'B'. characters are surrounded by single quotes
- 👉 strings (text)

🔴6. Declaring Variables

- 👉 Syntax:
  ```c
  type variableName = value;
  ```

🔴7. Format Specifiers

- starts with % sign within double quotes, follwed by a character.
- 👉 "%d" : int - stores whole numbers
- 👉 "%f" : float - stores decimal numbers
- 👉 "%lf" : double - same as float, stores decimal numbers
- 👉 "%c" : char
- 👉 "%s" : strings
- 👉 "%lu" : print an unsigned long integer.
- 👉 "%p" : print a pointer address.
- (use float mostly, double is used when more precision is needed)
- (If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:)

eg:

```c

printf("%d\n", myNum);
printf("%c\n", myLetter);
printf("%f\n", myFloatNum);
printf("%lf\n", myDoubleNum);
printf("%s\n", myString);

```

eg: float myFloatNum = 3.5;

```c

printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
printf("%.1f\n", myFloatNum); // Only show 1 digit
printf("%.2f\n", myFloatNum); // Only show 2 digits
printf("%.4f", myFloatNum); // Only show 4 digits

```

🔴8. Arithmetic Operators

- 👉 + Addition : adds togeher two values : x + y
- 👉 - Subtraction : subtracts one value from another : x - y
- 👉 _ Multiplication: multiplies two values : x _ y
- 👉 / Division : divides one value by another : x/y
- 👉 % Modulus : returns the division remainder : x%y
- 👉 ++ Increment : increases the value of variable by 1 : ++x
- 👉 -- Decrement : decreases the value of a variable by 1 : --x

🔴9. Assignment Operators

- 👉 = : x = 5 : x = 5
- 👉 += : x += 3 : x = x + 3
- 👉 -= : x -= 3 : x = x - 3
- 👉 _= : x _= 3 : x = x \* 3
- 👉 /= : x /= 3 : x = x / 3
- 👉 %= : x %= 3 : x = x % 3
- 👉 &= : x &= 3 : x = x & 3
- 👉 |= : x |= 3 : x = x | 3
- 👉 ^= : x ^= 3 : x = x ^ 3
- 👉 >>=: x >>= 3: x = x >> 3
- 👉 <<=: x <<= 3: x = x << 3

🔴10. Comparison Operators

- 👉 == : equal to
- 👉 != : not equal to
- 👉 > : greater than
- 👉 < : less than
- 👉 >= : greater than or equal to
- 👉 <= : less than or equal to

🔴11. Logical Operators

- 👉 && : logical and
- 👉 || : logical or
- 👉 ! : logical not

🔴13. Booleans

- Booleans means **YES/NO** or **TRUE/FALSE** or **ON/OFF**
- bool type is not built-in data type , so we must import it the header file:

  ```c
  #include <stdbool.h>
  ```

- 👉 0 : false
- 👉 1 : true

🔴14. Memory Size

- 👉 `int` : 2 or 4 bytes
- 👉 `float` : 4 bytes
- 👉 `double` : 8 bytes
- 👉 `char` : 1 byte

🔴15. Type Conversion
Converting one data type to another is called type conversion.

- 👉 Implicit Conversion : done automatically by the compiler
- 👉 Explicit Conversion : done by the programmer

🔴16. If else statements
👇 Syntax

```c

if (condition) {
// code
} else {
// code
}

```

🔴17. Else if statement
👇 Syntax

```c

if (condition1) {
// code
} else if (condition2) {
// code
} else {
// code
}

```

🔴18. Short Hand If Else... (Ternary Operator)
👇 Syntax

```c

variable = (condition) ? expressionTrue : expressionFalse;

```

🔴19. Switch Statement

- Instead of writing many `if..else` statements, you can use the `switch` statement.
- 👇 Syntax

```c
switch (expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```

- The `break` keyword stops the execution of the switch statement.
- The `default` keyword specifies some code to run if there is no case match.

🔴20. While Loop
`while` loop loops through a block of code as long as a specified condition is true.
👇Sytnax

```c
while (condition) {
  // code block to be executed
}
```

🔴21. Do While Loop
`do while` loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.
👇Syntax

```c
do {
  // code block to be executed
}
while (condition);
```

🔴22. For Loop
`for` loop is often used when the number of iterations is predetermined/known.
👇Syntax

```c
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

- Statement 1 is executed (one time) before the execution of the code block.
- Statement 2 defines the condition for executing the code block.
- Statement 3 is executed (every time) after the code block has been executed.

🔴23. Nested Loops
A nested loop is a loop inside a loop.
👇Syntax

```c
for (int i = 0; i < 5; i++) {
  for (int j = 0; j < 5; j++) {
    printf("%d %d\n", i, j);
  }
}
```

🔴24. Break and Continue

- 👉`break` statement is used to exit a loop.
  eg:
  ```c
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    printf("p = %d\n", p);
  }
  ```
  Output:
  ```
  p = 0
  p = 1
  p = 2
  p = 3
  ```
- 👉`continue` statement is used to skip the current block, and return to the loop.
  eg:

  ```c
  for (int i = 0; i < 6; i++) {
    if (i == 4) {
      continue;
    }
    printf("p = %d\n", p);
  }
  ```

  Output:

  ```
  p = 0
  p = 1
  p = 2
  p = 3
  p = 5
  ```

🔴25. Arrays

- An array is a collection of items stored at each memory location.
- The idea is to store multiple items of the same type together.
- Arrays can be created in two ways:
  - 👉 **Static Memory Allocation** : In this, the size of the array is determined at the compile time.
  - 👉 **Dynamic Memory Allocation** : In this, the size of the array is determined at the run time.

eg:

```c
int myArray[5] = {1, 2, 3, 4, 5};
```

- To access an element in an array, the index number is used.
- The index number starts from 0.
- eg: `myArray[0]` will return 1

- **Multi-dimensional Arrays** : An array of arrays is known as a multi-dimensional array.
  eg:

  ```c
  int myNumbers[2][3] = {{1, 2, 3}, {4, 5, 6}};
  ```

- To access an element in a multi-dimensional array, the index number is used.

🔴26. Strings

- Strings are actually one-dimensional array of characters terminated by a null character '\0'.
- A string is defined as an array of characters.
- A string is terminated by a null character '\0'.
- A string literal is a sequence of characters enclosed in double-quote marks.
- eg:

```c
char myString[6] = "Hello";
```

- To output the value of a string, you can use the `%s` format specifier.
- eg:

```c
printf("%s", myString);
```

🔴26. Special characters (escape characters)

- 👉 `\n` : new line
- 👉 `\t` : tab
- 👉 `\b` : backspace
- 👉 `\r` : carriage return
- 👉 `\0` : null character
- 👉 `\\` : backslash
- 👉 `\'` : single quote
- 👉 `\"` : double quote

🔴27. String Functions

- 👉 `strlen()` : returns the length of a string
- 👉 `strcat()` : concatenates two strings
- 👉 `strcpy()` : copies one string to another
- 👉 `strcmp()` : compares two strings

🔴28. Memory Adderss

- When a variable is created in C, a memory address is assigned to the variable.
- When we assign a value to the variable, it is stored in this memory address.
- When we assign a value to the variable, it is stored in this memory address.
- The address of the variable is assigned to the pointer using the `&` operator.
- eg:

```c
int myCurrentAge = 19;
    printf("%p\n", &myAge); // outputs: 0061FE80 - this changes everytime you run the program
```

🔴29. Pointers

- A pointer is a variable whose value is the address of another variable.
- A pointer is declared using the `*` operator.
- eg:

```c
int myAge = 19;
int *myPointer = &myAge;
```

- To get the value of the variable that the pointer is pointing to, use the `*` operator.
- eg:

```c
printf("%d\n", *myPointer);
```

🔴30. Functions

- A function is a block of code that performs a specific task.
- A function is declared using the `function` keyword.
- A function is called using the function name followed by parentheses.
- eg:

```c
void myFunction() {
  printf("Hello World\n");
}

int main() {
  myFunction();
  return 0;
}
```

- **Function Declaration** : A function declaration tells the compiler about a function's name, return type, and parameters.
- **Function Definition** : The actual body of the function is called the function definition.
- **Function Call** : To call a function, you simply need to pass the required parameters along with the function name.

🔴31. Function Parameters

- Information can be passed to functions as a parameter.
- Parameters act as variables inside the function.
- Parameters are specified after the function name, inside the parentheses.
- You can add as many parameters as you want, just separate them with a comma.
- eg:

```c
void myFunction(int myAge) {
  printf("I am %d years old\n", myAge);
}

int main() {
  myFunction(19);
  return 0;
}
```

🔴32. Return Keyword

- The `return` keyword is used to return a value from a function.
- eg:

```c
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  printf("%d\n", myFunction(5, 3));
  return 0;
}
```

🔴33. Recursion

- Recursion is the technique of making a function call itself.
- This technique provides a way to break complicated problems down into simple problems which are easier to solve.
- eg:

```c
int myFunction(int x) {
  if (x > 0) {
    return x + myFunction(x - 1);
  } else {
    return 0;
  }
}

int main() {
  printf("%d\n", myFunction(5));
  return 0;
}
```

🔴34. Math Function

- C programming has a set of built-in math functions.
- To use these functions, you need to include the `math.h` library.
- eg:

```c
#include <math.h>

int main() {
  printf("%f\n", sqrt(64));
  printf("%f\n", ceil(9.6));
  printf("%f\n", floor(9.6));
  return 0;
}
```

🔴35. File Handling

- You can create, open, read, write, and close files using functions.
- To perform file processing in C, you need to include the `stdio.h` header file.
- You can create, open, read, and write to files by using the `fopen`, `fclose`, `fprintf`, and `fscanf` functions.
- eg:

```c
#include <stdio.h>

int main() {
  FILE *myFile = fopen("test.txt", "w");
  fprintf(myFile, "Hello World\n");
  fclose(myFile);
  return 0;
}
```

🔴36. Write to Files

- To write to an existing file, you must add a parameter to the `fopen()` function:
  - `w` : write mode
  - `a` : append mode
  - `r+` : read/write mode
  - `w+` : read/write mode (overwrite file)
  - `a+` : read/write mode (append if file exists)

```c
#include <stdio.h>

int main() {
  FILE *fptr;

  // open the file in writing mode
  fptr = fopen("filename.txt", "w");

  // write some text to the file
  fprintf(fptr, "Hello World\n");

  // close the file
  fclose(fptr);
}
```

- NOTE: If you write to a file that already exists, it will overwrite the existing content.

🔴37. Read from Files

- To read from an existing file, you must add a parameter to the `fopen()` function:
  - `r` : read mode
  - `r+` : read/write mode
  - `w+` : read/write mode (overwrite file)
  - `a+` : read/write mode (append if file exists)

```c
#include <stdio.h>

int main() {
  FILE *fptr;
  char c;

  // open the file in read mode
  fptr = fopen("filename.txt", "r");

  // Store the content of the file
  char myString[100];

  // Read the content and store it inside myString
  fgets(myString, 100, fptr);

  // Print the file content
  printf("%s", myString);

  // Close the file
  fclose(fptr);
}
```

- The `fgets` function only reads the first line of the file.
- To read every line of the file, use a `while` loop.
  -eg:

```c
#include <stdio.h>

int main() {
  FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and print it
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}

// Close the file
fclose(fptr);
}
```

- If you try to open a file for reading that does not exist, the `fopen()` function will return `NULL`.

🔴38. Structure

- A structure is a user-defined data type in C/C++.
- A structure creates a data type that can be used to group items of possibly different types into a single type.
- eg:

```c
struct Person {
  char name[50];
  int age;
  float salary;
};

int main() {
  struct Person person1;
  person1.age = 19;
  person1.salary = 12000.50;
  strcpy(person1.name, "John");
  printf("%s\n", person1.name);
  printf("%d\n", person1.age);
  printf("%f\n", person1.salary);
  return 0;
}
```

🔴39. Enumeration (enum)

- An enumeration is a user-defined data type that consists of integral constants.
- To define an enumeration, use the `enum` keyword.
- eg:

```c
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
```

- By default, the value of the first name is 0, the second name is 1, and so on.
- But you can give a name a specific value.
- eg:

```c
enum week { Sunday, Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday };
```

- You can define the size of an enum using the `sizeof` operator.
- eg:

```c
#include <stdio.h>

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
  printf("%d\n", sizeof(enum week));
  return 0;
}
```

🔴40. User Input

- To allow user input, you can use the `scanf()` function.
- The `scanf()` function reads the input from the standard input (keyboard).
- eg:

```c
#include <stdio.h>

int main() {
  int myAge;
  printf("Enter your age: ");
  scanf("%d", &myAge);
  printf("You are %d years old\n", myAge);
  return 0;
}
```

- The `&` operator is used to get the memory address of a variable.
- The `scanf()` function requires the address of the variable it is reading the input for.
