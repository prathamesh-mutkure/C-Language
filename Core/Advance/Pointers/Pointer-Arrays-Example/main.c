#include <stdio.h>
#include <string.h>

int main() {

    int i;

    char str[] = "A String";        // Declaring a String
    char *p = str;                  // Pointing str to pointer p

    for (i = 0; i < strlen(str); ++i) {

        printf("\nstr[%d] = %c"
               "\t*(p+%d) = %c"
               "\t&str[%d] = %p"
               "\tp+%d = %p\n",
               i, str[i], i, *(p+i), i, &str[i], i, p+i);
    }

    printf("\n-------------------------------------------------------\n");

    long values[] = {15L, 3L, 89L, 19L, 23L, 56L, 12L, 6L, 90L, 8L};
    long *ptr = values;

    for (i = 0; i < sizeof(values)/ sizeof(values[0]); i++)
    {
        printf("Address p+%d (&values[%d]) = %llu"
               "\t|\t*(p+%d) value = %d\n",
               i, i, (unsigned long long)(ptr+i), i, (int)*(ptr+i));
    }

    printf("\n\nType Long occupies: %d\n", (int)(sizeof(long)));

    return 0;
}