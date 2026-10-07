#include <stdio.h>

int main(){
	
	int transfers[10] = {5000,50,12000,500000,20,8000,25000,300,450000,15000};
	int i;
	float sum=0;
	int total_flagged=0;
	int normal_transfers=0;
	int largest_transfer = 0;
	float avg;
	
	for(i=0;i<10;i++){
		
		if(transfers[i] < 100){
			printf("Such transfer money is test transaction\n");
			total_flagged++;
		}
		else if(transfers[i] > 200000){
			printf("Such transfer money is suspicious transaction\n");
			total_flagged++;
		}
		else{
			normal_transfers++;
			sum = sum + transfers[i];
		}
		
		if(transfers[i] > largest_transfer){
			largest_transfer = transfers[i];
		}
		
	}
	
	printf("The total flagged transactons are %d\n",total_flagged);
	avg = sum/normal_transfers;
	printf("The average of the normal transactions is %f\n",avg);
	printf("The largest transaction is %d\n",largest_transfer);
	
	return 0;
	
	
}