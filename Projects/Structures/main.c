#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item
{
    char * itemName;
    int qty;
    float price;
    float amount;
};

void readItem(struct item *mItem);
void printItem(struct item *mItem);

int main() {

    struct item i1;

    readItem(&i1);
    printItem(&i1);

    return 0;
}

void readItem(struct item *mItem)
{
    char temp[50];
    printf("\nEnter Item Name: ");
    fgets(temp, 49, stdin);

    mItem->itemName = (char *) calloc(strlen(temp)+1, sizeof(char));
    strcpy(mItem->itemName, temp);

    printf("\nEnter the quantity: ");
    scanf("%d", &mItem->qty);

    printf("\nEnter the price: ");
    scanf("%f", &mItem->price);

    mItem->amount = (mItem->price) * (mItem->qty);
}

void printItem(struct item *mItem)
{
    printf("\nItem Name: %s", mItem->itemName);
    printf("Item Quantity: %d", mItem->qty);
    printf("\nItem Price: %.2f", mItem->price);
    printf("\nItem Amount: %.2f\n", mItem->amount);
}