#include<stdio.h>
#include<stdlib.h>

// Explaining Variables
/*int main(){
    
    // Variables act as a container to store some value to be referenced later on.
    // char defines the datatype, characterName is the variable name, [] indicates that we want to store a bunch of characters and not single one.
    char characterName[] = "John";
    int characterAge = 35;

    // %s acts as a placeholder to be replaced by a string variable later on.
    printf("There was once a man name %s \n", characterName);
    printf("he was %d years old.\n", characterAge);
    
    // Variables can be modified for different results.
    characterAge = 30;
    printf("He really liked the name %s \n", characterName);
    printf("but did not like being %d.\n", characterAge);
 
    return 0;
}*/

// Explaining Datatypes
/*int main(){

    // Value can be typed out without using quotation marks.
    int age = 40;

    // Decimal has 2 types - float and double
    double gpa = 3.6;

    // Used to store single characters.
    char grade = 'A';

    // char modification to store string of characters
    char phrase[] = "Giraffe Academy";

    return 0;
}*/

// Explaining printf
/*int main(){

    // \ is a escape sequence when printing/
    printf("Hello \" World");

    // To print out a number, use a format specifier using %.
    printf("My favorite %s is %d","number",500);

    return 0;
}*/

// Working with numbers
/*int main(){

    // if %f, integer+decimal yields a decimal.
    // if %f, decimal+decimal yields a integer.
    // if %d, 5/4 yields 1.

    // Using in-built C math functions like sqrt, ceil and floor.
    printf("f", pow(2,3));

    return 0;
}*/

// Explain constants
// Constant is a special type of variable in C which can't be modified.
/*int main(){

    // By declaring const before you make the variable unchangeable.
    // Common practice to use uppercase for constant variables. 
    const int NUM = 5;
    printf("%d\n", NUM);
    // Will show an error.
    NUM = 8;
    printf("%d", NUM);

    return 0;
}*/

// Getting user input
/*int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You are %d years old", age);

    char name[20];
    printf("Enter your name: ");
    // stdin is standard input.
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
     
    return 0;
}*/

// Building a basic calculator
/*int main(){

    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1+num2);    

    return 0;
}*/

// Building a madlib game
/*int main(){

    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Enter a color: ");
    scanf("%s",color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s",celebrity);

    printf("Rose are %s\n",color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n",celebrity);

    return 0;
}*/

//Arrays
/*int main(){

    int luckyNumbers[] = {4,8,15,16,23,42};
    // Creating array having unknown elements with known capacity.
    int luckyNumbers1[10];
    // Values can be assigned but referencing indexes.

    // Modifying values by referencing indexes
    luckyNumbers[1] = 200;

    // Use indexing to access elements from an array.
    printf("%d", luckyNumbers[0]);
    return 0;
}*/

// Using Functions/ Methods
// Function is basically a collection of code that performs a specific task
/*int main(){
    //To demonstrate order.
    printf("Top\n");
    // Call the function to use it.
    sayHi("Name1", 20);
    sayHi("Name2", 30);
    sayHi("Name3", 40);
    printf("Bottom");
    return 0;
}

// Void means that this particular function is not going to return any info.
// Entering a parameter in round brackets.
void sayHi(char name[], int age){
    printf("Hello %s, you are %d. \n", name, age);
}*/

// Using Return statements
// Always create function above main function for easier calling unless you're using prototyping.
/*double cube(double num){
    double result = num*num*num;
    // return keyword breaks us out of the function.
    return result;
    printf("This code will never get executed.");
}
int main(){

    printf("Answer: %f", cube(3.0));
    return 0;
}*/

// Using If Statements
/*int max(int num1, int num2, int num3){
    int result;
    // Mention condition inside round brackets.
    // && acts as and and allows us to put two conditions together.
    if (num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    return result;
}

int main(){
    // || acts as or. 
    // == and =! same as python.
    if (3>2 || 2>5){
        printf("True");
    }
    // ! in different bracket acts as negation operator.
    if (!(3<2)){
        printf("True too");
    }
    printf("%d", max(4, 10, 6));
    return 0;
}*/

