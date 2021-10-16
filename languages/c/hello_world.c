#include<stdio.h>
#include<string.h>
#include<conio.h>

void fun1()
{
    char a[10] = "world";
    printf("Hello %s \n",a);
}

//or

void fun2()
{
    char a[10] = "Hello ", b[10] = "world";
    strcat(a,b);
    printf("%s",a);
}

void main()
{
    fun1();
    fun2();
    getch();
}
