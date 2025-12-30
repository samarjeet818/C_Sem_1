#include <stdio.h>
int main(){
int n;
int c=1;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    c*=i;
    printf("%d\n",c);
}
return 0;
}