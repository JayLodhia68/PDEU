#include<stdio.h>
#include<conio.h>

int main() {
	clrscr();
	int a[10];
	int element,i;

	printf("Enter 10 Elements in Array : \n");
	//Getting Array
	for(i=0;i<10;i++) {
		scanf("%d",&a[i]);
	}

	//Getting Element to find in array
	printf("Enter Element to Search : ");
	scanf("%d",&element);

	//Linear Search
	for(i=0;i<10;i++) {
		if(a[i]==element) {
			printf("Element %d found on index %d",a[i],i);
		}
	}
	getch();
	return 0;
}
