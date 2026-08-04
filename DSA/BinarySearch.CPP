#include<stdio.h>
#include<conio.h>

int main() {
	clrscr();
	int a[10];
	int size = sizeof(a)/sizeof(a[0]);
	int element,low=0,high=size-1,mid;

	printf("Enter 10 Elements in Array (in Sorted manner) : \n");
	//Getting Array
	for(int i=0;i<10;i++) {
		scanf("%d",&a[i]);
	}
	
	//Getting Element to find in array
	printf("Enter Element to Search : ");
	scanf("%d",&element);
	
	//Binary Search
	while(low<=high) {
		mid=low + (high-low)/2;
		
		if(a[mid]==element){
			printf("Element found on index : %d",mid);
			break;
		}
		else if(a[mid] < element) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	getch();
	return 0;
}
