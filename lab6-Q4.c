#include <stdio.h>

int main(){
	
	int marks[15] = {50,78,64,96,39,48,99,98,97,66,100,56,32,98,100};
	int i;
	int already_100 = 0;
	int diff;
	int pushed_to_100 =0;
	int bonus = 0;
	
	
	
	for(i=0 ; i<15 ; i++){
		
		if(marks[i] < 96){
			marks[i] = marks[i] + 5;
			bonus++;
		}
		else if(marks[i]==100){
			already_100++;	
		}
		else{
			diff = 100 - marks[i];
			marks[i] = marks[i] + diff;
			pushed_to_100++;
			bonus++;
		}
		
	}
	
	printf("The number of students who already had 100 are %d\n",already_100);
	printf("The number of students who were pushed to 100 are %d\n",pushed_to_100);
	printf("The number of students who got bonus overall are %d\n",bonus);
	
	int sum = 0;
	float avg;
	int max = marks[0];
	int min = marks[0];
	int range;
	
	
	for(i=0 ; i<15 ; i++){
		
		sum = sum + marks[i];
		if(marks[i]>max){
			max = marks[i];
		}
		if(marks[i]<min){
			min = marks[i];
		}
		
	}
	avg = sum/15.0;
	printf("New class avg after adding bonus points is %f\n",avg);
	range = max - min;
	printf("The range is %d\n",range);

	
	return 0;
}