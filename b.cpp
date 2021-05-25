# include<stdio.h>
int main(){
   int l;
   scanf("%d",&l);
   int ar[l];
   for (int i = 0; i < l; ++i) {
      scanf("%d", &ar[i]);
   }
   for (int i=0; i < l; i++)
      printf("%d ",ar[i]);
}
