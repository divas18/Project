#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
#include<iostream>
using namespace std;


struct pizzaitem
{
	char pizza_name[100];
	int pizza_quantity;
	float pizza_price;
}p[10],q[10];

int chn=10;
int arr1[10]={0},quantity,k;
double total=0;
long e=4;

struct name
{
	long long no;
	char name[50];
	char email [50];
}last[500];


void thanks()
{
 system("color 0E");
 printf("\n\n");
 printf("\n\t\t#######################################################################################################################################");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##\t\t\t      **********  **      **    ******    **       **  **     **   ********                                  ##");
 printf("\n\t\t##\t\t\t      *   **   *  **      **   **    **   ***      **  **    **   **      **                                 ##");
 printf("\n\t\t##\t\t\t          **      **      **  **      **  ** *     **  **   **    **      **                                 ##");
 printf("\n\t\t##\t\t\t          **      **      **  **      **  **  *    **  **  **      ***                                       ##");
 printf("\n\t\t##\t\t\t          **      **********  **********  **   *   **  *****         ****                                    ##");
 printf("\n\t\t##\t\t\t          **      **      **  **      **  **    *  **  **  **           ***                                  ##");
 printf("\n\t\t##\t\t\t          **      **      **  **      **  **     * **  **   **    **      **                                 ##");
 printf("\n\t\t##\t\t\t          **      **      **  **      **  **      ***  **    **   **      **                                 ##");
 printf("\n\t\t##\t\t\t          **      **      **  **      **  **       **  **     **   ********                                  ##");
 Sleep(500);
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##\t\t\t\t\t          **********    ******     *******                                                   ##");
 printf("\n\t\t##\t\t\t\t\t          **       *   **    **   **     **                                                  ##");
 printf("\n\t\t##\t\t\t\t\t          **          **      **  **      **                                                 ##");
 printf("\n\t\t##\t\t\t\t\t          **          **      **  **     **                                                  ##");
 printf("\n\t\t##\t\t\t\t\t          ********    **      **  ********                                                   ##");
 printf("\n\t\t##\t\t\t\t\t          **          **      **  **   **                                                    ##");
 printf("\n\t\t##\t\t\t\t\t          **          **      **  **    **                                                   ##");
 printf("\n\t\t##\t\t\t\t\t          **           **    **   **     **                                                  ##");
 printf("\n\t\t##\t\t\t\t\t          **            ******    **      **                                                 ##");
Sleep(700);
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##\t    **      **    ******    **      **   *******          ******     *******     ********    **********   ******             ##");
 printf("\n\t\t##\t     **    **    **    **   **      **  **     **        **    **   **     **    **     **   **       *  **    **            ##");
 printf("\n\t\t##\t      **  **    **      **  **      **  **      **      **      **  **      **   **      **  **          **     **           ##");
 printf("\n\t\t##\t       ****     **      **  **      **  **     **       **      **  **     **    **      **  **          **    **            ##");
 printf("\n\t\t##\t        **      **      **  **      **  ********        **      **  ********     **      **  ********    *******             ##");
 printf("\n\t\t##\t        **      **      **  **      **  **   **         **      **  **   **      **      **  **          **  **              ##");
 printf("\n\t\t##\t        **      **      **  **      **  **    **        **      **  **    **     **      **  **          **   **             ##");
 printf("\n\t\t##\t        **       **    **   **      **  **     **        **    **   **     **    **     **   **       *  **    **            ##");
 printf("\n\t\t##\t        **        ******     ********   **      **        ******    **      **   ********    **********  **     **           ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t##                                                                                                                                   ##");
 printf("\n\t\t#######################################################################################################################################");
 printf("\n");
 getch();
}


