#include<stdio.h>
int main()
{
int cust_id ,age, qty;
char cust_type[2], item_id, R, W, S;
float price, disc, finalprice;
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
if(cust_type[2]=='R')
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
printf("Price of Wheat/kg = Rs.65");
printf("GST = 5%");
if(qty<10)
{
printf("Discount=10%\n");
}
   if(qty>=10)
   {
    printf("Discount=15%\n");
}
printf("Final Bill is: Rs.%f", finalprice);
printf("Thank you for being a valuable customer!");
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
printf("Price of Wheat/kg = Rs.65");
printf("GST = 5%");
if(qty>=10)
   {
    printf("Discount=5%\n");
}
printf("Final Bill is: Rs.%f", price);
printf("Thank you for shopping with us!");
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
printf("Price of Sugar/kg = Rs.25");
printf("GST = 5%");
if(qty>=10)
   {
    printf("Discount=15%\n");
}
if(qty<10)
{
printf("Discount=10%\n");
}
printf("Final Bill is: Rs.%f", finalprice);
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
printf("Price of Sugar/kg = Rs.25");
printf("GST = 5%");
if(qty>=10)
   {
    printf("Discount=5%\n");
}
printf("Final Bill is: Rs.%f", price);
}
}
else
{
printf("Invalid Choice");
}
return 0;
}
