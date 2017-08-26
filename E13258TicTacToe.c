#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

int check_column(int column[][3],int n){  //function to check column
if((column[0][n]==column[1][n])&&(column[0][n]==column[2][n]))
	return 1;
else 
	return 0;
}

int check_row(int row[][3],int n){    //function to check rows
if((row[n][0]==row[n][1])&&(row[n][0]==row[n][2]))
	return 1;
else 
    return 0;
}

int check_diagonal(int diagonal[][3],int n){      //function for check diagonally
if((diagonal[0][0]==diagonal[1][1])&&(diagonal[0][0]==diagonal[2][2]))
	return 1;
else if((diagonal[0][2]==diagonal[1][1])&&(diagonal[0][2]==diagonal[2][0]))
    return 1;
else
    return 0;
}

int main()   //main function
{	
int array[3][3];	
int k=0;  
printf("Please enter the board:\n");
int i;
 for(i=0;i<3;i++){  //read the user inputs
	int j; 
	 for(j=0;j<3;j++){
	 scanf("%d",&array[i][j]);	 
     if(array[i][j]>2) k=1;       //check if there is a invalid input
  } 
}
 
if(k==1){                           //if this not a valid input
  printf("Enter valid input.\n");
}

else{   
	                           //if it is a valid input
printf("Here is the board:\n");
 for(i=0;i<3;i++){  //print the board
     int j;	 
	 for(j=0;j<3;j++){
		 
	  if(array[i][j]==1) printf("X ");	  //print X for value 1
     
	 else if(array[i][j]==0)printf("O "); //print 0 for value 0
	 
	 else if(array[i][j]==2) printf(". "); //print . for value 2
	                                     		  
	 }
	printf("\n");	 
 }//end of the loop 
 
for(i=0;i<3;i++){                  //following loop check if who is the winneres
int a=check_column(array,i);
int b=check_row(array,i); 
int c=check_diagonal(array,i);

     if(a==1 && array[0][i]==1){ printf("Crosses win\n");
	  break;
	 }
else if(a==1 && array[0][i]==0){ printf("Noughts win\n");
break;
}
else if(b==1 && array[i][0]==1){ printf("Crosses win\n");
break;
}
else if(b==1 && array[i][0]==0){ printf("Noughts win\n");
break;
}
else if(c==1 && array[1][1]==1){ printf("Crosses win\n");	
break;
} 
else if(c==1 && array[1][1]==0){ printf("Noughts win\n");  	
break;
}
else if(a==0 && b==0 && c==0){ printf("There are no winners\n");
break;
}

  }//end of the loop

}//end of the else statement  
  return 0;
}
