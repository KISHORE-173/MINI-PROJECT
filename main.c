/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

struct student

{
    
int rl;

char nm[20];

int m1;

int m2;

int m3;

int t;

float per;
};

int main()

{
    
struct student a;

printf(" Enter RollNo, Name and three sub marks\n");

scanf("%d%s%d%d%d",&a.rl,a.nm,&a.m1,&a.m2,&a.m3);

a.t=a.m1+a.m2+a.m3;

a.per=a.t/3.0;

printf("rollno=%d\n",a.rl);

printf("Name=%s\n",a.nm);

printf("m1=%d\n",a.m1);

printf("m2=%d\n",a.m2);

printf("m3=%d\n",a.m3);

printf("total=%d/300\n",a.t);

printf("per=%f\n",a.per);

return 0;

}
