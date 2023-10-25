#include<stdio.h>
int sum(int a,int b){
    int sum=a+b;
    return sum;
}

int main() {
     printf("%d\n",sum(10,20));
     printf("%d\n",sum(100,20));
     printf("%d\n",sum(1000,20));
return 0;
}