#include<stdio.h>
void main()
{
    int name,name2,surname;
    name=10;
    name2=20;
    printf("value of name:%d\nvalue of name2:%d\n",name,name2);

    surname=name;
    name2=name;
    name=surname;
    printf("%d\n%d\n",name,name2);

}