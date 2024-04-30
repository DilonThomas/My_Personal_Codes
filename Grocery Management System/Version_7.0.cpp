#include<stdio.h>
int count = 0 ;

int FruitVeg(int d, int e, int billd);
int PulsGran(int f,int  g, int billf);
int Sac_Con(int h, int i, int billh);
int DrinkBev(int j, int k, int billj);
int Snacks(int l, int m, int billl);
void display();
char fill(char iname, char  iquantity,char  itotal, char ibuy);

float total_bill = 0;
//temporary lists
char * item_sub_list[20]={};
int * quantity_sub_list[20]={};
float * total_sub_list[20]={};
int * total_buy[20]={};

//permanent list
char id_list[] = {};
char name_list[]={};
char item_main_list[]={};
int quantity_main_list[]={};
float total_main_list[]={};
int main()
{
char wnt;
           int a, d, e, f, g, h, i, j, k,fh='y',l, m, billd, billf, billh, billj, billl, choice, x, y, z, main=1;
           int age=0;
           int id=0;
           int no=0;
           char T, b,c;
do{
           printf("Hello Customer!");
           printf("\n Given below are the groceries we sell.");
           printf("\n   _____________");
           printf("\n                                       ");
           printf("\n  Items available in the Grocery Store");
           printf("\n  _____________");
           printf("\n                                     ");
           printf("\n  1.|     Fruits and Vegetables       |");
           printf("\n  2.|       Pulses and Grains         |");
           printf("\n  3.|     Sauces and Condiments       |");
           printf("\n  4.|      Drinks and Beverages       |");
           printf("\n  5.|            Snacks               |");
           printf("\n _____________");
           printf("\n");
           printf("\n");
           printf("\nWould you like to see what we currently have in stock?");
           printf("\nIf Yes. Press 0.");
           printf("\n");
           scanf("%d", &a);
           if(a==0){
                      printf("\n                    Items in Stock");
                      printf("\n _____________________");
                      printf("\n");
                      printf("\n  |Apples         |Kiwi        |Bananas      |Watermelon     |");
                      printf("\n        |Carrots        |Beetroot    |Cabbage      |Spinach        |");
                      printf("\n        |Lentils        |Chickpeas   |Gram Beans   |Green Peas     |");
                      printf("\n        |Rice           |Barley      |Wheat        |Oats           |");
                      printf("\n        |Oyster Sauce   |Soy Sauce   |Chlli Sauce  |Taco Sauce     |");
                      printf("\n        |Ketchup        |Mustard     |Mayonnaise   |Honey          |");
                      printf("\n        |Fruit Juice    |Soda        |Coffee       |Tea            |");
                      printf("\n        |Instant Noodles|Cookies     |Potato Chips |Candy          |");
                      printf("\n           _____________________");
                      printf("\n");
                      printf("\n");
           printf("\n" "Please note: Every item is sold in a bag that is pre-packed. For example: 1 bag of apples or 2 bags of rice etc. Quantity may vary.");
           printf("\nWould you like to make a purchase?");
           printf("\nIf Yes. Please enter your details below:");
           printf("\nID: ");
           scanf("%i", &id);
           printf("\nName: ");
           scanf("%s", &b);
           printf("\nAge: ");
           scanf("%i", &age);
           printf("\n");
           printf("\nThank You! Your details have been stored. You may proceed.");
           printf("\n");
           printf("\n");
  while (fh=='y'){
           count = count+1;
  printf("press 'F' to buy fruit and vegetables \n 'P' to buy PulsGran \n 'S' Sauce and condiments \n 'D' Drink and bevrages \n 'SN' snacks");
  printf("\n-->");
  scanf("\n%c",&wnt);
          switch(wnt){
          case 'F': FruitVeg(d, e, billd);
          item_sub_list[count]="Fruits and vegitables";
        break;
        case 'P': PulsGran(f, g, billf);
        item_sub_list[count]="pulse and gram";
        break;
        case 'S': Sac_Con(h, i, billh);
item_sub_list[count]="sauce and condiments";
        break;
        case 'D': DrinkBev(j, k, billj);
        item_sub_list[count]="drink and bevarages";
        break;
        case 'SN': Snacks(l, m, billl);
        item_sub_list[count]="Snacks";
        break;
 }
  printf("press 'y' to continue");
printf("\n-->");
  scanf("\n%c",&fh);
}
         display();
           return 0;
}
else{
item_sub_list[20]={0};
quantity_sub_list[20]={0};
total_sub_list[20]={0};
total_buy[20]={0};
count = 0;
display();
}
} while(main == 1);
}
void display(){
  printf("\nYour total bill is = %f" , total_bill);
           if(total_bill>=1000)
           {
                      printf("\n");
                      printf("\nYou are eligible to apply for a coupon.\n");
           }
           else
           {
                      printf("\n");
                      printf("\nYou are not eligible to apply for a coupon.\n");
           }
}
int FruitVeg(int d,int e, int billd)
{
char *item ="Fruits and Vegetables";
           printf("Each bag of item from 'Fruits and Vegetables' costs Rs.200");
           printf("\nHow many number bags would you like to purchase? ");
           scanf("%d", &e);
           billd = 200 * e;
  total_bill = total_bill + billd;
}
int PulsGran(int f, int g, int billf)
{
char *item ="Pulses and Grains";
           printf("Each bag of item from 'Pulses and Grains' costs Rs.120");
           printf("\nHow many bags would you like to purchase? ");
           scanf("%d", &g);
           billf = 120 * g;
           printf("Your bill for 'Pulses and Grains' = Rs %d" , billf);
           printf("\n");
           printf("\n");
           total_bill = total_bill + billf;
}
int Sac_Con(int h, int i, int billh)
{
char *item = "Sauces and Condiments";
           printf("Each bag of item from 'Sauces and Condiments' costs Rs.150");
           printf("\nHow many bags would you like to purchase? ");
           scanf("%d", &i);
           billh = 150 * i;
           printf("Your bill for 'Sauces and Condiments' = Rs %d" , billh);
           printf("\n");
           printf("\n");
           total_bill = total_bill + billh;
}
int DrinkBev(int j, int k, int billj)
{
char *item = "drink and beverages";
           printf("Each bag of item from 'Drinks and Beverages' costs Rs.70");
           printf("\nHow many bags would you like to purchase? ");
           scanf("%d", &k);
           billj = 70 * k;
           printf("Your bill for 'Drinks and Beverages' = Rs %d" , billj);
           printf("\n");
           printf("\n");
           total_bill = total_bill + billj;
}
int Snacks(int l, int m, int billl)
{
char *item = "snacks";
           printf("\nTo purchase an item from 'Snacks' please press 5. ");
           scanf("%d", &l);
           printf("Each bag of item from 'Snacks' cost Rs.100");
           printf("\nHow many bags would you like to purchase? ");
           scanf("%d", &m);
           billl = 100 * m;
           printf("Your bill for 'Snacks' = Rs %d" , billl);
           printf("\n");
           printf("\n");
          total_bill = total_bill + billl;
}
