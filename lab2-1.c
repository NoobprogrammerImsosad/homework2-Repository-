#include <stdio.h>
int main()
{
 char charType; //Declaring a variable of type char 
 int integerType;//Declaring a variable of type int
 float floatType;//Declaring a variable of type float
 double doubleType;//Declaring a variable of type double
 printf("[----- [김태영] [2021041005] -----]\n");

 printf("Size of char: %ld byte\n",sizeof(charType));//printing size of char data type 1
 printf("Size of int: %ld bytes\n",sizeof(integerType));//printing size of int data type 4
 printf("Size of float: %ld bytes\n",sizeof(floatType));//printing size of float data type 4
 printf("Size of double: %ld bytes\n",sizeof(doubleType));//printing size of double data type 8
 printf("-----------------------------------------\n");
 printf("Size of char: %ld byte\n",sizeof(char));//printing size of char data type 1
 printf("Size of int: %ld bytes\n",sizeof(int));//printing size of int data type 4
 printf("Size of float: %ld bytes\n",sizeof(float));//printing size of float data type 4
 printf("Size of double: %ld bytes\n",sizeof(double));//printing size of double data type 8
 printf("-----------------------------------------\n");
 printf("Size of char*: %ld byte\n",sizeof(char*));//printing size of pointer data type which points to an char variable 8
 printf("Size of int*: %ld bytes\n",sizeof(int*));//printing size of pointer data type which points to an int variable 8
 printf("Size of float*: %ld bytes\n",sizeof(float*));//printing size of pointer data type which points to an float variable 8
 printf("Size of double*: %ld bytes\n",sizeof(double*));//printing size of pointer data type which points to an float variable 8
 //In a 64-bit machine, pointer data types always have a size of 8 bytes, regardless of what the pointer points to
 return 0;//Main functions return values
}