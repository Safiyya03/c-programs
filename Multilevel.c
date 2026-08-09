#include<stdio.h>
#include<conio.h>

void main(){
    int s=2,*r=&s,**q=&r,***p=&q;
    clrscr();

    printf("%d",p[0][0][0]);

    getch();
}
