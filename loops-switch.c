/* program to print first 10 natural nos. using while loop*/
#include<stdio.h>
int main(){
    int i=1;
    while (i<=10){ // in condition, we can give (i++<=10) provided that we initialize i=0
        printf("%d ",i);
        i+=1; //instead of i+=1, we can use i++
    }
    return 0;
}

/* post incrementation  and pre incrementation 
 ++i >10 means before comparing i with 10, i is incremented by 1
 i++ >10 means incrementation of i takes place after it is compared with 10*/

/* program to print first 10 natural nos. using for loop*/
#include<stdio.h>
int main(){
    int i;
   for (i = 1; i < 11; i++)
   {
     printf("%d ",i);
   }
   
    return 0;
}

/* even if incrementation not done in argument, semi-colon is a must.
we we dont want 1st argument to be i=1, we can initialse int i=1 and code as (;i<11;i++)
note: before i<11 also semi-colon is must 
*/

//do-while statements
#include<stdio.h>
int main(){
    int i=0;
    do{
        if (i==0){
            printf("this is the compulsory statement\n");
            i++;
        }

        else{
            printf("i=%d. this line terminated before i=5\n",i);
            i++;
        }

    }while (i<5);
    
}

// switch-case controll structure

#include<stdio.h>
int main( )
{
 int i = 2 ; 
 switch ( i ) //arg must be only integer or expresssion resulting in integer.
    {
        printf("hello\n"); // this wont be executed since it is not there in case statement
        case 1 :
        printf ( "I am in case 1 \n" ) ;
        case 2 :
        printf ( "I am in case 2 \n" ) ;
        case 3 :
        printf ( "I am in case 3 \n" ) ;
        default :
        printf ( "I am in default \n" ) ; // not a compulsory case
    }
} 

/* 
if one case is satisfied, it subsequently execute the remaining cases.(break to stop).

if instead of int 5, char 'd' is given he ascii value of d is considered(similar for letters in those cases).

every case must be unique

all the statement inside switch must be under a case. if not, it wont throw error but will not execute that line
*/

#include<stdio.h>
int main(){
 char x;
 printf("Enter a or b (case insensitive): ");
 scanf("%c",&x);
 switch (x){
        case 'a' : //since we dont know what uder input, we keep case 'a' empty. if its true it execute case 'A' and breaks.
        case 'A':
           printf ( "I am letter a\n" );
           break;
        case 'b':
        case 'B':
          printf ( "I am letter a\n" );
          break;
    }
}

// goto keyword

#include<stdio.h>
#include<stdlib.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if (x>5){
        goto sos;
    }
    else{
        printf("This is executed by else part");
        exit(1); //this is must. 
    }

    sos:
      printf("This is executed by goto part");
}