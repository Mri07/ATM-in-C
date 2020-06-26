#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
unsigned long amount=100000,deposit,withdraw;
int choice,pin=1234,password,p,n,P,num;
char ch='y';
clrscr();
while(ch=='y')
{
h:
printf("\nEnter your password->\n\n\n");
scanf("%d",&password);
if(password==pin)
{
goto x;
}
else
{
printf("\nWRONG PASSWORD\n\n\n");
goto h;
}
x:
b:
printf("\nWELCOME TO ONLINE BANKING-->\n");
printf("\n**** **** **** **** **** **** ****\n");
printf("1.BALANCE CHECK->\n");
printf("2.CASH WITHDRAW->\n");
printf("3.CASH DEPOSIT->\n");
printf("4.PIN CHANGE->\n");
printf("5.EXIT->\n");
printf("\n**** **** **** **** **** **** ****\n");
printf("Enter your Choice->\n");
scanf("%d",&choice);

 switch(choice)
 {
 case 1:
 printf("\nYour Balance Is=>RS %lu",amount);
 break;
 case 2:
 printf("\nEnter the Amount To Withdraw\n");
 scanf("%lu",&withdraw);
 if(withdraw<100)
 {
 printf("\n** Please Enter the amount in multiple of 100 **");
 }
 else if(withdraw>amount-500)
 {
 printf("\n** Minimum RS 500 Is Required In Bank **");
 }
 else
 {
 amount=amount-withdraw;
 printf("\n** Please take Your cash=>RS %lu **\n",withdraw);
 printf("\n** Your balance is=>RS %lu **",amount);
 }
 break;
 case 3:
 printf("\nEnter the Amount to be Deposit\n");
 scanf("%lu",&deposit);
 amount=amount+deposit;
 printf("\n** After Depositing Your Balance Is=>RS %lu **",amount);
 break;
 case 4:
 g:
 printf("\n^^ Enter your old pin-> ^^");
 scanf("%d",&P);
  if(P==pin)
 {
 goto c;
 }
 else
 {
 printf("\n* WRONG PIN *\n");
 goto g;
 }
 c:
 printf("\n^^ Enter your new Pin-> ^^");
 scanf("%d",&p);
 n=p;
 pin=n;
 p=pin;
 printf("\n^^ New Pin Is=%d ^^",pin);
 break;
 case 5:
 exit(0);
 break;
 }
 printf("\n\nDo You Want To Make Another Process-->\n");
 printf("1.YES      2.NO \n");
 scanf("%d",&num);
  if(num==1)
  {
   printf("**********************************\n");
   goto b;
  }
 printf("\n\n* PRESS Y To Continue----> *\n");
 ch=getche();
 fflush(stdin);
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

 }
 m:
 getch();
 }



