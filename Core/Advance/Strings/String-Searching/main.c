#include <stdio.h>
#include <string.h>

void chr();
void str();
void tokenizing();

int main() {

    printf("\n-------------------------------------------------------------");


    chr();
    str();
    tokenizing();

    return 0;
}

void chr()
{
    printf("\n\nSUB-CHAR:");

    /// strchr() Function:
    /// It is used to find a sub-char in a string
    /// SYNTAX:
    ///
    /// strchr(source, subs-char);

    /// Returns the address of first matching letter
    /// OR NULL if no match is found

    char str[] = "Let's learn Programming in C";
    char ch = 'P';
    char *pGotChar = NULL;
    pGotChar = strchr(str, ch);

    printf("\n\nThe sub-char is: %s\n", pGotChar);

    printf("\n-------------------------------------------------------------");
}

void str()
{
    printf("\n\nSUB-STRING:");

    /// Same as strchr() Function
    /// But search for Substrings

    char str[] = "I am learning Programming in C";
    char word[] = "learning";
    char *pFound = NULL;
    pFound = strstr(str, word);

    printf("\n\nThe substring found is: %s\n", pFound);

    printf("\n-------------------------------------------------------------");
}

void tokenizing()
{
    printf("\n\nTOKENIZING: \n");

    /// TOKENIZING
    /// It is breaking the sentence into words
    /// A token is a sequence of character within a string seperated by delimiter
    /// like comma, fullstop, hifen
    ///
    /// strtok() Function is used
    /// SYNTAX:
    ///     strtok(str, token);

    char str[] = "Hello-World, I am learning C-Language";
    char ch[2] = "-";
    char *token = NULL;
    token = strtok(str, ch);

    while (token != NULL)
    {
        printf("\n%s", token);

        token = strtok(NULL, ch);
    }


}