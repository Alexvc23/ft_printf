#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
    int length;
    float   test2 = 92384.8;

    length = printf("%d\n",  test2);
    printf("%d", length);   
    return (0);
}