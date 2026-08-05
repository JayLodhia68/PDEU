#include<stdio.h>
#include<conio.h>

int main() {

	clrscr();
	int a[20];
	int n,i,j;
	int curr,prev;

	printf("Enter size of array : ");
	scanf("%d",&n);

	printf("Insert %d Elements in Array : \n", n);
	//Getting Array
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}

	//Insertion Sort
	for(i=1;i<n;i++) {
		curr = a[i];
		prev = i-1;

		while(prev>=0 && a[prev]>curr) {
			a[prev+1] = a[prev];
			prev--;
		}
		a[prev+1] = curr;
	}

	//Printing Array
	for(i=0;i<n;i++) {
		printf("%d \t",a[i]);
	}

	getch();
	return 0;
}
