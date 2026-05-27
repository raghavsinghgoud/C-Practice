// int

// #include <stdio.h>

// int main(){

//     // variable = A reusable container for a value.
//     //            Behaves as if it were the value it contains.

//     int age = 25;
//     int year = 2026;
//     int quantity = 1;

//     printf("You are %d years old"\n, age);
//     printf("The year is %d\n", year);
//     printf("You have ordered %d x items\n", quantity)

//     return 0;
// }


// float


// #include <stdio.h>

// int main(){

//     float gpa = 2.5; // maximum capacity for storing digits after decimal is 67.
//     float price = 19.99;
//     float temperature  = -10.1;

//     printf("Your gpa is %f\n", gpa);
//     printf("The price is $%.2f\n", price); // using decimal at %f decides, how many zeros to show in code
//     printf("The temperature is %fF\n", temperature);


//     return 0;
// }


// double

// #include <stdio.h>

// int main(){

//     double pi = 3.14159265358979;
//     double e = 2.7182818284590;

//     printf("The value of pi is %.15f", pi);
//     printf("The value of e is %f\n", e);


//     return 0;
// }


// char

// #include <stdio.h>

// int main(){

//     char grade = 'F';
//     char symbol = '!';
//     char currency = '$'

//     printf("Your grade is %c\n", grade);
//     printf("Your favourite symbol is %c\n", symbol);
//     printf("The currency is %c\n", currency);

//     return 0;
// }


// strings // in c language there are no strings


// #include <stdio.h>

// int main(){

//     char name[] = "Bro Code";
//     char food[] = "pizza";
//     char email[] = "fake123@gmail.com"

//     printf("Hello %s\n", name);
//     printf("Your favourite food is %s\n", food);
//     printf("Your email is %s\n", email);

//     return 0;
// }


// bool
//boolean


// #include <stdio.h>
// #include <stdbool.h>


// int main(){

//     bool isOnline = true;
//     bool isStudent = false;

//     printf("%d", isOnline);
//     printf("%d", isStudent);

//     return 0;
// }


// format specifiers


// #include <stdio.h>

// int main(){


//     /*  Format Specifier = Special tokens that begin with a % symbol, followed by a character that specifies the data and optional modifiers (width, precision, flags). They control how data is displayed or interpreted.
//     */
    

//     int age = 25;
//     float price = 19.99;
//     double pi = 3.1415926535;
//     char currency = '$';
//     char name[] = "Bro Code";

//     printf("%d\n", age);
//     printf("%f\n", price);
//     printf("%f\n", pi);
//     printf("%c\n", currency);
//     printf("%s\n", name);

//     return 0;
// }


