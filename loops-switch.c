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
