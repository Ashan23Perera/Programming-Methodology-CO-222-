#include<stdio.h>
int main(int argc,char** argv){
int k,co=0;
for(k=0;argv[1][k]!=' ';k++)
                 co=co+1;


int i,number=0;
 for(i=2;i<argc;i++){

	int j,count=0; 
	 for(j=0;j<co+5;j++){
		 if(argv[1][j]==argv[i][j]) count=count+1;	   
	}
	if(count==co)
	    number=number+1;
 }

printf("The occurences of %s in the text is : %d.\n",argv[1],number);

return 0;
}