void main_menu()
{
	system("color 04");
	FILE *my;
	my=fopen("Database.txt","a+");
	
	last[0].no=9773807562;							//1st default person
	strcpy(last[0].name,"Manish Kumar");
	strcpy(last[0].email,"manish@gmail.com");
	
	last[1].no=7277101828;							//2st default person
	strcpy(last[1].name,"Divas kumar");
	strcpy(last[1].email,"bhadani.divas@gmail.com");
	
	last[2].no=9838699383;							//3rd default person							
	strcpy(last[2].name,"Ravi Kumar");
	strcpy(last[2].email,"Ravi@gmail.com");
	
	last[3].no=9565138231;							//4rth default person
	strcpy(last[3].name,"Lavkhus Kumar");
	strcpy(last[3].email,"Lavkhus@gmail.com");
	
  int m;
  menu:
  for(m=0;m<10;m++)
   q[m].pizza_quantity = 0;
   
  menu1:
  system ("CLS");
  printf("\n\n\n");
  printf("\t\t**************************************************************************************************************************************\n");
  printf("\t\t**************************************************************************************************************************************\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**                                            ***   ***    *****    ***    **    **    **                                           **\n");
  printf("\t\t**                                            ** * * **    **       ** *   **    **    **                                           **\n");
  printf("\t\t**                                            **  *  **    *****    **  *  **    **    **                                           **\n");
  printf("\t\t**                                            **     **    **       **   * **    **    **                                           **\n");
  printf("\t\t**                                            **     **    *****    **    ***     ******                                            **\n");
  printf("\t\t**__________________________________________________________________________________________________________________________________**\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**             Sr.No.                                  PIZZA   AND   BEVERAGES  AND SIDES                             PRICE         **\n");
  printf("\t\t**__________________________________________________________________________________________________________________________________**\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              1.                                     Veg Exotica                                                    195           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              2.                                     Veggie Italino                                                 200           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              3.                                     Veggie Supreme                                                 210           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              4.                                     Veggie Lover                                                   275           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              5.                                     Spiced Paneer                                                  315           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              6.                                     Margherita                                                     310           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              7.                                     Chicken Exotica                                                315           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              8.                                     Chicken Supreme                                                355           **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              9.                                     Coke/Fanta/Sprite                                              40            **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**              10.                                    Butterscotch                                                   65            **\n");
  printf("\t\t**                                                                                                                                  **\n");
  printf("\t\t**************************************************************************************************************************************\n");
  printf("\t\t**************************************************************************************************************************************\n");
  printf("\n\n");

	
	int i;
	char t,s;
	do{
		repeat:
		printf("\t\tChoose pizza and Beverages : ");
		scanf("%d",&i);
		printf("\n");
		switch(i)
			{
			
			case 1:
			{
			strcpy(p[0].pizza_name,"Veg Single Onion                         ");   //1st item
			p[0].pizza_price=195.00;
			strcpy(q[0].pizza_name,p[0].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[0].pizza_quantity=quantity;
			q[0].pizza_price=quantity*p[0].pizza_price;
			label1:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label1;
			}
			}
			
			case 2:
			{
			strcpy(p[1].pizza_name,"Veg Single Golden Corn                   ");  //2nd item
			p[1].pizza_price=200.00;
			strcpy(q[1].pizza_name,p[1].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[1].pizza_quantity=quantity;
			q[1].pizza_price=quantity*p[1].pizza_price;
			label2:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label2;
			}
			}
			
			case 3:
			{
			strcpy(p[2].pizza_name,"Veg Single Capsicum                      ");  //3rd item
			p[2].pizza_price=210.00;
			strcpy(q[2].pizza_name,p[2].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[2].pizza_quantity=quantity;
			q[2].pizza_price=quantity*p[2].pizza_price;
			label3:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label3;
			}
			}
			
			case 4:
			{
			strcpy(p[3].pizza_name,"Veg Doubles Paneer&Onion                 ");  //4th item
			p[3].pizza_price=275.00;
			strcpy(q[3].pizza_name,p[3].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[3].pizza_quantity=quantity;
			q[3].pizza_price=quantity*p[3].pizza_price;
			label4:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label4;
			}
			}
			
			case 5:
			{
			strcpy(p[4].pizza_name,"Non Veg Single Spicy Chicken            ");	//5th item
			p[4].pizza_price=315.00;
			strcpy(q[4].pizza_name,p[4].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[4].pizza_quantity=quantity;
			q[4].pizza_price=quantity*p[4].pizza_price;
			label5:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label5;
			}
			}
			
			case 6:
			{
			strcpy(p[5].pizza_name,"Non Veg Single Chunky Chicken           ");	//6th item
			p[5].pizza_price=310.00;
			strcpy(q[5].pizza_name,p[5].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[5].pizza_quantity=quantity;
			q[5].pizza_price=quantity*p[5].pizza_price;
			label6:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label6;
			}
			}
			
			case 7:
			{
			strcpy(p[6].pizza_name,"Non Veg Single Barbeque Chicken         ");	//7th item
			p[6].pizza_price=315.00;
			strcpy(q[6].pizza_name,p[6].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[6].pizza_quantity=quantity;
			q[6].pizza_price=quantity*p[6].pizza_price;
			label7:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label7;
			}
			}
			
			case 8:
			{
			strcpy(p[7].pizza_name,"Non Veg Doubles Jalapeno & Chunky Chicken");	//8th item
			p[7].pizza_price=355.00;
			strcpy(q[7].pizza_name,p[7].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[7].pizza_quantity=quantity;
			q[7].pizza_price=quantity*p[7].pizza_price;
		label8:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label8;
			}
			}
			
			case 9:
			{
			strcpy(p[8].pizza_name,"Coke/Fanta/Sprite                        ");	//9th item
			p[8].pizza_price=40.00;
			strcpy(q[8].pizza_name,p[8].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[8].pizza_quantity=quantity;
			q[8].pizza_price=quantity*p[8].pizza_price;
		label9:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label9;
			}
			}
			
			case 10:
			{
			strcpy(p[9].pizza_name,"ButterScotch(Mouse cake)                 ");	//10th item
			p[9].pizza_price=65.00;
			strcpy(q[9].pizza_name,p[9].pizza_name);
			printf("\t\tEnter the quantity : ");
			scanf("%d",&quantity);printf("\n");
			q[9].pizza_quantity=quantity;
			q[9].pizza_price=quantity*p[9].pizza_price;
		label10:
			printf("\n\t\tDo you want to add more items ( Y / N ) : ");
			fflush(stdin);
			scanf("%c",&t);printf("\n");
			if(t=='Y' || t=='y')
			goto repeat;
			else if(t=='N' || t=='n')
			break;
			else
			{
				printf("\t\t!!!............Invalid Input..........!!!\n\n");
				goto label10;
			}
			}
			
			default:printf("\t\t!!!............Invalid Input..........!!!\n\n");goto repeat;
			
		}
	choise:
	system("cls");
	case1:
	printf("\n\n");	
	printf("\t\t**************************************************************************************************************************************\n");
	printf("\t\t**                                                  Complete Your Order Process	                                                    **\n");
    printf("\t\t**************************************************************************************************************************************\n");
    printf("\t\t**                                                                                                                                  **\n");
    printf("\t\t**              1.                                 	  Your Order                                                                **\n");
    printf("\t\t**              2.                                       Change Order                                                               **\n");
    printf("\t\t**              3.                                         Payment                                                                  **\n");
    printf("\t\t**                                                                                                                                  **\n");
    printf("\t\t**************************************************************************************************************************************\n");
    printf("\t\t**************************************************************************************************************************************\n");
	
	printf("\n\n\t\t Enter Your Choice : ");
	fflush(stdin);
	scanf("%c",&s);
	printf("\n\n");
	system("cls");
	total = 0;	
	switch(s)
	{
		case '1': 
		{
			printf("\n\n\n");
			printf("\t\t\t\t\tpizza name	                                pizza quantity	        pizza price\n");
			printf("\t\t\t\t\t____________________________________________________________________________________\n\t\t");
			for(k=0;k<10;k++)
			{
 				if(q[k].pizza_quantity!=0)
 				{
					printf("\t\t\t%s\t\t%d\t\t   %.2f\n\t\t",q[k].pizza_name,q[k].pizza_quantity,q[k].pizza_price);
					total=total+q[k].pizza_price;
 				}
			}
			printf("\t\t\t____________________________________________________________________________________\n\t");
			printf("\t\t\t\t\tTOTAL                                                              %.2lf\n",total);
			break;
		}
		case '2':
		{
			goto menu1;
		}
		break;
		case '3':
		{
			system("cls");
			printf("\n\n\n");
			printf("\t\t\t\t\tpizza name	                                pizza quantity	        pizza price\n");
			printf("\t\t\t\t\t____________________________________________________________________________________\n\t\t");
			for(k=0;k<10;k++)
			{
 				if(q[k].pizza_quantity!=0)
 				{
					printf("\t\t\t%s\t\t%d\t\t   %.2f\n\t\t",q[k].pizza_name,q[k].pizza_quantity,q[k].pizza_price);
					total=total+q[k].pizza_price;
 				}
			}
			printf("\t\t\t____________________________________________________________________________________\n\t");
			printf("\t\t\t\t\tTOTAL                                                               %.2lf\n",total);
			break;
		}
		default:
		{
		printf("\n\t\tYou Entered Wrong choice Please Select from given options");
        Sleep(1000);
		goto choise;
	  	}
	}
	
	if(s=='1')
	goto case1;
	
}while(s==2);  //main menu option test
	long long r,flag=0,cnt=0;
	printf("\n\n\t\t\t\t\tENTER YOUR MOBILE NUMBER : ");
	scanf(" %lld",&r);
	
	for(int i=0;i<e;i++)
	{
		if(last[i].no==r)
		{
			printf("\n\t\t\t\t\tTHANKS FOR VISITING AGAIN DEAR :  %s \n",last[i].name);
			printf("\n\t\t\t\t\tEMAIL ID. :  %s \n",last[i].email);
			flag=1;
			printf("\n");
			break;
		}
		cnt++;
	}

	if(flag==0)
	{
	printf("\n\t\t\t\t\tTHANKS FOR VISITING DEAR   \n\n");
	last[e].no=r;
	printf("\t\t\t\t\tENTER YOUR NAME : ");
	scanf(" %[^\n]s",last[e].name);
	printf("\n\t\t\t\t\tENTER YOUR EMAIL ID. : ");
	scanf(" %s",last[e].email);
	cnt=e;
	e++;
	}
	double bal,amt;
	char v;
	pay:
	printf("\n\t\t\t\t\t\t\t\t Enter Amount :- ");
	scanf("%lf",&amt);
	if(amt<total)
	{
	printf("\n\t\t\t\t\t\t\t\t Amount Not Enough");
	goto pay;
	}
	else
	{
	bal=amt-total;
	printf("\n\t\t\t\t\t\t\t\tPayment Successfully");
	}
	fflush(stdin);
	printf("\n\t\t\t\t\t\t\t\tDo You Want Reciept (Y) :- ");
	scanf("%c",&v);
	if(v=='Y' || v=='y')
	{
	system("cls");
	cout << "\n\t\t\t\t\t\t-------------------------------------------------------------------------"<<endl;
	cout << "\t\t\t\t\t\t|                               PIZZA MANIA                             |"<<endl;
	cout << "\t\t\t\t\t\t-------------------------------------------------------------------------"<<endl;
	cout << endl;
	cout << "\t\t\t\t\t\t"<<__DATE__<<endl;
	cout << "\t\t\t\t\t\tTel  : 03-339-31206     \t\t\tFax   : 013-363-4357"<<endl;
	cout << "\t\t\t\t\t\tTill : R3451            \t\t\tOrder : M35042627"<<endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\tCashier :  DIVAS"<<endl;
	cout << "\t\t\t\t\t\tShift   :  SHIFT-1"<<endl;
	cout << endl;
	cout << "\n\t\t\t\t\t\t-------------------------------------------------------------------------"<<endl;
	cout << "\t\t\t\t\t\t| Description                                Qty       Price     Amount |"<<endl;
	cout << "\t\t\t\t\t\t-------------------------------------------------------------------------"<<endl;
	for(k=0;k<10;k++)
	{
 	if(q[k].pizza_quantity!=0)
 	{
 	
	printf("\t\t\t\t\t\t%s\t%d\t%.0f\t%.2f\n",q[k].pizza_name,q[k].pizza_quantity,q[k].pizza_price/q[k].pizza_quantity,q[k].pizza_price);
//	total=total+q[k].pizza_price;
 	}
	}
	printf("\t\t\t\t\t\t__________________________________________________________________________\n\t");
	printf("\t\t\t\t\tTOTAL                                                            %.2lf\n",total);
	printf("\t\t\t\t\t\tCASH                                                             %.2lf\n",amt);
	printf("\t\t\t\t\t\tBALANCE                                                          %.2lf\n",bal);
	cout << "                                                "<<endl;
	}
	fprintf(my,"\n%s                      %s                        %lld                      %s                        %.2lf",__DATE__,last[cnt].name,r,last[cnt].email,total);
	fclose(my);
	n:	
	printf("\n\n\t\t\t\t\t\t\t\t Do you want to make new order ( Y / N ) : ");
	scanf(" %c",&t);printf("\n\n\n\n\n");
	if(t=='Y' || t=='y')
		goto menu;
	else if(t!='n' && t!='N')
	{
		printf("\t\tEnter correct choice.........!!!\n\n");
		goto n;
	}
}

