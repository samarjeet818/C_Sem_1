#include <stdio.h>
int main(){
int a=3;
int *b=&a;
//  printf("%d", *b);
 int **c = &b;
 int ***d=&c;
 printf("%d", c);
 
return 0;
}