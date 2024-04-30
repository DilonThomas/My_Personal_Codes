#include<stdio.h>
int main()
{
int cust_id ,age, qty,choice,amt_index,grocery_id[amt_index], item_search,random=0;
char cust_type[2], item_id, R, W, S, item_indexname[10];
float price, disc, finalprice;

printf("\t\t\tWelcome to the Daily Grocery Store\n\n");

printf("\n\t\tItem Details\n");
do
{
printf("Choose the action you would like to perform:\n");
printf("1. Index Item\n2. Index and Search Item\n3. Exit\n\nEnter your choice: ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the amount of items to be indexed: ");
scanf("%d", &amt_index);
printf("\nEnter the details of the item to be indexed\n");
for(int i=0;i<amt_index;i++)
{
printf("Name: ");
scanf("%s",&item_indexname[10]);
printf("\nGrocery ID: ");
scanf("%d",&grocery_id[amt_index]);
printf("\nQuantity(in kg): ");
scanf("%d",&qty);
printf("\nPrice(per kg): ");
scanf("%d",&price);
printf("\nItem indexed\n");
printf("+==========================+\n\n");
}
break;

case 2:
printf("Enter the amount of items to be indexed: ");
scanf("%d", &amt_index);
printf("\nEnter the details of the item to be indexed\n");
for(int i=0;i<amt_index;i++)
{
printf("Name: ");
scanf("%s",&item_indexname[10]);
printf("\nGrocery ID: ");
scanf("%d",&grocery_id[amt_index]);
printf("\nQuantity(in kg): ");
scanf("%d",&qty);
printf("\nPrice(per kg): ");
scanf("%d",&price);
printf("\nItem indexed\n");
printf("+==========================+\n");
}
printf("Enter the ID of the item you would like to search for: ");
scanf("%d",&item_search);
if(item_search==grocery_id[amt_index])
{
printf("The item ID %d can be found in aisle 1-5\n", grocery_id[amt_index]);
printf("+=============================================+\n");
}
else
{
printf("Wrong ID\n");
printf("+=============================================+\n");
}
break;

case 3:
printf("Exited");
return 0;
break;

default:
printf("Invalid Selection");


}

}
while(random==0);


return 0;

}
