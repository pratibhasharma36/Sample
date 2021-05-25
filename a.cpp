# include<stdio.h>
int facto(int a){
   int fact=1,j;
   for(j=a;j>=1;j--)
      fact=fact*j;
   return fact;

}
int main(){
   int n;
   float res=1;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
      if (i%2!=0)
         res =res + 1.0/facto(i);
      else
         res= res - 1.0/facto(i);
   printf("%f\n",(1 / res));
   
}