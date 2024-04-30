#include<stdio.h>
int main()
{
int cust_id ,age, qty, price;
char cust_type[2], item_id, R, W, S;
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
price=(60*qty)+2.5*qty;
printf("\t\tBill\n\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("+===========================+\n");
printf("Price of Rice/kg = Rs.60\n");
printf("GST = 5%\n");
printf("Final bill is: Rs.%d\n\n", price);
printf("\t\tThank you! Please shop again");

}
else if(item_id=='W')
{
price=(65*qty)+2*qty;
printf("\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("+===========================+\n");
printf("Price of Rice/kg = Rs.65\n");
printf("GST = 5%\n");
printf("Final bill is: Rs.%d\n\n", price);
printf("\t\tThank you! Please shop again");

}
else if(item_id=='S')
{
price=(25*qty)+ 1.5*qty;
printf("\t\tBill\n");
printf("Invoice No:%d\n",&cust_id);
printf("Customer ID:%d",cust_id);
printf("\t\tRegularity: %c",cust_type[2]);
printf("\nAge:%d\n",age);
printf("+===========================+\n");
printf("Price of Rice/kg = Rs.25\n");
printf("GST = 5%\n");
printf("Final bill is: Rs.%d\n\n", price);
printf("\t\tThank you! Please shop again");
}
else
{
printf("Invalid Choice");
}
return 0;
}
