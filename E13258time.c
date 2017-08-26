#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter the start time :"); 
   scanf("%d",&a);     //get the start time
  printf("Enter the duration :"); 
   scanf("%d",&b);     //get the time duration
   
   int hours1=a-(a%100);             
   int min1=a%100;        
 
   int hours2=b-(b%100);   
   int min2=b%100;       
    
	int min=min1+min2; //calculate the minutes

//following if statement check min>=60	
  if(min>=60){
   	 int hours=hours1+hours2+100+(min%60);    

	 if(hours>=2400)
		 printf("End Time :%04d.",(hours%2400));
	 else
    	 printf("End Time :%04d.",hours);	  
  }
  //if it is not execute else(min<60)
  else{
	 int hours=hours1+hours2+min;

	 if(hours>=2400)
		 printf("End Time :%04d.",(hours%2400));
	 else
    	 printf("End Time :%04d.",hours);
  }
   
   return 0;
}