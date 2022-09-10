#include <Stdio.h>

typedef struct Invoice{
    char num[30];
    char description[50];
    int quantity;
    float price;
} invoice;

void print_invoice(invoice i1,float);

void main()
{
    invoice i1;

    float inv_amount;

    strcpy(i1.num,"1001");
    strcpy(i1.description,"Club Sandwich");
    i1.quantity = 5;
    i1.price = 9.99;

    inv_amount = i1.quantity * i1.price;

    if (i1.quantity <= 0)
    {
        i1.quantity = 0;
    }

    if (i1.price <= 0)
    {
        i1.price = 0;
    }

    print_invoice(i1,inv_amount);
}

void print_invoice(invoice i1,float inv_amount)
{
    printf("Item no: %s\n",i1.num);
    printf("Description: %s\n",i1.description);
    printf("Quantity: %d\n",i1.quantity);
    printf("Price: %g\n",i1.price);
    printf("Total Amount: %g\n",inv_amount);
}
