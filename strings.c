/* A string constant is a one-dimensional array of characters terminated by a null ( ‘\0’ ). For example,
char name[ ] = { 'H', 'A', 'E', 'S', 'L', 'E', 'R', '\0' } ; 
a string not terminated by '\0' is not really a string, it is just collection of documents.
but in c, even if \0 is not gn, it automatically inserts it.
*/

// printing of strings

#include<stdio.h>
int main(){
    char name[]="krishna";
    int i=0;

    while (i<=7){ // for condition, we can also use (name[i]!='\0'). this doesnt rely upo
        printf("%c",name[i]);
        i++;
    }
    return 0;
}

// printing strings using pointers
#include<stdio.h>
int main(){
    char name[]="krishna";
    char *var;
    var=name;

    while (*var!='\0'){ // for condition, we can also use (name[i]!='\0'). this doesnt rely upo
        printf("%c",*var);
        var++;
    }
    
    printf("\n%s",name); //%s is used. even in scanf.
    return 0;
}

// inputing multiword string 

// scanf() is not suitable for inputing multiword string(eg: "happy birthday"). so we use get() and its counterpart puts.
#include<stdio.h>
int main(){
    char name[25];
    printf("enter ur name: ");
    gets(name);// can get multi word string
    puts("hello!");// puts display only 1 at a time
    puts(name);
    return 0;
}

/*
char name[25] ;
printf ( "Enter your full name " ) ;
scanf ( "%[^\n]s", name ) ; 

in above code, scanf() accept multi-word strings by writing it in this manner.
*/

#include<stdio.h>
int main(){
    char str1[]="hello";
    char str2[10];
    char *q="morning";
    char *p;
    
    str2[10]=str1; // error
    p=q; // works
    p="it works";// works

    return 0;
}

// string functions

// strlen()
#include<stdio.h>
#include<string.h>
int main(){
    char str1[]="hello";
    int len_str1;
    len_str1=strlen(str1); // doesn't count '\0'
    printf("length of %s is %d",str1,len_str1);
}

// strcpy()
/* This function copies the contents of one string into another.
The base addresses of the source and target strings should be supplied to this function. */

#include<stdio.h>
#include<string.h>
int main(){
    char source[]="checking";
    char target[24];
    strcpy(target,source);
    printf("source string: %s\n",source);
    printf("target string: %s",target);
    return 0;
}

/*
a string gets copied into another, piece-meal, character by character. . It is our responsibility to
see to it that the target string’s dimension is big enough to hold the string being copied into it
*/

// strcat() - concatenate 2 strings
#include<stdio.h>
#include<string.h>
int main(){
    char source[]="big ";
    char target[24]=" dawgs";
    strcat(source,target);
    printf("target string: %s",source);
    return 0;
}

// strcmp()
#include<stdio.h>
#include<string.h>
int main( )
{
 char string1[ ] = "Jerry" ;
 char string2[ ] = "Ferry" ;
 int i, j, k ;
 i = strcmp ( string1, "Jerry" ) ;
 j = strcmp ( string1, string2 ) ;
 k = strcmp ( string1, "Jerry boy" ) ;
 printf ( "\n%d %d %d", i, j, k ) ;
} 




