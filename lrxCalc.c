#include <stdio.h>

int main(){
	int calc(int n);
	int n;
	
	printf("Please insert a number of letters: ");
	scanf("%d", &n);
	printf("The total number of all possible, complitely wrong combinations is %d.", calc(n));
	
	return 0;
	
}

int calc(int n){
	int temp = 0;
	
	if (n == 1) return 0;
	if (n == 2) return 1;
	if (n > 2) {
		temp = (n-1)*(calc(n-2)+calc(n-1));
	}
	return temp;
}
