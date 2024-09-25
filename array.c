/*all elements of any given array must be of the same type. i.e. we cannot have an array of 10 numbers,
 of which 5 are ints and 5 are floats. */

 #include<stdio.h>
 int main(){
    int num[15];//array declaration. Before using an array its type and dimension must be declared. 
    int i=0;
    for (i=0;i<=14;i++){
        num[i]=i;
    }
    
    for (i=0;i<=14;i++){
        printf("%d ",num[i]);
    }
 }

 // inputing to some array
 #include<stdio.h>
 int main(){
    int marks[3];
    int i=1;
    for (i=1;i<=3;i++){
        printf("Enter mark %d: ",i);
        scanf("%d",&marks[i]);
    }
 }

