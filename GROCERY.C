#include<stdio.h>
#include<conio.h>

int a,b,billnumber,whereTo;
char s1[13];

struct fruits
{
 int muskmelon;
 int musamount;

 int apple;
 int appamount;

 int mango;
 int manamount;

 int watermelon;
 int watamount;

 int banana;
 int banamount;

 int papaya;
 int papamount;

 int apricot;
 int apramount;

 int guava;
 int guaamount;

 int strawberry;
 int stramount;

 int cherry;
 int cheamount;

 int lichi;
 int licamount;

 int coconut;
 int cocamount;

 int grapes;
 int graamount;

 int rasberry;
 int rasamount;

 int pineapple;
 int pinamount;

 int kiwi;
 int kiwamount;

 int jackfruit;
 int jacamount;

 int dragonfruit;
 int draamount;

 int blueberry;
 int bluamount;

 int amount;
};
struct fruits f[50];


struct vegetables
{
 int tomato;
 int tomamount;

 int ladyfinger;
 int ladamount;

 int cucumber;
 int cucamount;

 int peas;
 int peaamount;

 int cauliflower;
 int cauamount;

 int eggplant;
 int eggamount;

 int potato;
 int potamount;

 int onion;
 int oniamount;

 int bittergaurd;
 int bitamount;

 int beans;
 int beaamount;

 int pumpkin;
 int pumamount;

 int spinach;
 int spiamount;

 int ginger;
 int ginamount;

 int capsicum;
 int capamount;

 int garlic;
 int garamount;

 int mushroom;
 int mushamount;

 int cabbage;
 int cabamount;

 int gaurd;
 int gauamount;

 int orange;
 int oraamount;

 int corn;
 int coramount;

 int amount;
};
struct vegetables v[80];


struct total
{
 int tbill;
 int tcash;
};
struct total t;


struct info
{
 char name[20];
 char phone[11];
 int bill_no;
 int tamount;
};
struct info i[80];


void main()
{
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("1.Buy Some Products\n");
 printf("2.See The Menu.\n");
 printf("3.Check Your Bills.\n");
 printf("4.Restricted Area.\n");
 printf("5.Exit The Program.\n\n");

 printf("What Do You Want To Do?\n");
 scanf("%d",&whereTo);

 switch(whereTo)
 {

  case 1:
  buying_preference();
  break;

  case 2:
  menu_preference();
  break;

  case 3:
  check_bill();
  break;

  case 4:
  restrict();
  break;

  case 5:
  bye();
  break;

  default:
  main();
  break;
  }
}




menuf()
{
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n");

 printf("\n---------------\n");
 printf("Fruits Section.\n");

 printf("---------------------------------\n");
 printf("| Item Code | Item Name  | Cost |\n");
 printf("---------------------------------\n");

 printf("     01       Banana        12       \n");

 printf("     02       Apple         10       \n");

 printf("     03       Mango         10       \n");

 printf("     04       MuskMelon     20       \n");

 printf("     05       WaterMelon    30       \n");

 printf("     06       Papaya        40       \n");

 printf("     07       Apricot       30       \n");

 printf("     08       Rasberry      05       \n");

 printf("     09       Guava         10       \n");

 printf("     10       Lichi         02       \n");

 printf("     11       Grapes        02       \n");

 printf("     12       StrawBerry    04       \n");

 printf("     13       Cherry        02       \n");

 printf("     14       Coconut       30       \n");

 printf("     15       PineApple     10       \n");

 printf("     16       Kiwi          05       \n");

 printf("     17       JackFruit     10       \n");

 printf("     18       DragonFruit   15       \n");

 printf("     19       Blueberry     02       \n");

 printf("Press Enter To Continue.");
 getch();

main();

}


menuv()
{

 clrscr();
 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n");

 printf("\n---------------\n");
 printf("Vegetables Section.\n");

 printf("--------------------------------\n");
 printf("| Item Code | Item Name | Cost |\n");
 printf("--------------------------------\n");

 printf("     01       Tomato       03       \n");

 printf("     02       Ladyfinger   01       \n");

 printf("     03       Cucmuber     05       \n");

 printf("     04       Peas         0.5      \n");

 printf("     05       CauliFlower  30       \n");

 printf("     06       Eggplant     10       \n");

 printf("     07       Potato       06       \n");

 printf("     08       Onion        04       \n");

 printf("     09       BitterGaurd  02       \n");

 printf("     10       Beans        01       \n");

 printf("     11       Pumpkin      15       \n");

 printf("     12       Spinach      04       \n");

 printf("     13       Ginger       02       \n");

 printf("     14       Capsicum     03       \n");

 printf("     15       Garlic       10       \n");

 printf("     16       Mushroom     05       \n");

 printf("     17       Cabbage      15       \n");

 printf("     18       Gaurd        15       \n");

 printf("     19       Orange       05       \n");

 printf("     20       Corn         10       \n");

 printf("Press Enter To Continue.");
 getch();

 main();

}

