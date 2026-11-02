#include <stdio.h>
int main()
{
int a[100];
int size,pos,num;
printf("Enter the array size:\n");
scanf("%d",&size);
printf("Enter %d elements :\n",size);
for(int i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("Elements in array are:\n");
for(int i=0;i<size;i++){
printf("%d",a[i]);
}
printf("\n");
printf("Enter the position:");
scanf("%d",&pos);
printf("Enter the element");
scanf("%d",&num);
for(int i=size-1;i>=pos-1;i--){
a[i+1]=a[i];
}
a[pos-1]=num;
size++;
printf("Updated array:\n");
for(int i=0;i<size;i++)
{
printf("%d",a[i]);
}
return 0;
}
