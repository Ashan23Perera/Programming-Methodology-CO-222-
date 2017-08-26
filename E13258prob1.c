#include<stdio.h>
int main()
{	
 char array[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 
 int user;
  
 scanf("%d",&user);        //get th user input
 printf("Enter N:\n");
  
 int i;                      //print the order until user enterd number
  for(i=0;i<user;i++){
	 int j;
	  for(j=0;j<=i;j++){
		  printf("%c",array[j]);
		 } 
		 printf("\n");
	} 
	
  for(i=(user-1);0<=i;i--){
	 int j;
	  for(j=0;j<=i;j++){
		  printf("%c",array[j]);
		 } 
		 printf("\n");
	} 
   
  return 0;
}