buying_vegetables()
{
 clrscr();

 billnumber++;

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 do{

 asking_items();

 if(strcmp(s1,"tomato")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&v[billnumber].tomato);
 v[billnumber].amount += v[billnumber].tomato;
 v[billnumber].tomamount = v[billnumber].tomato*3;
 i[billnumber].tamount += v[billnumber].tomamount;
 t.tcash += v[billnumber].tomamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    01     |  Tomato     |  12  |    %d    |   %d   |\n",v[billnumber].tomato,v[billnumber].tomamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"ladyfinger")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].ladyfinger);
 v[billnumber].amount+=v[billnumber].ladyfinger;
 v[billnumber].ladamount=v[billnumber].ladyfinger*1;
 i[billnumber].tamount+=v[billnumber].ladamount;
 t.tcash += v[billnumber].ladamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    02     |  Ladyfinger |  10  |    %d    |   %d   |\n",v[billnumber].ladyfinger,v[billnumber].ladamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"cucumber")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].cucumber);
 v[billnumber].amount+=v[billnumber].cucumber;
 v[billnumber].cucamount=v[billnumber].cucumber*5;
 i[billnumber].tamount+=v[billnumber].cucamount;
 t.tcash += v[billnumber].cucamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    03     |  Cucumber   |  10  |    %d    |   %d   |\n",v[billnumber].cucumber,v[billnumber].cucamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"peas")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].peas);
 v[billnumber].amount+=v[billnumber].peas;
 v[billnumber].peaamount=v[billnumber].peas*1;
 i[billnumber].tamount+=v[billnumber].peaamount;
 t.tcash += v[billnumber].peaamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    04     |  Peas       |  20  |    %d    |   %d   |\n",v[billnumber].peas,v[billnumber].peaamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"cauliflower")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].cauliflower);
 v[billnumber].amount+=v[billnumber].cauliflower;
 v[billnumber].cauamount=v[billnumber].cauliflower*30;
 i[billnumber].tamount+=v[billnumber].cauamount;
 t.tcash += v[billnumber].cauamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |   Cost  |  Quantity  |  Amount  |\n");
 printf("-------------------------------------------------------------\n");
 printf("|    05     |  Cauliflower|    30   |     %d     |    %d    |\n",v[billnumber].cauliflower,v[billnumber].cauamount);
 printf("-------------------------------------------------------------\n");

 }else if(strcmp(s1,"eggplant")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].eggplant);
 v[billnumber].amount+=v[billnumber].eggplant;
 v[billnumber].eggamount=v[billnumber].eggplant*10;
 i[billnumber].tamount+=v[billnumber].eggamount;
 t.tcash += v[billnumber].eggamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    06     |  Eggplant   |   10   |     %d     |    %d    |\n",v[billnumber].eggplant,v[billnumber].eggamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"potato")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].potato);
 v[billnumber].amount+=v[billnumber].potato;
 v[billnumber].potamount=v[billnumber].potato*6;
 i[billnumber].tamount+=v[billnumber].potamount;
 t.tcash += v[billnumber].potamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    07     |  Potato     |   06   |     %d     |    %d    |\n",v[billnumber].potato,v[billnumber].potamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"onion")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].onion);
 v[billnumber].amount+=v[billnumber].onion;
 v[billnumber].oniamount=v[billnumber].onion*4;
 i[billnumber].tamount+=v[billnumber].oniamount;
 t.tcash += v[billnumber].oniamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    08     |  Onion      |   04   |     %d     |    %d    |\n",v[billnumber].onion,v[billnumber].oniamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"bittergaurd")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].bittergaurd);
 v[billnumber].amount+=v[billnumber].bittergaurd;
 v[billnumber].bitamount=v[billnumber].bittergaurd*2;
 i[billnumber].tamount+=v[billnumber].bitamount;
 t.tcash += v[billnumber].bitamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    09     |  BitterGaurd|   02   |     %d     |    %d    |\n",v[billnumber].bittergaurd,v[billnumber].bitamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"cherry")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].beans);
 v[billnumber].amount+=v[billnumber].beans;
 v[billnumber].beaamount=v[billnumber].beans*1;
 i[billnumber].tamount+=v[billnumber].beaamount;
 t.tcash += v[billnumber].beaamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    10     |  Beans      |   01   |     %d     |    %d    |\n",v[billnumber].beans,v[billnumber].beaamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"pumpkin")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].pumpkin);
 v[billnumber].amount+=v[billnumber].pumpkin;
 v[billnumber].pumamount=v[billnumber].pumpkin*15;
 i[billnumber].tamount+=v[billnumber].pumamount;
 t.tcash += v[billnumber].pumamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    11     |  Pumpkin    |   15   |     %d     |    %d    |\n",v[billnumber].pumpkin,v[billnumber].pumamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"spinach")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].spinach);
 v[billnumber].amount+=v[billnumber].spinach;
 v[billnumber].spiamount=v[billnumber].spinach*4;
 i[billnumber].tamount+=v[billnumber].spiamount;
 t.tcash += v[billnumber].spiamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    12     |  Spinach    |   04   |     %d     |    %d    |\n",v[billnumber].spinach,v[billnumber].spiamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"ginger")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].ginger);
 v[billnumber].amount+=v[billnumber].ginger;
 v[billnumber].ginamount=v[billnumber].ginger*2;
 i[billnumber].tamount+=v[billnumber].ginamount;
 t.tcash += v[billnumber].ginamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    13     |  Ginger     |   02   |     %d     |    %d    |\n",v[billnumber].ginger,v[billnumber].ginamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"capsicum")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].capsicum);
 v[billnumber].amount+=v[billnumber].capsicum;
 v[billnumber].capamount=v[billnumber].capsicum*3;
 i[billnumber].tamount+=v[billnumber].capamount;
 t.tcash += v[billnumber].capamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    14     |  Capsicum   |   03   |     %d     |    %d    |\n",v[billnumber].capsicum,v[billnumber].capamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"garlic")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].garlic);
 v[billnumber].amount+=v[billnumber].garlic;
 v[billnumber].garamount=v[billnumber].garlic*10;
 i[billnumber].tamount+=v[billnumber].garamount;
 t.tcash += v[billnumber].garamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    15     |  Garlic     |   10   |     %d     |    %d    |\n",v[billnumber].garlic,v[billnumber].garamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"mushroom")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].mushroom);
 v[billnumber].amount+=v[billnumber].mushroom;
 v[billnumber].mushamount=v[billnumber].mushroom*5;
 i[billnumber].tamount+=v[billnumber].mushamount;
 t.tcash += v[billnumber].mushamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    16     |  Mushroom   |  05  |    %d    |   %d   |\n",v[billnumber].mushroom,v[billnumber].mushamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"cabbage")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].cabbage);
 v[billnumber].amount+=v[billnumber].cabbage;
 v[billnumber].cabamount=v[billnumber].cabbage*15;
 i[billnumber].tamount+=v[billnumber].cabamount;
 t.tcash += v[billnumber].cabamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    17     |  Cabbage    |  15  |    %d    |   %d   |\n",v[billnumber].cabbage,v[billnumber].cabamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"gaurd")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].gaurd);
 v[billnumber].amount+=v[billnumber].gaurd;
 v[billnumber].gauamount=v[billnumber].gaurd*15;
 i[billnumber].tamount+=v[billnumber].gauamount;
 t.tcash += v[billnumber].gauamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    18     |  Gaurd      |  15  |    %d    |   %d   |\n",v[billnumber].gaurd,v[billnumber].gauamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"orange")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].orange);
 v[billnumber].amount+=v[billnumber].orange;
 v[billnumber].oraamount=v[billnumber].orange*5;
 i[billnumber].tamount+=v[billnumber].oraamount;
 t.tcash += v[billnumber].oraamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    19     |  Orange     |  05  |    %d    |   %d   |\n",v[billnumber].orange,v[billnumber].oraamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"corn")==0){

 printf("Quantity?\n");
 scanf("%d",&v[billnumber].corn);
 v[billnumber].amount+=v[billnumber].corn;
 v[billnumber].coramount=v[billnumber].corn*10;
 i[billnumber].tamount+=v[billnumber].coramount;
 t.tcash += v[billnumber].coramount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    20     |  Corn       |  10  |    %d    |   %d   |\n",v[billnumber].corn,v[billnumber].coramount);
 printf("------------------------------------------------------\n");

 }
 }while(strcmp(s1,"bill") != 0);

 printf("Total Products: %d\n",v[billnumber].amount);

 printf("Press Enter To Continue.\n");
 getch();

 info();
}


