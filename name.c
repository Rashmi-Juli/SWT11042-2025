#include <stdio.h>
int main(){
   char firstname[50];
   char lastname[50];
   int birthYear;

    printf("what is your firstname?");
    scanf("%s",firstname);
    printf("what is your lastname?");
    scanf("%s",lastname);
    printf("what is your birth year?");
    scanf("%d",&birthYear);
    printf("%s %s was born in %d\n",firstname,lastname,birthYear);
    return 0;
    }
