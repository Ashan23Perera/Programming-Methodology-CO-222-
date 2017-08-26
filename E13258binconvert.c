#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char** argv)
{  
if((argv[1][0]=='B')&&(argv[2][0]=='B'))      //convert binary in to binary
     printf("%s\n",argv[3]);  
if((*argv[1]=='I')&&(*argv[2]=='I'))      //Convert integer in to integer
       printf("%s\n",argv[3]); 
if((*argv[1]=='H')&&(*argv[2]=='H'))      // convert hexadecimal in to hexadecimal  
	   printf("%s\n",argv[3]);
if((*argv[1]=='F')&&(*argv[2]=='F'))      //convert single precision in to single precision
        printf("%s\n",argv[3]);
if((*argv[1]=='I')&&(*argv[2]=='B')){     //convert Decimal number in to Binary
     int i,array[32];;
     int num1=atoi(argv[3]);   //convert the Integer in to binary
     int num=abs(num1);
     for(i=0;i<32;i++){
		 if(num%2==1){
		   array[i]=1;
		  num=(num-(num%2))/2;
	     }
	     else{
		array[i]=0;	 
		  num=num/2; 	 
	    }
   	 }
   	 if(num1>0){          //print if positive number
	 for(i=31;(i<=31)&&(0<=i);i--)
	    printf("%d",array[i]);
	} 
	 else{        //print if negative number
		printf("1");
	   for(i=30;(i<=30)&&(0<=i);i--)
	    printf("%d",array[i]);	 
	}   
	    printf("\n");                                                   
}
if((argv[1][0]=='B')&&(argv[2][0]=='I')){    //convert Binary in to Decimal   
     if(argv[3][0]=='0'){     //if number is positive
		int i,sum=0;
		for(i=31;i>0;i--){   
	      if(argv[3][i]=='1')
		    sum=sum+(int)pow(2.0,(31-i));	     
		}
	  	printf("%d\n",sum);
	}
	else{            //if number is negative
		int i,sum=0;
		for(i=31;i>0;i--)
		{   
			if(argv[3][i]=='1')
			  sum=sum+(int)pow(2.0,(31-i));
		}
	  	printf("-%d\n",sum);
	}		
}
if((argv[1][0]=='F')&&(argv[2][0]=='I')){   //Convert single presision  in to integer
	int num=atoi(argv[3]);
      printf("%d\n",num);
  }
	if((argv[1][0]=='I')&&(argv[2][0]=='F'))  //Convert integer in to single presision  
  {
	 float num=atof(argv[3]);
      printf("%0.2f\n",num);  
  }
  
  if((argv[1][0]=='I')&&(argv[2][0]=='H')){  //convert Decimal in to Hexadecimal
     int num=atoi(argv[3]);
     printf("%0xX\n",num);	 
}
  
if((argv[1][0]=='B')&&(argv[2][0]=='F')){  //convert binary in to single precision float
	 int i,sum=0; //get the significand part	  
  for(i=1;i<9;i++){
	  if(argv[3][i]=='1')
	    	sum=sum+(int)pow(2.0,8-i); 
	 }
	 sum=sum-127;	 
	  double floatnum=0.0;   //get the exponent part
  for(i=9;i<31;i++){
	  if(argv[3][i]=='1')
	    floatnum=floatnum+pow(2.0,(8-i)); 
	  }
	  floatnum=floatnum+1;
	  printf("%f\n",floatnum);	 
	 if(argv[3][0]=='1')     //print the float number if negative
    	 printf("%0.2f\n",-1*floatnum*pow(2,sum));
	 else               //print the float number if positve   
        printf("%0.2f\n",floatnum*pow(2,sum));   
}

if((argv[1][0]=='H')&&(argv[2][0]=='I')){       //convert Hexadecimal in to Decimal   
    char array[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
      long int i,sum=0;
       for(i=0;i<8;i++){       
		   long int j;
		  for(j=0;j<16;j++){
		   if(argv[3][i]==array[j])  
		    sum=sum+((int)pow(16.0,(7-i)))*j;
		   }
		 }	  
		 printf("%ld\n",sum);
}

  return 0;
}