bill()
{
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("|------------------------------------------------------------------------------|");
 printf("|                            Aryan's Store                                     |");
 printf("|------------------------------------------------------------------------------|");

 printf("|\n|  Name: %s\n",i[billnumber].name);

 gotoxy(80,8);
 printf("|");

 gotoxy(80,10);
 printf("|");

 gotoxy(62,9);
 printf("Phone: %s |",i[billnumber].phone);


 printf("|-----------------------------------------------------------------------------\n");

 printf("               |  SN  |    ITEM    |   QTY  |  RATE  |  AMOUNT  |\n");

 making_bill();

 printf("|----------------------------------------------------------------------------|\n");
 printf("Amount: %d\n",i[billnumber].tamount);
 printf("Cash Paid: %d\n",i[billnumber].tamount);
 printf("|----------------------------------------------------------------------------|\n");

 t.tbill++;

 printf("Thanks For Visiting");

 getch();
 main();
}


restrict()
{
 clrscr();

 printf("Please enter the password.\n");
 scanf("%s",&s1);

 if(strcmp(s1,"Beyblade@123")==0){

 clrscr();

 printf("================\n");
 printf("Restricted Area.\n");
 printf("================\n");

 printf("Welcome To Your Private Area.\n\n");
 printf("Today's Total Earnings: %d\n",t.tcash);
 printf("              Bills: %d\n\n",t.tbill);

 printf("Enter Any Key To Return To Main Menu.\n");
 getch();
 main();

 }else if(strcmp(s1,"Beyblade@123") != 0){

  clrscr();
  printf("You Are Not Authorised Here.\n");
  getch();
  main();

 }

}




info()
{
 clrscr();

 printf("================\n");
 printf("Billing Details.\n");
 printf("================\n\n");

 printf("Please Provide Your Details.\n");
 printf("----------------------------\n\n");

 printf("Bill Number: %d\n\n",billnumber);
 printf("Name: ");
 scanf("%s",&i[billnumber].name);

 printf("Phone No.: ");
 scanf("%s",&i[billnumber].phone);

 printf("\n\nThank You For Providing Your Details.\n");
 printf("Press Enter To Continue.\n");
 getch();

 bill();
}


