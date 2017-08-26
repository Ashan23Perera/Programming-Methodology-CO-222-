#include<stdio.h>
#include<math.h>

int main()
{

 int a,b,c;
 printf("Enter the Coefficient :");
 scanf("%d %d %d",&a,&b,&c);
 
//check for the complex roots 
if((b*b-4*a*c)<0){
  float complex=sqrt(4*a*c-b*b)/(2.0*a);	
  printf("The solutions are %.2f-%.2fi and %.2f+%.2fi \n",-b/(2.0*a),complex,-b/(2.0*a),complex);
}
//if it is not check for the two real roots 
else if((b*b-4*a*c)>0){
  float root1=(-b-sqrt(b*b-4*a*c))/(2.0*a);
  float root2=(-b+sqrt(b*b-4*a*c))/(2.0*a);
   printf("The solution are %.2f and %.2f:\n",root1,root2);
}   
//if it is not check for one root
else if((b*b-4*a*c)==0)
  printf("The solutions are: %.2f \n",-b/(2.0*a));

return 0;
}
