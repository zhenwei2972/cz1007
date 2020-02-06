#include <stdio.h>
//By Yong Qiang
int platform1D(int ar[], int size);
int main()
{
 int i,b[50],size;
 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i<size; i++)
 scanf("%d",&b[i]);
 printf("platform1D(): %d\n", platform1D(b,size));
 return 0;
}
int platform1D(int ar[], int size)
{
  int i,count = 1,total, pre;
  for (i = 0; i<size;i++){
    if(pre != ar[i]){
        if (total < count)  total = count;
        count = 1;
    }
    if (pre == ar[i]) count ++;
    pre = ar[i];
    //printf("count :%d Ar: %d pre: %d\n",count,ar[i],pre);
  }
  return count = (total > count)? total : count;
   
} 
//test case 3 and 4 failing 
