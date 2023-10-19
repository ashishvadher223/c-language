#include<stdio.h>
void main()
{
    int joy,joy2,happy;
    joy=50;
    joy2=60;
    printf(" value of joy:%d\n value of joy2:%d\n",joy,joy2);

    
    happy=joy;
   joy=joy2;
   joy2=happy;
   printf("value of joy:%d\nvalue of joy2:%d\n",joy,joy2);


}