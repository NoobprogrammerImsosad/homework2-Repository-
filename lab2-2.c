#include <stdio.h>
int main()
{
int i; //Declaring a variable of type int named i
int *ptr;//Declaring a variable of type pointer named ptr
int **dptr;//Declaring a variable of type double pointer named dptr
i = 1234;//Assigning 1234 to i
printf("[----- [김태영] [2021041005] -----]\n");
printf("[checking values before ptr = &i] \n"); 
printf("value of i == %d\n", i); //Printing the value of i 1234
printf("address of i == %p\n", &i);//Printing the address of i 
printf("value of ptr == %p\n", ptr);//Printing the value of ptr, garbage value
printf("address of ptr == %p\n", &ptr);//Printing the address of ptr
ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);//Printing the value of i 1234
printf("address of i == %p\n", &i);//Printing the address of i
printf("value of ptr == %p\n", ptr);//Printing the value of ptr same as address of i 
printf("address of ptr == %p\n", &ptr);//Printing the address of ptr
printf("value of *ptr == %d\n", *ptr);//Printing the value of the variable pointed to by ptr same as value of i 1234
dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);//Printing the value of i 1234
printf("address of i == %p\n", &i);//Printing the address of i
printf("value of ptr == %p\n", ptr);//Printing the value of ptr same as address of i
printf("address of ptr == %p\n", &ptr);//Printing the address of ptr
printf("value of *ptr == %d\n", *ptr);//Printing the value of the variable i pointed to by ptr 1234
printf("value of dptr == %p\n", dptr);//Printing the value of dptr same as address of dpt
printf("address of dptr == %p\n", &dptr);//Printing the address of dptr
printf("value of *dptr == %p\n", *dptr);//Printing the value of the variable ptr as same as address of i pointed to by dptr 
printf("value of **dptr == %d\n", **dptr);//Printing the value of the varialbe i which is double pointed to by dptr 1234
*ptr = 7777; /* changing the value of *ptr *///It means assigning 7777 to i
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);//Printing the value of i 7777
printf("value of *ptr == %d\n", *ptr);//Printing the value of the variable i pointed to by ptr 7777
printf("value of **dptr == %d\n", **dptr);//Printing the value of the variable i which is double pointed to by dptr 7777
**dptr = 8888; /* changing the value of **dptr *///It means assingning 8888 to i
printf("\n[after **dptr = 8888] \n");//Printing the value of i 8888
printf("value of i == %d\n", i);//Printing the value of i 8888
printf("value of *ptr == %d\n", *ptr);//Printing the value of tha variable i pointed to by ptr 8888
printf("value of **dptr == %d\n", **dptr);//Printing the value of the variable i which is double pointed to by dptr 8888
return 0;//Return of main Function
}