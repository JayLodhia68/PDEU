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
	
	for(i=0;i<n-1;i++) {
		int small_index = i;
		for(j=i+1;j<n;j++) {
			if(a[j]<a[small_index]) {
				small_index = j;
			}
		}
		int temp = a[i];
		a[i] = a[small_index];
		a[small_index] = temp;
	}
	
	for(i=0;i<n;i++) {
		printf("%d \t",a[i]);
	}
	
	getch();
	return 0;
	
}
