#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Family
{
    char name[20];
    int age;
    char mother[20];
    char father[20];
};

bool sibilings(struct Family*, struct Family*);

int main() {

    struct Family mem1 = {"Sai", 3, "Priti", "Ravi"};
    struct Family mem2 = {"Kavya", 6, "Priti", "Ravi"};

    printf("\n%s and %s are %s siblings\n", mem1.name, mem1.name, sibilings(&mem1, &mem2)?"\b":"not");

    return 0;
}

bool sibilings(struct Family *mem1, struct Family *mem2)
{
    if(strcmp(mem1->mother, mem2->mother)==0)
        return true;
    else
        return false;
}