// Building a better calculator.
/*int main(){

    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    // Provide space before %c to take in special character.
    scanf(" %c", &op);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    if (op == '+'){
        printf("%f", num1 + num2);
    } else if (op == '-'){
        printf("%f", num1 - num2);
    } else if (op == '/'){
        printf("%f", num1/num2);
    } else if (op == '*'){
        printf("%f", num1*num2);
    } else{
        printf("Invalid Operator");
    }
    return 0;
}*/

// Switch Statements
/*int main(){

    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);
    switch(grade){
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly!");
        break;
    case 'D':
        printf("You did really bad!");
        break;
    case 'F':
        printf("You failed!");
        break;
    default :
        printf("Invalid Grade");
    }
    
    return 0;
}*/

// Structs
// Structs is a data structure where we can store groups of data types.
/*struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    // Using string copy function, pass in destination of the string and the string you want to store.
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");


    printf("%f \n", student1.gpa);
    printf("%s \n",student1.name);
    printf("%d \n",student2.age);
    printf("%s",student2.major);

    return 0;
}*/

// Using While Loops
/*int main(){

    int index = 1;
    // Specify condition in round brackets.
    // Condition is checked before executing the loop.
    while(index <= 5){
        printf("%d\n", index);
        // Avoid infinite loops.
        index++;
    }

    // do while executes code first and then checks condition.
    int index1 = 6;
    do {
        printf("%d\n", index1);
        index1++;
    } while (index1 <=5);
    
    return 0;
}*/

//Building a Guessing Game
/*int main(){

    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    while(guess != secretNumber && outOfGuesses == 0){
        if (guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d",&guess);
            guessCount ++;
        } else {
            outOfGuesses = 1; 
        }
    }
    if (outOfGuesses == 1){
        printf("Out of guesses");
    } else {
        printf("You Win!");
    }

    return 0;
}*/

//Using For Loops
/*int main(){

    int i;
    for (i = 1; i <= 5; i++){
        printf("%d\n", i);
    }

    //Looping through an array.
    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    for (i = 0; i < 6; i++){
        printf("%d\n",luckyNumbers[i]);
    }
    return 0;
}*/

//2D Arrays & Nested Loops
/*int main(){

    int nums [3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    // Use indexing to access elements.
    // printf("%d",nums[0][0]);

    int i,j;
    // 3 siginifies no. of elements in the nums array.
    for (i = 0; i < 3; i++){
        // 2 signifies the no. of elements in each array.
        for (j = 0; j < 2; j++){
            printf("%d", nums[i][j]);
        } printf("\n");
    }
    return 0;
}*/

// Accessing Memory Addresses
/*int main(){

    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("%p\n",&age);
    printf("%p\n",&gpa);
    printf("%p\n",&grade);
    return 0;
}*/

// Using Pointers
/*int main(){
    // Pointer is a type of datatype that is a physical address inside the memory of a computer.
    // Pointer variable to store the memory address of a variable already present in a program.
    int age = 30;
    // Use datatype of the variable whose address it is storing.
    int * pAge = &age;
    printf("Age's memory address: %p\n",&age);
    return 0;
}*/

// Dereferencing Pointers
/*int main(){

    int age = 30;
    int *pAge = &age;
    //printf("%p",&age);
    printf("%d\n",*pAge);
    printf("%d\n",*&age);
    printf("%d\n",&*&age);
    return 0;
}*/

// Writing Files
/*int main(){
    // FILE is the pointer to a physical file on the computer, fpointer - file pointer, fopen - function to open a file, 2 paramters - name and file mode
    // File modes - r: read, w: write, a: append
    // Mention absolute/relative path, by default it will be created in the place where C file is stored. 
    FILE * fpointer = fopen("employees.txt","w");
    // Allows to write info on the file.
    fprintf(fpointer,"Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    
    FILE * fpointer = fopen("employees.txt","a");
    fprintf(fpointer,"\nKelly, Customer Service");

    fclose(fpointer);
    return 0;
}*/

// Reading Files
int main(){

    char line[255];
    FILE * fpointer = fopen("employees.txt","r");
    // fgets allows us to read the file line by line, takes in 2 parameters - where to store the info & size
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s\n",line);
    fclose(fpointer);
    return 0;
}