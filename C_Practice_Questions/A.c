#include <stdio.h>
 int main(){

     for(int i=1;i<=7;i++){

         // ################  For Space  ##########################     
                  for (int a=7;a>=i;a--){
                   printf(" ");
                  }
              
              
              
         // ################  For A  ##########################     
                      for(int b=1;b<=2*i-1;b++){
                          if(b==1||b==(2*i-1)||i==4){
                              printf("*");
                          }
                          else{
                              printf(" ");
                          }}
        printf("\n");
     }

    return 0;
 }