#include<stdio.h>
#include<conio.h>

int main() {
	
	int a[] = {4,1,2,5,3};
	int n = sizeof(a)/sizeof(a[0]);
	int curr,prev;
	
	for(int i=1;i<n;i++) {
		curr = a[i];
		prev = i-1;
		
		while(prev>=0 && a[prev]>curr) {
			a[prev+1] = a[prev];
			prev--;
		}
		a[prev+1] = curr;
	}
	
	for(int i=0;i<n;i++) {
		printf("%d \t",a[i]);
	}
	
	return 0;
}
