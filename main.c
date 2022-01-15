#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int checkans(){
	char answer = 'o';
	while (answer != 'n'  && answer != 'y'){
		printf("Wanna do it again?Y/N\n");
		scanf(" %c", &answer);
	}
	if (answer == 'y'){
		dothething();
	}
	else if (answer == 'y'){
		return 1;
	}
	return 0;
}
void dothething(){
	int n;
	int *a;
	
	printf("How many numbers do you want to enter?\n");
	scanf ("%d", &n);
	
	a = (int*)calloc(n, sizeof(int));
	printf("Enter %d numbers:\n", n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	printf("The numbers you entered are:\n");
	for (int i = 0; i < n; i++){
		printf("%d\n", a[i]);
	}
	free(a);
	
	
}
int main() {
	dothething();
	while (checkans() == 0){
		checkans();
	}
	
	
	
	return 0;
}