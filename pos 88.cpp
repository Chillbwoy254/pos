//point-of-sale system

#include<stdio.h>

    int main(void){
	int code,qty;
	float price,amt,totalAmt,cash,change;
	char addAnother;
	
	
	
	do{
	
		printf("======================\n");
		printf("KWA KEVO MENU'\n");
		printf("======================\n");
		printf("[1] chipo mwitu\t\tshs 120.00\n");
		printf("[2] chapo\t\tshs 20.00\n");
		printf("[3] chai\t\tshs 30.00\n");
		printf("[4] katakata\t\tshs 50.00\n");
		printf("[5] mbosho\t\tshs 50.00\n");
	 
  	  printf("\nEnter code\t\t:");
  	  scanf("%d", &code);
  	  printf("\nEnter Quantity\t\t:");
  	  scanf("%d", &qty);
  	  
  	  switch(code){
			case 1: price = 120.00;
   			     break;
			case 2: price = 20.00;
   			     break;
			case 3: price = 30.00;
   				 break;
			case 4: price = 50.00;
   				 break;
			case 5: price = 50.00;
   			     break;	
		}
		amt = price*qty;
		printf("\nAmount\t\t: %.2f", amt);
		
		totalAmt = totalAmt+amt;
		printf("\nTotal Amount\t: %.2f");
	}while (addAnother == 'y');
	
		do{
			
		printf("\ncash paid\t:");
		scanf("%f", &cash);
		}while (cash < totalAmt);
	
	
	change = cash - totalAmt;
	printf("\nchange\t\t: %.2f",change);
	printf("\n\nWELCOME AGAIN!");
}