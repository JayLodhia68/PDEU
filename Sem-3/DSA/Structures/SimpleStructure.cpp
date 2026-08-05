#include<stdio.h>
#include<conio.h>

struct Student {
	char stud_name[50];
	int roll_no;
	char address[50];
};


int main() {
//	clrscr();

	struct Student s1;
	
	printf("Enter Name :");
	fgets(s1.stud_name, sizeof(s1.stud_name), stdin);
	
	printf("Enter Roll No. :");
	scanf("%d",&s1.roll_no);
	
	getchar();   
	
	printf("Enter Address :");	
	fgets(s1.address, sizeof(s1.address), stdin);
	
	
	printf("\nName : %s",s1.stud_name);
	printf("Roll No. : %d",s1.roll_no);
	printf("\nAddress : %s",s1.address);
	
//	getch();
	return 0;
}