buying_preference()
{
clrscr();

printf("=============\n");
printf("Grocery Store\n");
printf("=============\n\n");

printf("What Do You Want To Buy?\n");
printf("1.Fruits.\n");
printf("2.Vegetables.\n");
printf("3.Return to Main Screen.\n");
scanf("%d",&a);

 switch(a)
 {
  case 1:
  buying_fruits();
  break;

  case 2:
  buying_vegetables();
  break;

  case 3:
  main();
  break;

  default:
  buying_preference();
 }
}


menu_preference()
{
 clrscr();

 printf("==============\n");
 printf("Grocery Store.\n");
 printf("==============\n\n");

 printf("Which Menu Do You Want To See?\n");
 printf("1.Fruits Menu.\n");
 printf("2.Vegetables Menu.\n");
 printf("3.Return to Main Screen.\n");
 scanf("%d",&a);

 switch(a)
 {
  case 1:
  menuf();
  break;

  case 2:
  menuv();
  break;

  case 3:
  main();
  break;

  default:
  menu_preference();
 }

}

asking_items(){

 printf("What To Buy?\n");
 scanf("%s",&s1);

}


buying_fruits()
{
 clrscr();

 billnumber++;

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 do{

 asking_items();

 if(strcmp(s1,"banana")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].banana);
 f[billnumber].amount+=f[billnumber].banana;
 f[billnumber].banamount=f[billnumber].banana*12;
 i[billnumber].tamount+=f[billnumber].banamount;
 t.tcash += f[billnumber].banamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    01     |  Banana     |  12  |    %d    |   %d   |\n",f[billnumber].banana,f[billnumber].banamount);
 printf("------------------------------------------------------\n");

 }

 else if(strcmp(s1,"apple")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].apple);
 f[billnumber].amount+=f[billnumber].apple;
 f[billnumber].appamount=f[billnumber].apple*10;
 i[billnumber].tamount+=f[billnumber].appamount;
 t.tcash += f[billnumber].appamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    02     |  Apple      |  10  |    %d    |   %d   |\n",f[billnumber].apple,f[billnumber].appamount);
 printf("------------------------------------------------------\n");

 }


 else if(strcmp(s1,"mango")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].mango);
 f[billnumber].amount+=f[billnumber].mango;
 f[billnumber].manamount=f[billnumber].mango*10;
 i[billnumber].tamount+=f[billnumber].manamount;
 t.tcash += f[billnumber].manamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    03     |  Mango      |  10  |    %d    |   %d   |\n",f[billnumber].mango,f[billnumber].manamount);
 printf("------------------------------------------------------\n");

 }
 else if(strcmp(s1,"muskmelon")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].muskmelon);
 f[billnumber].amount+=f[billnumber].muskmelon;
 f[billnumber].musamount=f[billnumber].muskmelon*20;
 i[billnumber].tamount+=f[billnumber].musamount;
 t.tcash += f[billnumber].musamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    04     |  Muskmelon  |  20  |    %d    |   %d   |\n",f[billnumber].muskmelon,f[billnumber].musamount);
 printf("------------------------------------------------------\n");

 }

  else if(strcmp(s1,"watermelon")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].watermelon);
 f[billnumber].amount+=f[billnumber].watermelon;
 f[billnumber].watamount=f[billnumber].watermelon*30;
 i[billnumber].tamount+=f[billnumber].watamount;
 t.tcash += f[billnumber].watamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |   Cost  |  Quantity  |  Amount  |\n");
 printf("-------------------------------------------------------------\n");
 printf("|    05     |  Watermelon |    30   |     %d     |    %d    |\n",f[billnumber].watermelon,f[billnumber].watamount);
 printf("-------------------------------------------------------------\n");
 }

  else if(strcmp(s1,"papaya")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].papaya);
 f[billnumber].amount+=f[billnumber].papaya;
 f[billnumber].papamount=f[billnumber].papaya*40;
 i[billnumber].tamount+=f[billnumber].papamount;
 t.tcash += f[billnumber].papamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    06     |  Papaya     |   40   |     %d     |    %d    |\n",f[billnumber].papaya,f[billnumber].papamount);
 printf("------------------------------------------------------------\n");
 }

  else if(strcmp(s1,"apricot")==0)
 {
 printf("Quantity?\n");
 scanf("%d",&f[billnumber].apricot);
 f[billnumber].amount+=f[billnumber].apricot;
 f[billnumber].apramount=f[billnumber].apricot*30;
 i[billnumber].tamount+=f[billnumber].apramount;
 t.tcash += f[billnumber].apramount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    07     |  Apricot    |   30   |     %d     |    %d    |\n",f[billnumber].apricot,f[billnumber].apramount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"rasberry")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].rasberry);
 f[billnumber].amount+=f[billnumber].rasberry;
 f[billnumber].rasamount=f[billnumber].rasberry*3;
 i[billnumber].tamount+=f[billnumber].rasamount;
 t.tcash += f[billnumber].rasamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    08     |  Rasberry   |   03   |     %d     |    %d    |\n",f[billnumber].rasberry,f[billnumber].rasamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"guava")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].guava);
 f[billnumber].amount+=f[billnumber].guava;
 f[billnumber].guaamount=f[billnumber].guava*10;
 i[billnumber].tamount+=f[billnumber].guaamount;
 t.tcash += f[billnumber].guaamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    09     |  Guava      |   10   |     %d     |    %d    |\n",f[billnumber].guava,f[billnumber].guaamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"lichi")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].lichi);
 f[billnumber].amount += f[billnumber].lichi;
 f[billnumber].licamount = f[billnumber].lichi*2;
 i[billnumber].tamount += f[billnumber].licamount;
 t.tcash += f[billnumber].licamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    10     |  Lichi      |   02   |     %d     |    %d    |\n",f[billnumber].lichi,f[billnumber].licamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"grapes")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].grapes);
 f[billnumber].amount+=f[billnumber].grapes;
 f[billnumber].graamount=f[billnumber].grapes*2;
 i[billnumber].tamount+=f[billnumber].graamount;
 t.tcash += f[billnumber].graamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    11     |  Grapes     |   02   |     %d     |    %d    |\n",f[billnumber].grapes,f[billnumber].graamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"strawberry")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].strawberry);
 f[billnumber].amount+=f[billnumber].strawberry;
 f[billnumber].stramount=f[billnumber].strawberry*4;
 i[billnumber].tamount+=f[billnumber].stramount;
 t.tcash += f[billnumber].stramount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    12     |  Strawberry |   04   |     %d     |    %d    |\n",f[billnumber].strawberry,f[billnumber].stramount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"cherry")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].cherry);
 f[billnumber].amount+=f[billnumber].cherry;
 f[billnumber].cheamount=f[billnumber].cherry*2;
 i[billnumber].tamount+=f[billnumber].cheamount;
 t.tcash += f[billnumber].cheamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    13     |  Cherry     |   02   |     %d     |    %d    |\n",f[billnumber].cherry,f[billnumber].cheamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"coconut")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].coconut);
 f[billnumber].amount+=f[billnumber].coconut;
 f[billnumber].cocamount=f[billnumber].coconut*30;
 i[billnumber].tamount+=f[billnumber].cocamount;
 t.tcash += f[billnumber].cocamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       |  Cost  |  Quantity  |  Amount  |\n");
 printf("------------------------------------------------------------\n");
 printf("|    14     |  Coconut    |   30   |     %d     |    %d    |\n",f[billnumber].coconut,f[billnumber].cocamount);
 printf("------------------------------------------------------------\n");

 }else if(strcmp(s1,"pineapple")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].pineapple);
 f[billnumber].amount += f[billnumber].pineapple;
 f[billnumber].pinamount = f[billnumber].pineapple*10;
 i[billnumber].tamount += f[billnumber].pinamount;
 t.tcash += f[billnumber].pinamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    15     |  PineApple  |  10  |    %d    |   %d   |\n",f[billnumber].pineapple,f[billnumber].pinamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"kiwi")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].kiwi);
 f[billnumber].amount += f[billnumber].kiwi;
 f[billnumber].kiwamount = f[billnumber].kiwi*5;
 i[billnumber].tamount += f[billnumber].kiwamount;
 t.tcash += f[billnumber].kiwamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    16     |  Kiwi       |  05  |    %d    |   %d   |\n",f[billnumber].kiwi,f[billnumber].kiwamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"jackfruit")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].jackfruit);
 f[billnumber].amount+=f[billnumber].jackfruit;
 f[billnumber].jacamount=f[billnumber].jackfruit*10;
 i[billnumber].tamount+=f[billnumber].jacamount;
 t.tcash += f[billnumber].jacamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    17     |  Jackfruit  |  10  |    %d    |   %d   |\n",f[billnumber].jackfruit,f[billnumber].jacamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"dragonfruit")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].dragonfruit);
 f[billnumber].amount+=f[billnumber].dragonfruit;
 f[billnumber].draamount=f[billnumber].dragonfruit*15;
 i[billnumber].tamount+=f[billnumber].draamount;
 t.tcash += f[billnumber].draamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    18     |  DragonFruit|  15  |    %d    |   %d   |\n",f[billnumber].dragonfruit,f[billnumber].draamount);
 printf("------------------------------------------------------\n");

 }else if(strcmp(s1,"blueberry")==0){

 printf("Quantity?\n");
 scanf("%d",&f[billnumber].blueberry);
 f[billnumber].amount+=f[billnumber].blueberry;
 f[billnumber].bluamount=f[billnumber].blueberry*2;
 i[billnumber].tamount+=f[billnumber].bluamount;
 t.tcash += f[billnumber].bluamount;
 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");

 printf("| Serial N  |  Item       | Cost | Quantity | Amount |\n");
 printf("------------------------------------------------------\n");
 printf("|    19     |  Blueberry  |  02  |    %d    |   %d   |\n",f[billnumber].blueberry,f[billnumber].bluamount);
 printf("------------------------------------------------------\n");

 }

 }while(strcmp(s1,"bill") != 0);

 printf("Total Products: %d\n",f[billnumber].amount);

 printf("\nPress Enter To Continue.\n");
 getch();

 info();
}


