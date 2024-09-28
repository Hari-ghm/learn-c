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
    return 0;
}






