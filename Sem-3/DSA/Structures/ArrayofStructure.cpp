#include<stdio.h>
#include<conio.h>

struct Student {
	char stud_name[50];
	int roll_no;
	char address[50];
};


int main() {
//	clrscr();

	struct Student arr[5];
	int i;
	
	for(i=0;i<5;i++) {
		printf("\n%d Student Details: \n",i+1);
		printf("Enter Name :");
		fgets(arr[i].stud_name, sizeof(arr[i].stud_name), stdin);
		
		printf("Enter Roll No. :");
		scanf("%d",&arr[i].roll_no);
		
		getchar();   
		
		printf("Enter Address :");	
		fgets(arr[i].address, sizeof(arr[i].address), stdin);
	}
	
	for(i=0;i<5;i++) {
		printf("\n%d Student Details: \n",i+1);
		
		printf("\nName : %s",arr[i].stud_name);
		printf("Roll No. : %d",arr[i].roll_no);
		printf("\nAddress : %s",arr[i].address);
	}
	
//	getch();
	return 0;
}
