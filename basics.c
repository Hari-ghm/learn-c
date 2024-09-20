// Hello World in c
#include<stdio.h>
int main(){
    printf("Hello World");
    return 0;
}
/*
EXPLANATION
every c statment should enf with a ; . ";" is known as a statement terminator.
main() is a function which returns a integer(0 in this case). therefore we mention int before main.
void() functions do not return anything.
To use printf, we have to use #include<stdio.h>
#include is a pre-processor directive.
 */

/*
printf() function
%f for printing real values
%d for printing integer values
%c for printing character values*/

#include<stdio.h>
int main(){
    printf("%c is %dst letter in the alphabet",'a',1);
    //output: a is 1st letter in the alphabet

    printf("%c is %dst letter in the alphabet",'abcd',1);
    //output: d is 1st letter in the alphabet
    // if a string is gn, %c is printing only the last letter(i.e chr)//

    printf("%c is %dst letter in the alphabet",'a','1');
    //output: a is 49st letter in the alphabet
    //if inplace of integer, chr(1) is gn, it is printing the ascii value//
    return 0;
}

#include<stdio.h>
int main(){
    int c=5;
    int d=7;
    int a=4;
    int b=2;
    printf("%d%d%d%d",3,3+2,c,a+b*c-d);
    return 0;
}

/* 
Receiving input
scanf()- is used to receive inputs from user
*/

#include<stdio.h>
int main(){
    int p,n;
    float r,si;
    printf("Enter the values of p,n,r");
    scanf("%d%d%f",&p,&n,&r); //& is called Address of operator and is a must.
    si=p*n*r/100;
    printf("simple interest is:%f",si);
    return 0;
}
// instead of pressing enter after entering each value, u can give space or use a tab and finnaly press enter

//note: in C, exp symbol ** is invalid. if we want power we have to use pow from math module
#include<math.h>
#include<stdio.h>
int main(){
    int a;
    a=pow(3,2);
    printf("%d",a);
}
