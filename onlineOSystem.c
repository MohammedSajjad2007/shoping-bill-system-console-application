#include<stdio.h>

int main()
{
   int customerno = 0 , netvalue = 0 , dissamm = 0 , totalbill = 0;
   char password;
   
   printf("Enter the customer number- ");
   scanf("%d",&customerno);
   printf("Enter the password- ");
   scanf("%s",&password);
   printf("Enter the total bill- ");
   scanf("%d",&totalbill);
   printf("\n\n\n-------------------------\n");
   printf("|    FINAL    BILL      |\n");
   printf("-------------------------\n");
   if(customerno%2 == 0)
   {
   	printf("Cutomer number is - %d \n",customerno);
   	printf("Reguler customer \n");
   	dissamm = totalbill * 0.1;
   	netvalue = totalbill - dissamm;
   	printf("Total bill is - %d \n",totalbill);
   	printf("Disscount ammount is - %d \n",dissamm);
   	printf("The net value is- %d \n",netvalue);
   }  
   else
   {
   	printf("Customer number is - %d \n",customerno);
   	printf("Non-Reguler Customer \n");
    dissamm = totalbill * 0.05;
   	netvalue = totalbill - dissamm;
   		printf("Total bill is - %d \n",totalbill);
   	printf("Disscount ammount is - %d \n",dissamm);
    printf("The net value is- %d \n",netvalue);
   }
	return 0;
}