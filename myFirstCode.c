#include <stdio.h>
#include <stdbool.h> // for bool data type
#include <string.h>  // for functions

void myFunction() // see line 379
{
    printf("This is my first function that I created!\n");
}
// function with parameter
void myName(char name[]) // see line 388
{
    printf("Hello %s\n", name);
}
// functions with multiple parameters
void intro(char work[], int yearsOld) // see line 395
{
    printf("I am a %s. I am %d years old.\n", work, yearsOld);
}
// return values in functions
int thisFunction(int x) // see line 401
{
    return 5 + x;
}
// return values in two parameters
int addThis(int x, int y) // see line 407
{
    return x + y;
}
int main()
{
    // ⚡ print function
    printf("Hello World!\n");
    printf("Have a good day!\n");

    // ⚡ Comments
    // this is a single comment
    /* This is multi
    line comment*/
    int myNum = 71;
    printf("%d\n", myNum);
    printf("My fav number is: %d\n", myNum);
    char myLetter = 'A';
    printf("My fav character is: %c and num is %d.\n", myLetter, myNum);

    // ⚡ change variable values
    int numberOfFruits = 40;
    printf("Number of Fruits is: %d\n", numberOfFruits);
    numberOfFruits = 44;
    printf("Now number of Fruits is: %d\n", numberOfFruits);

    // ⚡Adding variables
    int x = 7;
    int y = 1;
    int sum = x + y;
    printf("Sum of x and y is: %d,\n", sum);

    // ⚡ Declaring Multiple Variables
    int a = 2, b = 4, c = 5;
    printf("%d\n", a + b + c);
    int m, n, o;
    m = n = o = 10;
    printf("%d", m + n + o);

    // ⚡Using different format specifiers in a single printf() function
    char newA = 'A';
    int newNum = 19;
    printf("\nMy letter is %c and my letter is %d", newA, newNum);

    // ⚡ const keyword
    const int myAge = 19; // myAge will always be 19
    // myAge = 18; //This will give Error

    // ⚡ Booleans
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("\nIs Programming Fun: %d\n", isProgrammingFun);
    printf("Is Fish Tasty: %d\n", isFishTasty);

    // ⚡ Comparing values & variables
    int myNum1 = 10;
    int myNum2 = 9;
    printf("%d", myNum1 > myNum2);      // returns 1 (true), because 10 is higher than 9.
    printf("\n%d", myNum1 == myNum2);   // returns 0 (false), because 10 is not equal to 9.
    printf("\n%d", myNum1 < myNum2);    // returns 0 (false), because 10 is higher than 9.
    printf("\n%d", myNum1 != myNum2);   // returns 1 (true), because 10 is not equal to 9.
    printf("\n%d", myNum1 >= myNum2);   // returns 1 (true), because 10 is higher, or equal, to 9.
    printf("\n%d\n", myNum1 <= myNum2); // returns 0 (false), because 10 is higher, but not equal, to 9.
    // [ Remember to include the <stdbool.h> header file when working with bool variables. ]
    char myText[] = "Hello Aditya";
    printf("%s\n", myText);

    // Calculating Area of Rectangle
    int length = 40;
    int width = 20;
    int area;

    area = length * width;

    printf("Length is: %d.\n", length);
    printf("Width is: %d.\n", width);
    printf("Area of the rectangle is: %d.\n", area);

    // ⚡ Type conversions
    // 1. Implicit Conversion
    float myFloat = 5 / 2;
    printf("%f\n", myFloat); // 2.000000 (automatic conversion: float to int)
    // 2. Explicit Conversion
    float newFloat = (float)5 / 2;
    printf("%f", newFloat); // 2.500000 (manual conversion: float to int)

    // ⚡ if - else statements
    if (20 > 18)
    {
        printf("20 is greater than 18.\n");
    }
    int time = 9;
    if (time < 12)
    {
        printf("Good Morning!\n");
    }
    else
    {
        printf("Good Afternoon!\n");
    }

    // ⚡ else - if statements
    int samay = 19;
    if (samay < 12)
    {
        printf("Good Morning!\n");
    }
    else if (samay < 16)
    {
        printf("Good Afternoon!\n");
    }
    else if (samay > 17)
    {
        printf("Good Evening!\n");
    }

    // ⚡ Short hand If Else ... Ternary Operator
    //  Syntax:
    //   variable = (condition) ? expressionTrue : expressionFalse;
    int timeSamay = 20;
    (timeSamay > 20) ? printf("Good Evening\n") : printf("Good Night!\n");

    // ⚡ Switch Statements
    // Syntax:
    /*
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
        */

    int day = 10;
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Looking forward to the Weekend\n");
    }
    // break keyword stops the code execution
    // default keyword specifies some code to run if there is no case match.

    // While loop
    // Syntax
    /*
    while (condition) {
        // code block to be executed
    }
    */
    int i = 0;

    while (i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    // ⚡ Do/While loop
    //  Syntax
    /*
    do {
    // code block to be executed
    }
    while (condition);
    */
    a = 6;

    do
    {
        printf("a = %d\n", i);
        i++;
    } while (i < 12);

    // ⚡ For loop
    //  Syntax
    /*
    for (expression 1; expression 2; expression 3) {
        // code block to be executed
    }
    */

    b = 0;
    for (b = 0; b < 5; b++)
    {
        printf("b = %d\n", b);
    }

    // ⚡ Nested Loops
    // Placing loops inside another loops is called Nested Loop
    // The "inner loops" executes one time for each iteration of the "outer loop:"
    int j, k;

    // Outer loop
    for (j = 1; j <= 2; ++j)
    {
        printf("Outer: %d\n", j);

        // Inner loop
        for (k = 1; k <= 3; ++k)
        {
            printf(" Inner: %d\n", k);
        }
    }

    // ⚡ Break
    int p;

    for (p = 0; p < 10; p++)
    {
        if (p == 6)
        {
            break;
        }
        printf("p = %d\n", p);
    }

    // ⚡ Continue
    int g;

    for (g = 0; g < 10; g++)
    {
        if (g == 6)
        {
            continue;
        }
        printf("g = %d\n", g);
    }

    // ⚡ Break in While loop
    int u = 0;
    while (u < 10)
    {
        if (u == 7)
        {
            break;
        }

        printf("u = %d\n", u); // prints till u = 6
        u++;
    }

    // ⚡ Continue in While loop
    int r = 0;
    while (r < 10)
    {
        if (r == 5)
        {
            r++;
            continue;
        }

        printf("r = %d\n", r); // prints till r = 9
        r++;
    }

    // ⚡ Arrays
    int myArray[] = {23, 56, 42, 99};
    printf("%d\n", myArray[3]); // output: 99
    myArray[3] = 80;
    // change an array element
    printf("%d\n", myArray[3]); // output: 80

    // looping through an array
    int myNumbers[] = {25, 50, 75, 100};
    int s;

    for (s = 0; s < 4; s++)
    {
        printf("s = %d\n", myNumbers[s]);
    }
    // ⚡ setting array size and adding elements
    int newNumbers[4];
    // adding elements
    newNumbers[0] = 23;
    newNumbers[1] = 26;
    newNumbers[2] = 24;
    newNumbers[3] = 33;
    // Getting the size of the array
    printf("%lu\n", sizeof(newNumbers)); // returns: 16 because sizeof operator returns the size of a type in bytes.
    // Getting the actual size of array
    int myNewArray[] = {23, 66, 87, 99};
    int lengthOfArray = sizeof(myNewArray) / sizeof(myNewArray[0]);
    printf("%d", lengthOfArray);

    // ⚡ Multidimensional Array
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("\n%d\n", matrix[0][2]); // Outputs 2
    // Loop through 2D array
    int anotherMatrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int first, second;
    for (first = 0; first < 2; first++)
    {
        for (second = 0; second < 3; second++)
        {
            printf("loopeing = %d\n", anotherMatrix[first][second]);
        }
    }

    // ⚡ Strings
    // used to store text/characters like "Hello World", inside double quotes
    char greeting[] = "Hello World";
    printf("%s\n", greeting);
    // accessing string elements
    printf("%c\n", greeting[0]); // NOTE: we use %c to print single characters
    greeting[0] = 'M';
    printf("%s\n", greeting); // outputs: Mello World
    // Loop through string
    char carName[] = "Audi";
    int h;
    for (h = 0; h < 4; h++)
    {
        printf("%c\n", carName[h]);
    }
    // Another way to create strings
    char greeting2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'}; // we include \0 at the end, mandatory to tell C that it is the end of the string
    printf("%s\n", greeting2);
    // string examples:
    char firstName[] = "Aditya";
    char lastName[] = "Raj";
    printf("Hi! I am %s %s\n", firstName, lastName);
    // String special characters
    // we use escape character
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    printf("%s\n", txt);

    // ⚡ String Functions
    //   to use string functions, must include #include <string.h> in header file
    //   string length function
    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabets)); // outputs: 26
    printf("%d\n", sizeof(alphabets)); // outputs: 27

    // ⚡ Memory Address
    //  When a variable is created in C, a memory address is assigned to the variable.
    //   When we assign a value to the variable, it is stored in this memory address.
    //  When we assign a value to the variable, it is stored in this memory address.
    int myCurrentAge = 19;
    printf("%p\n", &myAge); // outputs: 0061FE80

    // ⚡ Pointers
    int age = 19;         // Variable declaration
    int *ptr = &age;      // pointer declaration, this stores the address of myAge variable
    printf("%d\n", age);  // outputs: 19
    printf("%p\n", &age); // outputs the memory address of age (0061FD84)
    printf("%p\n", ptr);  // outputs the memory address (0061FD84)
    // Dereference
    int *newPtr = &age; // pointer declaration
    printf("%d\n", *ptr);

    // ⚡ Functions
    //  function runs only when it is called
    //  myFunction() function is created on line 5 which is outside the main() function we can't directly declare a function inside another function
    myFunction();     // calling a function
    myName("Aditya"); // calling function from line 10
    myName("Ujjwal");
    intro("programmer", 19);                    // calling function from line 14
    printf("Result is: %d\n", thisFunction(3)); // calling function from line 20
    printf("Add result is %d\n", addThis(3, 9));

    // ⚡ Math function
    printf("%f\n", sqrt(64));
    printf("%f\n", ceil(9.6));
    printf("%f\n", floor(9.6));

    // ⚡ Structure
    // creating structure using struct keyword
    struct myStructure // structure declaration
    {
        int myNum;     // member of myStructure(int variable)
        char myLetter; // member of myStructure(char variable)
    };
    struct myStructure s1; // created a struture variable of myStructure called s1

    // Assign values to members of s1
    s1.myNum = 71;
    s1.myLetter = 'A';

    // printing values
    printf("My number is: %d\n", s1.myNum);
    printf("My letter is: %c\n", s1.myLetter);

    // ⚡ Enumeration (enum)
    enum Level
    {
        LOW,
        MEDIUM,
        HIGH
    };
    // to access the enum, we create a variable of it and assign a value to it
    enum Level myNewVar = MEDIUM;
    // print the enum variable
    printf("%d\n", myNewVar); // LOW is 0, MEDIUM is 1, HIGH is 2

    // ⚡ User input
    // we use the scanf() function to get user input
    int myNewNum;
    printf("Type number of your choice: "); // ask user to type a number
    scanf("%d", &myNewNum);                 // take user input
    printf("Your selected number is: %d\n", myNewNum);
    return 0;
}
