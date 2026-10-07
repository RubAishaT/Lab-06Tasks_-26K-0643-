#include <stdio.h>

int main(){
	
	
	int amount;
	int transaction_count = 0;
	int total_amount = 0;
	
	printf("Enter the amount: ");
	scanf("%d",&amount);
	
	while(amount != 0){
		
		printf("ATM processing it!\n");
		transaction_count++;
		
		total_amount = total_amount + amount;
		
		printf("Enter the amount: ");
	    scanf("%d",&amount);
	    	
	}
	printf("Session ends!");
	printf("Summary:\n");
	printf("The total number of transactions made within a session is %d\n",transaction_count);
	printf("The total amount withdrawn within a session is %d\n",total_amount);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}