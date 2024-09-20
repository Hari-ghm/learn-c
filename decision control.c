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



