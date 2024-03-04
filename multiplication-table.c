#include<stdio.h>

int main(){
    int a,b,c;

    printf("input the value of a : ");
    scanf("%d",&a);

    printf("input the value of b : " );
    scanf("%d",&b);

    for(a;a<=b;a++){
        for (c=1;c<=10;c++){
            printf("%d*%d=%d\n",a,c,a*c);
        }
    }

    return 0;
}
