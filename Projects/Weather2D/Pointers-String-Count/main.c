#include <stdio.h>

int strCount(const char*);

int main() {

    char str[] = "Hii! This is a string";

    printf("The length is: %d\n", strCount(str));
    printf("The length is: %d\n", strCount("Hello There!"));
    printf("The length is: %d\n", strCount("Prathamesh Mutkure"));


    return 0;
}

int strCount(const char *str)
{
    int len;

    const char *lastAddress = str;

    while (*lastAddress)
    {
        ++lastAddress;
    }

    len = lastAddress - str;

    return len;
}