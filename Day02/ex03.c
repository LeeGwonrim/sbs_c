#include<stdio.h>
int main(void){
    //실수형 
    float ft= 1.23456489;
    double db= 10.123456789;
    printf ("float : %.5f\n",ft);
    printf ("double : %.14f\n",db);
    //float형은 소수점아래 7자리 까지 
    //double 형은 소수점아래 15자리까지 정확히 나타낼수 있다. 
    return 0;
}