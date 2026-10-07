#include <stdio.h>

int main(){
	
	int num;
	int original;
	int reversed = 0;
	int remainder;
	
	printf("Enter a num: ");
	scanf("%d",&num);
	
	original = num;
	
	while(num>0){
		
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num = num/10;
		
	}
	
	if(original == reversed){
		printf("It is a palindrome!");
	}
	else{
		printf("Not a palindrome!");
	}
	
	
	return 0;
}