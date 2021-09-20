#include<stdio.h>
//จงเขียน factorial

int main(){
    int i,result=1;
    printf("Inpur your number :");
    scanf("%d",&i);

    for(int j=1;j<=i;j++){
        result = result * j;
    }

    printf("%d ! = %d",i,result);


return 0;
}