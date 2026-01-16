
#include<stdio.h>
int main() {
    int x ,y;
    printf("enter the x-coordinate :");
    scanf("%d",&x);
    printf("enter the y-coordinate :");
    scanf("%d",&y);
    if (x == 0 && y==0){
        printf("the point (%d,%d) lies at origin.\n",x,y);
    }
    else if(x > 0 && y > 0){
        printf("the point(%d,%d) lies at point II.\n",x,y);
    }
    else if (x<0 && y>0){
        printf("the point(%d,%d) lies at point II.\n",x,y);
    }
    else if (x < 0 && y < 0){
        printf("the point(%d,%d) lies at point III.\n",x,y);
    }
    else if(x > 0 && y < 0){
        printf("the point(%d,%d) lies at point IV.\n",x,y);
    }
    else if(x = 0){
        printf("the point(%d,%d) lies at point-y.\n",x,y);
    }
    else if(x = 0){
        printf("the point(%d,%d) lies at point-x.\n",x,y);
    }
    else {
        printf("there no is such point exsit");
    }

    return 0;

}
