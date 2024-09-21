//simple if-else statement
#include<stdio.h>
int main(){
    int n;
    printf("enter a no: "); 
    scanf("%d",&n);

    
    if (n%2)
        printf("%d is odd",n);
    
    else 
        printf("%d is even",n); 
    return 0;
}
// condition should always be enclosed within () bracket
// always use double codes in printf and scanf functions
//the if-else block can also be enclosed by a {} brackets

/* Eg Question: in a company, a employee is paid as under :
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. 
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
 If the employee's salary is input through the keyboard write a program to find his gross salary.
 */

#include<stdio.h>
int main(){
    float bas_sal,gross_sal,da,hra;
    printf("enter the basic salary: ");
    scanf("%f",&bas_sal);
    if (bas_sal<1500){
        hra=bas_sal*10/100;
        da=bas_sal*90/100;
    }
    
    else{
        hra=500;
        da=bas_sal*98/100;
    }
    gross_sal=bas_sal+da+hra;
    printf("gross salary is %f",gross_sal);

    return 0;

}

/* 
&&-and
||-or
!.-not
*/

/* Eg question: A company insures its drivers in the following cases:
− If the driver is married.
− If the driver is unmarried, male & above 30 years of age.
− If the driver is unmarried, female & above 25 years of age.
In all other cases the driver is not insured. If the marital status, sex
and age of the driver are the inputs, write a program to determine
whether the driver is to be insured or not. 
*/

#include<stdio.h>
#include<string.h>
int main(){
    char mari_stat[100],sex[100];
    
    int age;
    printf("enter marital status,sex,age: ");
    scanf("%s%s%d",&mari_stat,&sex,&age);

    if (strcmp(mari_stat,"married xs")==0){
        printf("Driver insured");
        }
    else{
        if ((strcmp(sex,"male")==0) && (age>30)){
            printf("Driver insured");
        }

        else if ((strcmp(sex,"female")==0) && (age>25)){
            printf("Driver insured");
        }

        else{
        printf("Driver is not eligible for insurance");
        }

    }

    return 0;
}

/* EXPLANATION
in c, we can only compare 2 charectors i.e single letter with a == sign.
for comparing 2 strings, we cannot use == sign. c-strings are pointers. comparing in c is done by memory location
and not by their contents. so we have to use #include<string.h>.

we are using char sex[]. the brackets are used to specify array of charectors which is a string in c language.

strcmp is the funtion that gives an integer value.

The function returns:
    0 if both strings are equal.
    A negative value if str1 is lexicographically less than str2.
    A positive value if str1 is lexicographically greater than str2

we should always use " ". '' is for charactor and not string.
*/