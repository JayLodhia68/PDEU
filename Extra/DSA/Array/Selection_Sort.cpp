#include<stdio.h>
#include<conio.h>

int main() {
	int a[] = {4,1,2,5,3};
	int n = sizeof(a)/sizeof(a[0]);
	
	for(int i=0;i<n-1;i++) {
		int small_index = i;
		for(int j=i+1;j<n;j++) {
			if(a[j]<a[small_index]) {
				small_index = j;
			}
		}
		int temp = a[i];
		a[i] = a[small_index];
		a[small_index] = temp;
	}
	
	for(int i=0;i<n;i++) {
		printf("%d \t",a[i]);
	}
}