making_bill()
{

 if(f[billnumber].banana>0)
 {
 printf("               |  01  | Banana     |    %d   |   12   |    %d    |\n",f[billnumber].banana,f[billnumber].banamount);
 }

 if(f[billnumber].apple>0)
 {
 printf("               |  02  | Apple      |    %d   |   10   |    %d    |\n",f[billnumber].apple,f[billnumber].appamount);
 }

 if(f[billnumber].mango>0)
 {
 printf("               |  03  | Mango      |    %d   |   10   |    %d    |\n",f[billnumber].mango,f[billnumber].manamount);
 }

 if(f[billnumber].muskmelon>0)
 {
 printf("               |  04  | Muskmelon  |    %d   |   20   |    %d    |\n",f[billnumber].muskmelon,f[billnumber].musamount);
 }

 if(f[billnumber].watermelon>0)
 {
 printf("               |  05  | Watermelon |    %d   |   30   |    %d    |\n",f[billnumber].watermelon,f[billnumber].watamount);
 }

 if(f[billnumber].papaya>0)
 {
 printf("               |  06  | Papaya     |    %d   |   40   |    %d    |\n",f[billnumber].papaya,f[billnumber].papamount);
 }
 if(f[billnumber].apricot>0)
 {
 printf("               |  07  | Apricot    |    %d   |   30   |    %d    |\n",f[billnumber].apricot,f[billnumber].apramount);
 }
 if(f[billnumber].rasberry>0)
 {
 printf("               |  08  | Rasberry   |    %d   |   05   |    %d    |\n",f[billnumber].rasberry,f[billnumber].rasamount);
 }
 if(f[billnumber].guava>0)
 {
 printf("               |  09  | Guava      |    %d   |   10   |    %d    |\n",f[billnumber].guava,f[billnumber].guaamount);
 }

 if(f[billnumber].lichi>0)
 {
 printf("               |  10  | Lichi      |    %d   |   02   |    %d    |\n",f[billnumber].lichi,f[billnumber].licamount);
 }

 if(f[billnumber].grapes>0)
 {
 printf("               |  11  | Grapes     |    %d   |   02   |    %d    |\n",f[billnumber].grapes,f[billnumber].graamount);
 }

 if(f[billnumber].strawberry>0)
 {
 printf("               |  12  | Strawberry |    %d   |   04   |    %d    |\n",f[billnumber].strawberry,f[billnumber].stramount);
 }

 if(f[billnumber].cherry>0)
 {
 printf("               |  13  | Cherry     |    %d   |   02   |    %d    |\n",f[billnumber].cherry,f[billnumber].cheamount);
 }

 if(f[billnumber].coconut>0)
 {
 printf("               |  14  | Coconut    |    %d   |   30   |    %d    |\n",f[billnumber].coconut,f[billnumber].cocamount);
 }

 if(f[billnumber].pineapple>0)
 {
 printf("               |  15  | PineApple  |    %d   |   10   |    %d    |\n",f[billnumber].pineapple,f[billnumber].pinamount);
 }

 if(f[billnumber].kiwi>0){
 printf("               |  16  | Kiwi       |    %d   |   05   |    %d    |\n",f[billnumber].kiwi,f[billnumber].kiwamount);
 }

 if(f[billnumber].jackfruit>0){
 printf("               |  17  | Jackfruit  |    %d   |   10   |    %d    |\n",f[billnumber].jackfruit,f[billnumber].jacamount);
 }

 if(f[billnumber].dragonfruit>0){
 printf("               |  18  | DragonFruit|    %d   |   10   |    %d    |\n",f[billnumber].dragonfruit,f[billnumber].draamount);
 }

 if(f[billnumber].blueberry>0){
 printf("               |  19  | BlueBerry  |    %d   |   10   |    %d    |\n",f[billnumber].blueberry,f[billnumber].bluamount);
 }


 if(v[billnumber].tomato>0)
 {
 printf("               |  01  | Tomato     |    %d   |   12   |    %d    |\n",v[billnumber].tomato,v[billnumber].tomamount);
 }

 if(v[billnumber].ladyfinger>0)
 {
 printf("               |  02  | Ladyfinger |    %d   |   10   |    %d    |\n",v[billnumber].ladyfinger,v[billnumber].ladamount);
 }

 if(v[billnumber].cucumber>0)
 {
 printf("               |  03  | Cucumber   |    %d   |   10   |    %d    |\n",v[billnumber].cucumber,v[billnumber].cucamount);
 }

 if(v[billnumber].peas>0)
 {
 printf("               |  04  | Peas       |    %d   |   10   |    %d    |\n",v[billnumber].peas,v[billnumber].peaamount);
 }

 if(v[billnumber].cauliflower>0)
 {
 printf("               |  05  | Cauliflower|    %d   |   20   |    %d    |\n",v[billnumber].cauliflower,v[billnumber].cauamount);
 }

 if(v[billnumber].eggplant>0)
 {
 printf("               |  06  | Eggplant   |    %d   |   30   |    %d    |\n",v[billnumber].eggplant,v[billnumber].eggamount);
 }

 if(v[billnumber].potato>0)
 {
 printf("               |  07  | Potato     |    %d   |   40   |    %d    |\n",v[billnumber].potato,v[billnumber].potamount);
 }

 if(v[billnumber].onion>0)
 {
 printf("               |  08  | Onion      |    %d   |   30   |    %d    |\n",v[billnumber].onion,v[billnumber].oniamount);
 }

 if(v[billnumber].bittergaurd>0)
 {
 printf("               |  09  | Bittergaurd|    %d   |   05   |    %d    |\n",v[billnumber].bittergaurd,v[billnumber].bitamount);
 }

 if(v[billnumber].beans>0)
 {
 printf("               |  10  | Beans      |    %d   |   10   |    %d    |\n",v[billnumber].beans,v[billnumber].beaamount);
 }

 if(v[billnumber].pumpkin>0)
 {
 printf("               |  11  | Pumpkin    |    %d   |   02   |    %d    |\n",v[billnumber].pumpkin,v[billnumber].pumamount);
 }

 if(v[billnumber].spinach>0)
 {
 printf("               |  12  | Spinach    |    %d   |   02   |    %d    |\n",v[billnumber].spinach,v[billnumber].spiamount);
 }

 if(v[billnumber].ginger>0)
 {
 printf("               |  13  | Ginger     |    %d   |   04   |    %d    |\n",v[billnumber].ginger,v[billnumber].ginamount);
 }

 if(v[billnumber].capsicum>0)
 {
 printf("               |  14  | Capsicum   |    %d   |   02   |    %d    |\n",v[billnumber].capsicum,v[billnumber].capamount);
 }

 if(v[billnumber].garlic>0)
 {
 printf("               |  15  | Garlic     |    %d   |   30   |    %d    |\n",v[billnumber].garlic,v[billnumber].garamount);
 }

 if(v[billnumber].mushroom>0)
 {
 printf("               |  16  | Mushroom   |    %d   |   10   |    %d    |\n",v[billnumber].mushroom ,v[billnumber].mushamount);
 }

 if(v[billnumber].cabbage>0)
 {
 printf("               |  17  | Cabbage    |    %d   |   15   |    %d    |\n",v[billnumber].cabbage,v[billnumber].cabamount);
 }

 if(v[billnumber].gaurd>0)
 {
 printf("               |  18  | Gaurd      |    %d   |   15   |    %d    |\n",v[billnumber].gaurd,v[billnumber].gauamount);
 }

 if(v[billnumber].orange>0)
 {
 printf("               |  19  | Orange     |    %d   |   05   |    %d    |\n",v[billnumber].orange,v[billnumber].oraamount);
 }

 if(v[billnumber].corn>0)
 {
 printf("               |  20  | Corn       |    %d   |   10   |    %d    |\n",v[billnumber].corn,v[billnumber].coramount);
 }
}




