#include<stdio.h>
int main()
{
int cust_id ,age, qty,choice;
char cust_type[2], item_id, R, W, S;
float price, disc, finalprice;
printf("\t\tWelcome to Daily Grocery Store!\n\n");
printf("Choose an action you would like to perform:\n");
printf("1. Customer Details\n2. Discount Calculation\n3. Bill Generation\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n\n\t\tWelcome to Daily Grocery Store\n\n");
printf("Enter the Customer ID No.\n");
scanf("%d",&cust_id);
printf("Enter the Customer type (R or T):\n");
scanf("%s",&cust_type[2]);
printf("Enter the age of the customer: \n");
scanf("%d",&age);
printf("\t\tCustomer Details\n");
printf("Customer ID:%d\n",cust_id);
printf("Customer type:%c\n",cust_type[2]);
printf("Age:%d\n",age);
printf("Thank You!");
break;

   case 2:
printf("\n\n\t\tDiscount Calculations\n");
printf("For Regular Customer:\n");
printf("10 Percent Discount from total price!!\n");
printf("Additional Discount:\n");
printf("5 Percent discount if order placed is above 10kg");
break;

case 3:
printf("\n\n\t\tBill Generation\n");
printf("\t\tWelcome to Daily Grocery Store\n\n");
printf("Enter the Customer ID No.\n");
scanf("%d",&cust_id);
printf("Enter the Customer type (R or T):\n");
scanf("%s",&cust_type[2]);
printf("Enter the age of the customer: \n");
scanf("%d",&age);
printf("Item IDs: \n1. R-Rice\n2. W-Wheat\n3. S-Sugar\nEnter item bought:\n");
scanf("%s",&item_id);
printf("Enter the amount bought (in kg):\n");
scanf("%d",&qty);
if(item_id=='R')
{
if(cust_type[2]=='R')
{
price=(60*qty)+2.5*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price-(0.15);
finalprice=disc;
}
printf("\t\tBill\n\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("+===========================+\n");
printf("Price of Rice/kg = Rs.60\n");
printf("GST = 5%\n");
if(qty<10)
{
printf("Discount=10% \n");
}
   if(qty>=10)
   {
    printf("Discount=15%\n");
}
printf("Final bill is: Rs.%f\n\n", finalprice);
printf("\t\tThank you for being a valuable customer!");
}
else if(cust_type[2]=='T')
{
price=(60*qty)+2.5*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\t\tBill\n\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("+===========================+\n");
printf("Price of Rice/kg = Rs.60\n");
printf("GST = 5%\n");
if(qty>=10)
{
printf("Discount=5%\n");
}
printf("Final bill is: Rs.%f\n\n", price);
printf("\t\tThank you for shopping with us!");
}
}
else if(item_id=='W')
{
if(cust_type[5]=='R')
{
price=(65*qty)+2*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price=(0.15);
finalprice=disc;
}
printf("\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("\nPrice of Wheat/kg = Rs.65");
printf("\nGST = 5%");
if(qty<10)
{
printf("\nDiscount=10%\n");
}
   if(qty>=10)
   {
    printf("\nDiscount=15%\n");
}
printf("\nFinal Bill is: Rs.%f", finalprice);
printf("\nThank you for being a valuable customer!");
}
else if(cust_type[2]=='T')
{
price=(65*qty)+2*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("\nPrice of Wheat/kg = Rs.65");
printf("\nGST = 5%");
if(qty>=10)
   {
    printf("\nDiscount=5%\n");
}
printf("\nFinal Bill is: Rs.%f", price);
printf("\nThank you for shopping with us!");
}
}
else if(item_id=='S')
{
if(cust_type[2]=='R')
{
price=(25*qty)+ 1.5*qty;
disc=price-(0.1);
finalprice=disc;
if(qty>=10)
{
disc=price-(0.15);
finalprice=disc;
}
printf("\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("\nPrice of Sugar/kg = Rs.25");
printf("\nGST = 5%");
if(qty>=10)
   {
    printf("\nDiscount=15%\n");
}
if(qty<10)
{
printf("\nDiscount=10%\n");
}
printf("\nFinal Bill is: Rs.%f", finalprice);
}
else if(cust_type[2]=='T')
{
price=(25*qty)+ 1.5*qty;
if(qty>=10)
{
disc=price-(0.05);
price=disc;
}
printf("\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("\nPrice of Sugar/kg = Rs.25");
printf("\nGST = 5%");
if(qty>=10)
   {
    printf("\nDiscount=5%\n");
}
printf("\nFinal Bill is: Rs.%f", price);
}
}
else
{
printf("\nInvalid Choice");
}
break;
}
return 0;
}
