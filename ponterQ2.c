#include<Stdio.h>
int main (){
    int num;
    int *ptr;
    printf("Enter the number");
    scanf("%d",&num);
    ptr = &num;
    printf("Address of th e number:%p",ptr);
return 0 ;
}
