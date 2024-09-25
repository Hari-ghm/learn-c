// preproccesor directives begin with a # symbol

// MACRO PREPROCESSOR EXPANSION 
#define PI 3.1415 // we assigning pi=3.14 so we need not assign it everytime in each functio we are using it
main( )
{
 float r = 6.25 ;
 float area ;
 area = PI * r * r ;
 printf ( "\nArea of circle = %f", area ) ;
}

/* 
When it sees the #define directive, it goes through the entire program in search of the macro templates; 
wherever it finds one, it replaces the macro template with the appropriate macro expansion. 
Only after this procedure has been completed is the program handed over to the compiler.
In C programming it is customary to use capital letters for macro template. 
*/

/* eg of some macro expansion
1. #define AND &&
2. #define ARRANGE(a>23 AND b>3) 

macros with argument
1. #define AREA(x)(3.14*x*x). there should not be any space between AREA and x.
*/

// The entire expansion should be enclosed
#include<stdio.h>
#define SQUARE(n) (n*n) //enclosed with bracket
int main(){
    int n=4;
    int s;
    s=64/SQUARE(4);
    printf("%d\n",s);

}
// the output the above code is 4

#include<stdio.h>
#define SQUARE(n) n * n
int main()
{
 int j ;
 j = 64 / SQUARE ( 4 ) ;
 printf ( "j = %d", j ) ;
} 
// the output the above code is 64. the copiler will take as 64/4*4.

