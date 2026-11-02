#include<stdio.h>
void main(){
int inputArray[100],elementCount,counter,num;
printf("enter number of elements in array\n");
scanf("%d",&elementCount);
printf("enter %d numbers \n",elementCount);
for(counter=0;counter<elementCount;counter++){
scanf("%d",&inputArray[counter]);
}
printf("Enter a number to search in array\n");
scanf("%d",&num);
for(counter=0;counter<elementCount;counter++){
if(inputArray[counter]==num){
printf("number %d found at index %d\n",num,counter);
break;
}
}
if(counter==elementCount){
printf("Number %d Not present in input Array\n",num);
}
}
