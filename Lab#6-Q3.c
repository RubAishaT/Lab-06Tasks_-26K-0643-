#include <stdio.h>


int main(){
	
	int stock[10] = {10,12,4,3,9,1,6,20,4,12};
	int minimum[10] = {5,20,6,1,7,2,4,10,2,15};
	int i;
	int Quantity_to_order;
	int largest = -1;
	int gap= 0;
	int total_quantity = 0;
	
	for(i=0 ; i<10 ; i++){
		
		if(stock[i] < minimum[i]){
			printf("Product number %d needs reordering!\n",i+1);
			Quantity_to_order = minimum[i] - stock[i];
			printf("Product %d needs %d more pieces\n",i+1,Quantity_to_order);
			total_quantity = total_quantity + Quantity_to_order;
			if(Quantity_to_order > gap){
				gap = Quantity_to_order;
				largest = i+1;
			}
				
		}
		
	}
	
	printf("Product %d needs largest reorder\n",largest);
	printf("The total reorder quantity is %d\n",total_quantity);
	
	
	return 0;
}