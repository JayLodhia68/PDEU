#include<stdio.h>
#include<conio.h>

int main() {
	clrscr();
	int a[20];
	int n,i,j;
	
	printf("Enter size of array : ");
	scanf("%d",&n);

	
	
	printf("Insert %d Elements in Array : \n", n);
	//Getting Array
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	
	//Bubble Sort
	for(i=0;i<n-1;i++) {
		for(j=0;j<n-i-1;j++) {
			if(a[j]>a[j+1]) {
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}

	//Print Sorted Array
	for(i=0;i<n;i++) {
		printf("%d \t",a[i]);
	}

	getch();
	return 0;
}
