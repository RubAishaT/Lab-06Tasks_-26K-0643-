#include <stdio.h>

int main(){
	
	int seats[15] = {1,0,0,1,1,1,1,1,0,1,0,0,0,1,1};
	int i;
	int empty = 0;
	int booked = 0;
	int last_available = -1;
	
	for(i=0;i<15;i++){
		
		if(seats[i] == 0){
			empty++;
			if(empty == 1){
				printf("The first available seat number is %d\n", i);
			}
			last_available = i;
		}
		else{
			booked++;
		}
		
		
	}
	printf("%d\n",empty);
	printf("%d\n",booked);
	printf("Last available seat number is %d\n",last_available);
	
	
	
	int book_now;
	int index;
	for(index = 0;index<15;index++){
		
		if(seats[index] == 0){
			seats[index] = 1;
			book_now++;
			if(book_now == 3){
				break;
			}
		}
	
	}
	
	int j;
	
	printf("The final seating arrangement is:\n ");
	for(j=0;j<15;j++){
		
		printf("%d\n",seats[j]);
		
	}
	
	
	
	
	
	
	
	
	return 0;
}