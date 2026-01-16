
#include<stdio.h>
int main (){
    int a[5];
    int i ;
    int *ptr = a;
    printf("eneter the 5 Number");
    for(i = 0 ; i <5 ; i = i +1 ){
        scanf("%d" , &ptr + 1);

    }
    printf("array number are");
    for(i= 0; i<5 ; i = i+1){
        printf("%d ",*(ptr + i));
    }
return 0;
}
