#include<stdio.h>
#include<stdlib.h>

struct _retire_info{
int months;
double contribution;
double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement (int startAge,   //in months
                 double initial, //initial savings in dollars
                 retire_info working, //info about working
                 retire_info retired) //info about being retired
 {
     int i,j,age,amonths;
	 double balance=initial;
	 age=startAge/12;
	 amonths=startAge%12;
	 for(i=0;i<working.months;i++)
	 {
		 printf("Age %3d month %2d you have $%.2lf\n",age,amonths,balance);
		 amonths+=1;
		 if(amonths>11)
		 {
			 age+=1;
			 amonths=0;
		 }
		 balance=balance*(working.rate_of_return) + working.contribution + balance ;
	 }
	 	 for(j=0;j<retired.months;j++)
	 {
		 printf("Age %3d month %2d you have $%.2lf\n",age,amonths,balance);
		 amonths+=1;
		 if(amonths>11)
		 {
			 age+=1;
			 amonths=0;
		 }
		balance=balance*(retired.rate_of_return) - retired.contribution + balance ;
	 }
}

int main()
{
	retire_info w,r;
	//start condions
	int initialAge=327 ;
    double initialBal=21345.0;
	//working
	w.months=489;
    w.contribution=1000.0;
    w.rate_of_return=(4.5/1200);
	//retirement
	r.months=384;
    r.contribution=4000.0;
    r.rate_of_return=(0.01/12);
	
	retirement(initialAge,initialBal,w,r);
	
}