bye()
{
clrscr();

printf("\n\n                              Thanks for visiting.\n");
printf("                              Have a nice day.\n");

printf("\n\n\n\n");
printf("                               ***************** ");
printf("\n			      *                 *     ");
printf("\n		             *    _         _    *    ");
printf("\n			    *    |_|       |_|    *   ");
printf("\n		           *                       *  ");
printf("\n		       	   *          |=|          *  ");
printf("\n		            *                     *   ");
printf("\n		             *    |_________|    *    ");
printf("\n			      *          |__|   *     ");
printf("\n			       *****************      ");

getch();
}


check_bill()
{
 clrscr();



 printf("==============\n");
 printf("Grocery Store.\n");
 printf("==============\n\n");

 printf("Please Enter Your Bill Number.\n");
 scanf("%d",&b);

 clrscr();

 printf("=============\n");
 printf("Grocery Store\n");
 printf("=============\n\n");


 printf("|------------------------------------------------------------------------------|");
 printf("|                            Aryan's Store                                     |");
 printf("|------------------------------------------------------------------------------|");

 printf("|\n|  Name: %s\n",i[b].name);

 gotoxy(80,8);
 printf("|");

 gotoxy(80,10);
 printf("|");

 gotoxy(62,9);
 printf("Phone: %s ",i[b].phone);


 printf("|------------------------------------------------------------------------------\n");

 printf("               |  SN  |    ITEM    |   QTY  |  RATE  |  AMOUNT  |\n");

 reproducing_bill();

 printf("|----------------------------------------------------------------------------|\n");
 printf("Amount: %d\n",i[b].tamount);
 printf("Cash Paid: %d\n",i[b].tamount);
 printf("|----------------------------------------------------------------------------|\n");

 getch();
 main();
}


