#include <stdio.h>
int main(){
int n;
int reminder=0;
int sum=0;
scanf("%d",&n);
    while(n!=0){

        reminder= n%10;
        sum+=reminder;
        n/=10;
    }

printf("%d",sum);
return 0;
}