void welcome()
{
start:
char t;
Sleep(600);
system("color 03");
printf("\n\n\n");
printf("\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
printf("\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
printf("\t\t\t^^                                                                                                                   vv\n");
printf("\t\t\t^^       ***           ***   **********   ***            *******      *******     *****     *****   **********       vv\n");
printf("\t\t\t^^       ***           ***   ***      *   ***           ***   ***    ***   ***    *** **   ** ***   ***      *       vv\n");
printf("\t\t\t^^       ***           ***   ***          ***          ***          ***     ***   ***  ** **  ***   ***              vv\n");
printf("\t\t\t^^       ***           ***   ***          ***          ***          ***     ***   ***   ***   ***   ***              vv\n");
printf("\t\t\t^^       ***           ***   ******       ***          ***          ***     ***   ***    *    ***   ******           vv\n");
printf("\t\t\t^^       ***    ***    ***   ******       ***          ***          ***     ***   ***         ***   ******           vv\n");
printf("\t\t\t^^       ***   ** **   ***   ***          ***          ***          ***     ***   ***         ***   ***              vv\n"); 
printf("\t\t\t^^       ***  **   **  ***   ***          ***          ***          ***     ***   ***         ***   ***              vv\n");
printf("\t\t\t^^       *** **     ** ***   ***      *   ****    **    ***   ***    ***   ***    ***         ***   ***      *       vv\n");
printf("\t\t\t^^       *****       *****   **********   **********     *******      *******     ***         ***   **********       vv\n");
printf("\t\t\t^^                                                                                                                   vv\n");
Sleep(700);
printf("\t\t\t^^                                           *************     *******                                               vv\n");
printf("\t\t\t^^                                           *    ***    *    ***   ***                                              vv\n");
printf("\t\t\t^^                                                ***        ***     ***                                             vv\n");
printf("\t\t\t^^                                                ***        ***     ***                                             vv\n");
printf("\t\t\t^^                                                ***        ***     ***                                             vv\n");
printf("\t\t\t^^                                                ***        ***     ***                                             vv\n");
printf("\t\t\t^^                                                ***        ***     ***                                             vv\n");
printf("\t\t\t^^                                                ***        ***     ***                                             vv\n");
printf("\t\t\t^^                                                ***         ***   ***                                              vv\n");
printf("\t\t\t^^                                                ***          *******                                               vv\n");
printf("\t\t\t^^                                                                                                                   vv\n");
Sleep(700);
printf("\t\t\t^^    *****     ********  ********  ********    ****     ***         ***    ****    ***        ** ********   ****    vv\n");
printf("\t\t\t^^    **   **   *  **  *  ********  ********   ******    **  **    ** **   ******   ** *       ** *  **  *  ******   vv\n");
printf("\t\t\t^^    **    **     **          **        **   **    **   **   **  **  **  **    **  **  *      **    **    **    **  vv\n");
printf("\t\t\t^^    **   **      **         **        **    **    **   **     **    **  **    **  **   *     **    **    **    **  vv\n");
printf("\t\t\t^^    *****        **        **        **     ********   **           **  ********  **    *    **    **    ********  vv\n");
printf("\t\t\t^^    **           **       **        **      ********   **           **  ********  **     *   **    **    ********  vv\n");
printf("\t\t\t^^    **           **      **        **       **    **   **           **  **    **  **      *  **    **    **    **  vv\n");
printf("\t\t\t^^    **        *  **  *  ********  ********  **    **   **           **  **    **  **       * ** *  **  * **    **  vv\n");
printf("\t\t\t^^    **        ********  ********  ********  **    **   **           **  **    **  **        *** ******** **    **  vv\n");
printf("\t\t\t^^                                                                                                                   vv\n");
printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
printf("\t\t\t<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
printf("\n");
printf("\n\t\t\t\t\t\t\t\tPress Any key to Main menu :- ");
getch();
printf("\n\n\n\t\t\t\t\t\t\t\t  LOADING PLEASE WAIT  ");
   	    Sleep(500);
        printf( ".") ;
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
      	Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
        Sleep(500);
        printf(".");
		Sleep(500);
      system ("CLS");
}

int main()
{
	welcome();
	system("cls");
	main_menu();
	system("cls");
	thanks();
}
