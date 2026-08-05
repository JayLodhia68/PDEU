#include<stdio.h>
#include<conio.h>


struct Employee {
	int emp_id;
	int salary;
	char emp_name[50];
};
	
struct Organization {
	int org_id;
	char org_name[30];
	
	struct Employee emp[2];
};

int main() {
//	clrscr();

	struct Organization o[2];
	int i,j;
	
	for(i=0;i<2;i++) {
		
		printf("\n%d Organization : \n",i+1);
		
		printf("Enter Organization ID : ");
		scanf("%d",&o[i].org_id);
		
		getchar();
		
		printf("Enter Organization Name: ");
		fgets(o[i].org_name,sizeof(o[i].org_name),stdin);
		
		
		
		for(j=0;j<2;j++) {
			
			printf("%d Employee : \n",j+1);
			
			printf("Enter Employee ID : ");
			scanf("%d",&o[i].emp[j].emp_id);
			
			getchar();
			
			printf("Enter Employee Name : ");
			fgets(o[i].emp[j].emp_name,sizeof(o[i].emp[j].emp_name),stdin);
			
			
			
			printf("Enter Salary : ");
			scanf("%d",&o[i].emp[j].salary);
			
			getchar();
			
		}
				
	}
	
	for(i=0;i<2;i++) {
		printf("\n%d Organization : \n",i+1);
		
		printf("Organization ID : %d",o[i].org_id);
		
		printf("\nOrganization Name: %s",o[i].org_name);
		
		for(j=0;j<2;j++) {
			
			printf("\n%d Employee : \n",j+1);
			
			printf("Employee ID : %d",o[i].emp[j].emp_id);
			
			printf("\nEmployee Name : %s",o[i].emp[j].emp_name);
			
			printf("Salary : %d\n",o[i].emp[j].salary);
			
		}
	}

//	getch();
	return 0;
	
}
