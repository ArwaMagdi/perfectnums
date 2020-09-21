#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum=0;
   int Num;
   int x=1;
   printf("Enter the number you want to check\n");
   scanf("%d",&Num);
   printf("You entered %d\n",Num);

   for(x=1;x<Num;x++){
   if (Num%x==0){
    sum=sum+x;
    printf("%d\n",sum);
  }


}
 if(sum==Num){
    printf("%d is a perfect  number",Num);

   }
   else{
    printf("%d is not a perfect number",Num);
   }

}




