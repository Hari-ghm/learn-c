// SIMPLE FUNCTION

#include<stdio.h>
void message(); // funnction prototype declaration. void indicates that the func does not return anything after execution
int main(){
    message(); // function call statement
    printf("this is line 1./n");
    return 0;
}

void message(){
    printf("this line is inside function message./n");
}

/* the order in which the function is called in the main need not be the order in which that is coded*/

/* A function can be called from other function, but a function cannot be defined in another function.
the below code would not get executed*/

#include<stdio.h>
int main(){
    void argentina();{
        printf("welcome to argentina");
    }
}

/* EXAMPLE QUESTION :  In this program, in main( ) we receive the values of a, b and c through the keyboard and then
output the sum of a, b and c. However, the calculation of sum is done in a different function called calsum( ).
*/

#include<stdio.h>
int calsum(int x,int y,int z); // we have to give the datatype of the variable in declaration as well in parameter
int main(){
    int a,b,c,sum;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    printf("Enter value of c: ");
    scanf("%d",&c);

    sum=calsum(a,b,c);
    printf("sum: %d",sum);
    return 0;
}

int calsum(int x,int y,int z){
    int s;
    s=x+y+z;
    return s;
}

// a,b,c are called actual parameter while x,y,z are called formal parameter

/* A function can return only one value at a time. Thus, the
following statements are invalid.
return ( a, b ) ;
return ( x, 12 ) ; 
*/

//Calling conversion
#include<stdio.h>
int main(){
    int a = 1 ;
    printf ( "%d %d %d", a, ++a, a++ );
}

/*This however is not the case. Surprisingly, it outputs 3 3 1. This is because C’s calling convention is from right to left. 
That is, firstly 1 is passed through the expression a++ and then a is incremented to 2. Then result of ++a is passed. 
That is, a is incremented to 3 and then passed. Finally, latest value of a, i.e. 3, is passed. 
Thus in right to left order 1, 3, 3 get passed. Once printf( ) collects them it prints them in the order in which we have asked it
to get them printed (and not the order in which they were passed). Thus 3 3 1 gets printed
*/

 // POINTERS
/*in c,
int i = 3 ;
This declaration tells the C compiler to:
(a) Reserve space in memory to hold the integer value.
(b) Associate the name i with this memory location.
(c) Store the value 3 at this location. 
*/

#include<stdio.h>
int main(){
    int *j;//used to store address of b. we should initialize like *j and not just j. they are called pointer variables
    int b=2;
    int i=5;
    printf("The address of %d is %u\n",i,&i);// address is printed by using %u.
    printf("the value stored in %u is %d\n",&i,*(&i));// * is called pointer operator. it gives the value that is stored in i. 
    
    j=&b;
    printf("the address of %d is%d",b,j);
    return 0;
}

/* pointers are variables that contain addresses, and since addresses are always whole numbers, pointers would always 
contain whole numbers. */

// call by reference eg

#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a=10;
    int b=20;
    printf("the original a: %d,b: %d\n",a,b);
    swap(&a,&b);
    printf("after changing a: %d,b: %d",a,b);
    return 0;
}

void swap(int *x,int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

// mixed calling
#include<stdio.h>

int add(int x, int *y, int *z);  // Function prototype: x is passed by value, y and z by reference

int main(){
    int a, b, c, s;  // Declare integers for a, b, c, and s
    a = 5;
    b = 4;
    c = 9;

    s = add(a, &b, &c);  // Pass a by value, and the addresses of b and c
    printf("Sum: %d\n", s);  // Print the result
    return 0;
}

int add(int x, int *y, int *z){  // x is passed by value, y and z are passed by reference
    int s;
    s = x + *y + *z;  // Dereference y and z to get their values
    return s;  // Return the sum
}

// RECURSION
//A function is called ‘recursive’ if a statement within the body of a function  calls the same function

#include<stdio.h>
int rec(int );
int main(){
    int a,fact;

    printf("enter any number: ");
    scanf("%d",&a);

    fact=rec(a);
    printf("factorial value=%d\n",fact);
    return 0;
}

int rec(int x){
    int f;
    if (x==1){
        return 1;
    }

    else{
        f=x*rec(x-1);
    }
    return(f);
}