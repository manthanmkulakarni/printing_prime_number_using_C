			/*To find prime numbers between two limits*/ 

#include<stdio.h>

int main()
{
int a,b,flag,i;
printf("Enter the limits to print the prime numbers\n");
scanf("%d%d",&a,&b);  //int a and b are the limits
printf(" The prime numbers between %d and %d are \n",a,b);
for(;a<b;a++)
{
  flag=0;
  
  for(i=2;i<a;i++)
   {
	if((a%i)!=0)
	{
	 flag=1; 	//indication that the number is not divisible by the given value of int 'i'

	}
	else
 	{
	 flag=0;	//exiting the loop as number is divisible by int 'i'
	 break;
 	}
   }
  if(flag==1)
  {
   printf("%d ,",a);
  }
}


return 0;
}
