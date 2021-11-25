#include<stdio.h>
#include<string.h>
#include<unistd.h>

int main()
{
    char *s = "tengo la camisa negra";
    int test = 1;
    int length;

    length = printf("%s", s, test);
    printf("%d", length);   
    return (0);
}