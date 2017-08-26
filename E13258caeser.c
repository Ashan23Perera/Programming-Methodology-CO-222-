#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<limits.h>
int rotateright(int ch);
int rotateleft(int ch);
int encode(int ch,int shift);

int main()
{
int i; 
printf("Enter shift: ");	//get the shift
scanf("%d",&i);

printf("Enter text:\n"); //get the text	to array
int array[200];
int c,k=0;
   while ((c=getchar())!= EOF){ 
   array[k]=(int)c;
   k=k+1;
}

int j;  //print the encoded text
 for(j=0;j<k;j++){
	printf("%c",encode(array[j],i));
}

printf("\n");
 return 0;
}//end  of main function

int rotateright(int ch){                                       //rotateright function
  if(((ch>='a') && (ch<='z'))||((ch>='A') && (ch<='Z')))
  {	
    if(((ch>='a') && (ch<'z'))||((ch>='A') && (ch<'Z'))) return ch+1;  
  
    if(ch=='z' ||ch=='Z') return ch-25;   
  } 
  else{
	  return ch;
  }
   return ch;
}

int rotateleft(int ch){                                        //rotateleft  function
  if(((ch>='a')&&(ch<='z'))||((ch>='A') && (ch<='Z'))){		
    if(((ch>'a')&&(ch<='z'))||((ch>'A')&&(ch<='Z'))) return ch-1;  
  
    if(ch=='a' ||ch=='A') return ch+25;
  }
  else{
	return ch;
  }
  return ch;
}	 	
	

int encode(int ch,int shift){           //encoded function
int charc;
 if(shift<0){
   int i,chr;	
   for(i=0;i<abs(shift);i++){
	    chr=rotateleft(ch);
	    ch=chr;
	}
	charc=ch; 
  }
  else{
	int i,chr;	
	for(i=0;i<shift;i++){
		chr=rotateright(ch);
		ch=chr;
    }		
     charc=ch;
   }  
   
  return charc;
} 	  


