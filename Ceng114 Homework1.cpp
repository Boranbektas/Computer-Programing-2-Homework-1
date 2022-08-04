#include <stdio.h>
void setPercentages();
float setHomework();
float setMidterm();
float setFinal();
int getTotalgrade(int x,int y,int z);
char lettergrade(int x);
float Homework,Midterm,Final;

int main (void){
	char choice='y';
	int check=1;
	float sum1=0,sum2=0,sum3=0;
	int first=0,second=0,third=0,std=1,x,y,z;
	printf("Welcome to the grading system!!!!\n");
	printf("Please set Homework,midterm and final percetages first.");
	setPercentages();
	while(check==1){
		printf("\nStudent:%d Enter homework midterm and final grades for the first course: ",std);
		scanf("%d %d %d",&x,&y,&z);
		first=getTotalgrade(x,y,z);
		sum1=sum1+first;
	
		printf("\nStudent:%d Enter homework midterm and final grades for the second course: ",std);
		scanf("%d %d %d",&x,&y,&z);
		second=getTotalgrade(x,y,z);
		sum2=sum2+second;
	
		printf("\nStudent:%d Enter homework midterm and final grades for the third course: ",std);
		scanf("%d %d %d",&x,&y,&z);
		third=getTotalgrade(x,y,z);
		sum3=sum3+third;
		
		printf("\nGrade for first course:%c (%d)",lettergrade(first),first);
		printf("\nGrade for second course:%c (%d)",lettergrade(second),second);
		printf("\nGrade for third course:%c (%d)",lettergrade(third),third);
		
		
		printf("\nDo you want to continue y/n?????");
		scanf(" %c",&choice);
		if(choice=='y'){
			std++;
		}
		else if(choice=='n'){
			check--;
		}
}
		printf("First course average: %f\n",(sum1/std));
		printf("Second course average: %f\n",(sum2/std));
		printf("Third course average: %f\n",(sum3/std));




	return 0;
}


void setPercentages(){
	int choice=0;
	float Total=0.0;
	while(choice<=0){
	Homework=setHomework();
	Midterm=setMidterm();
	Final=setFinal();
	choice++;
	Total=Homework+Midterm+Final;
	if(Total!=100){
		printf("\nPercentage total is not equal to 100.Try again.");
		choice--;
		}
		
	}
}

float setHomework(){
	float x;
	printf("\nEnter percentage for Homework\n");
	scanf("%f",&x);
	return x;
}
float setMidterm(){
	float x;
	printf("\nEnter percentage for Midterm\n");
	scanf("%f",&x);
	return x;
}

float setFinal(){
	float x;
	printf("\nEnter percentage for Final\n");
	scanf("%f",&x);
	return x;
}

int getTotalgrade(int x,int y,int z){
	float total;
	total=((x*Homework)/100)+((y*Midterm)/100)+((z*Final)/100);
	return total;
}

char lettergrade(int x){
	if(x>=90)
		return'A';
	else if(x>=75 && x<=89)
		return 'B';
	else if (x>=60 && x<=74)
		return 'C';
	else if(x>=45 && x<=59)
		return 'D';
	else
		return 'F';
}




