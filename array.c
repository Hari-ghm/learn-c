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

    printf("%d",marks[2]);//printing element at index 2.
 }

 /* ARRAY INITIALISATION

 int num[6] = { 2, 4, 12, 5, 45, 5 } ;
int n[] = { 2, 4, 12, 5, 45, 5 } ;
float press[] = { 12.3, 34.2 -23.4, -11.3 } ; 

If the array is initialised where it is declared, mentioning the dimension of the array is optional as in the 2nd example above. 
*/

// POINTER AND ARRAYS
#include<stdio.h>
int main()
{
 int i = 3, *x ;
 float j = 1.5, *y ;
 char k = 'c', *z ;
 printf ( "\nValue of i = %d", i ) ;
 printf ( "\nValue of j = %f", j ) ;
 printf ( "\nValue of k = %c", k ) ;
 x = &i ;
 y = &j ;
 z = &k ;
 printf ( "\nOriginal address in x = %u", x ) ;
 printf ( "\nOriginal address in y = %u", y ) ;
 printf ( "\nOriginal address in z = %u", z ) ;
 x++ ;
 y++ ;
 z++ ;
 printf ( "\nNew address in x = %u", x ) ;
 printf ( "\nNew address in y = %u", y ) ;
 printf ( "\nNew address in z = %u", z ) ;
} 

/* if you see the above outputs, when the integer pointer x is incremented, it points to an address two locations after 
the current location, since an int is always 4 bytes long. Similarly, y points to an address 4 locations after the 
current location and z points 1 location after the current location. This is a very important result
and can be effectively used while passing the entire array to a function*/

#include<stdio.h>
int main(){
    int *i,*j;
    int arr[]={1,5,16,38};
    i=&arr[1];
    j=&arr[3];
    printf("the difference is between address: %d \nthe difference between values: %d",j-i,*j-*i);
}

// comparision between 2 pointer variable
#include<stdio.h>
int main(){
    int *i,*j;
    int arr[]={1,5,16,5};
    i=&arr[1];
    j=&arr[3];
    if (*i==*j)
      printf("Equal vlaue");
    else
      printf("not equal value");
    
    if (i==j)
      printf("Equal address");
    else
      printf("not equal address");
} // gives output as equal as *i,*j are values and i,j are address


#include<stdio.h>
int main( )
{
 int arr[ ] = { 10, 20, 36, 72, 45, 36 } ;
 int *j, *k ;
 j = &arr [ 4 ] ;
 k = ( arr + 4 ) ;// k=arr gives address of 1st element. so we are adding 4.
 printf("%d",k);
 if ( j == k )
 printf ( "The two pointers point to the same location" ) ;
 else
 printf ( "The two pointers do not point to the same location" ) ;
} 

// passing entire array to a function

/* Demonstration of passing an entire array to a function */
#include<stdio.h>
void display(int *,int );
int main()
{
 int num[ ] = { 24, 34, 12, 44, 56, 17 } ;
 display ( &num[0], 6 ) ;
}
void display ( int *j, int n ){
    int i ;
    for ( i = 0 ; i <= n - 1 ; i++ )
    {
    printf ( "\nelement = %d", *j ) ;
    j++ ; /* increment pointer to point to next element. so just we we give give num[0] during calling, all the elements can be printed*/
    }
}


