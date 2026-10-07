#include <stdio.h>

int main(){
	
	int Gen[10] = {1,1,0,0,0,0,0,0,0,0};
	int i;
	int next_gen;
	
	for(i=1;i<9;i++){
		
		next_gen = Gen[i] + Gen[i-1];
		Gen[i+1] = next_gen;

	}
	
	int index;
	
	for(index=0;index<10;index++){
		
		printf("Generation growth is %d\n",Gen[index]);
		
	}
	

	return 0;
}