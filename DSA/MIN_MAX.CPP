#include<stdio.h>
#include<conio.h>

int main() {
	clrscr();
	int a[10];
	int max,min,i;
	
	printf("Insert 10 Elements in Array : \n");
	//Getting Array
	for(i=0;i<10;i++) {
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	max=a[0];
	
	//Maximum
	for(i=0;i<10;i++) {
		if(a[i]>=max) {
			max = a[i];
		}
	}

	printf("Maximum : %d \n",max);

	//Minimum
	for(i=0;i<10;i++) {
		if(min>=a[i]) {
			min = a[i];
		}
	}

	printf("Minimum : %d",min);
	getch();
	return 0;
}