reproducing_bill()
{


 if(f[b].banana>0)
 {
 printf("               |  01  | Banana     |");
 printf("    %d   ",f[b].banana);
 printf("");
 }

 if(f[b].apple>0)
 {
 printf("               |  02  | Apple      |    %d   |   10   |    %d    |\n",f[b].apple,f[b].appamount);
 }

 if(f[b].mango>0)
 {
 printf("               |  03  | Mango      |    %d   |   10   |    %d    |\n",f[b].mango,f[b].manamount);
 }

 if(f[b].muskmelon>0)
 {
 printf("               |  04  | Muskmelon  |    %d   |   20   |    %d    |\n",f[b].muskmelon,f[b].musamount);
 }

 if(f[b].watermelon>0)
 {
 printf("               |  05  | Watermelon |    %d   |   30   |    %d    |\n",f[b].watermelon,f[b].watamount);
 }

 if(f[b].papaya>0)
 {
 printf("               |  06  | Papaya     |    %d   |   40   |    %d    |\n",f[b].papaya,f[b].papamount);
 }

 if(f[b].apricot>0)
 {
 printf("               |  07  | Apricot    |    %d   |   30   |    %d    |\n",f[b].apricot,f[b].apramount);
 }

 if(f[b].rasberry>0)
 {
 printf("               |  08  | Rasberry   |    %d   |   05   |    %d    |\n",f[b].rasberry,f[b].rasamount);
 }

 if(f[b].guava>0)
 {
 printf("               |  09  | Guava      |    %d   |   10   |    %d    |\n",f[b].guava,f[b].guaamount);
 }

 if(f[b].lichi>0)
 {
 printf("               |  10  | Lichi      |    %d   |   02   |    %d    |\n",f[b].lichi,f[b].licamount);
 }

 if(f[b].grapes>0)
 {
 printf("               |  11  | Grapes     |    %d   |   02   |    %d    |\n",f[b].grapes,f[b].graamount);
 }

 if(f[b].strawberry>0)
 {
 printf("               |  12  | Strawberry |    %d   |   04   |    %d    |\n",f[b].strawberry,f[b].stramount);
 }

 if(f[b].cherry>0)
 {
 printf("               |  13  | Cherry     |    %d   |   02   |    %d    |\n",f[b].cherry,f[b].cheamount);
 }

 if(f[b].coconut>0)
 {
 printf("               |  14  | Coconut    |    %d   |   30   |    %d    |\n",f[b].coconut,f[b].cocamount);
 }

 if(f[b].pineapple>0)
 {
 printf("               |  15  | PineApple  |    %d   |   10   |    %d    |\n",f[b].pineapple,f[b].pinamount);
 }

 if(f[b].kiwi>0)
 {
 printf("               |  16  | Kiwi       |    %d   |   05   |    %d    |\n",f[b].kiwi,f[b].kiwamount);
 }

 if(f[b].jackfruit>0)
 {
 printf("               |  17  | Jackfruit  |    %d   |   10   |    %d    |\n",f[b].jackfruit,f[b].jacamount);
 }

 if(f[b].dragonfruit>0)
 {
 printf("               |  18  | DragonFruit|    %d   |   15   |    %d    |\n",f[b].dragonfruit,f[b].draamount);
 }

 if(f[b].blueberry>0)
 {
 printf("               |  19  | BlueBerry  |    %d   |   02   |    %d    |\n",f[b].blueberry,f[b].bluamount);
 }


 if(v[b].tomato>0)
 {
 printf("               |  01  | Tomato     |    %d   |   12   |    %d    |\n",v[b].tomato,v[b].tomamount);
 }

 if(v[b].ladyfinger>0)
 {
 printf("               |  02  | Ladyfinger |    %d   |   10   |    %d    |\n",v[b].ladyfinger,v[b].ladamount);
 }

 if(v[b].cucumber>0)
 {
 printf("               |  03  | Cucumber   |    %d   |   10   |    %d    |\n",v[b].cucumber,v[b].cucamount);
 }

 if(v[b].peas>0)
 {
 printf("               |  04  | Peas       |    %d   |   10   |    %d    |\n",v[b].peas,v[b].peaamount);
 }

 if(v[b].cauliflower>0)
 {
 printf("               |  05  | Cauliflower|    %d   |   20   |    %d    |\n",v[b].cauliflower,v[b].cauamount);
 }

 if(v[b].eggplant>0)
 {
 printf("               |  06  | Eggplant   |    %d   |   30   |    %d    |\n",v[b].eggplant,v[b].eggamount);
 }

 if(v[b].potato>0)
 {
 printf("               |  07  | Potato     |    %d   |   40   |    %d    |\n",v[b].potato,v[b].potamount);
 }

 if(v[b].onion>0)
 {
 printf("               |  08  | Onion      |    %d   |   30   |    %d    |\n",v[b].onion,v[b].oniamount);
 }

 if(v[b].bittergaurd>0)
 {
 printf("               |  09  | Bittergaurd|    %d   |   05   |    %d    |\n",v[b].bittergaurd,v[b].bitamount);
 }

 if(v[b].beans>0)
 {
 printf("               |  10  | Beans      |    %d   |   10   |    %d    |\n",v[b].beans,v[b].beaamount);
 }

 if(v[b].pumpkin>0)
 {
 printf("               |  11  | Pumpkin    |    %d   |   02   |    %d    |\n",v[b].pumpkin,v[b].pumamount);
 }

 if(v[b].spinach>0)
 {
 printf("               |  12  | Spinach    |    %d   |   02   |    %d    |\n",v[b].spinach,v[b].spiamount);
 }

 if(v[b].ginger>0)
 {
 printf("               |  13  | Ginger     |    %d   |   04   |    %d    |\n",v[b].ginger,v[b].ginamount);
 }

 if(v[b].capsicum>0)
 {
 printf("               |  14  | Capsicum   |    %d   |   02   |    %d    |\n",v[b].capsicum,v[b].capamount);
 }

 if(v[b].garlic>0)
 {
 printf("               |  15  | Garlic     |    %d   |   30   |    %d    |\n",v[b].garlic,v[b].garamount);
 }

 if(v[b].mushroom>0)
 {
 printf("               |  16  | Mushroom   |    %d   |   05   |    %d    |\n",v[b].mushroom,v[b].mushamount);
 }

 if(v[b].cabbage>0)
 {
 printf("               |  17  | Cabbage    |    %d   |   15   |    %d    |\n",v[b].cabbage,v[b].cabamount);
 }

 if(v[b].gaurd>0)
 {
 printf("               |  18  | Gaurd      |    %d   |   15   |    %d    |\n",v[b].gaurd,v[b].gauamount);
 }

 if(v[b].orange>0)
 {
 printf("               |  19  | Orange     |    %d   |   05   |    %d    |\n",v[b].orange,v[b].oraamount);
 }

 if(v[b].corn>0)
 {
 printf("               |  20  | Corn       |    %d   |   10   |    %d    |\n",v[b].corn,v[b].coramount);
 }
}
