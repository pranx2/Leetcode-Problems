#include<stdio.h>
#include<stdlib.h>
int* sum(int *nums, int Size, int tgt);
   int main (){
      int nums[]={2,7,11,15};
      int Size=4;
      int tgt = 9;
      int* index= sum(nums , Size ,tgt);
      printf("[%d,%d]",index[0],index[1]);
      
   }
   int* sum(int *nums, int Size, int tgt){
      int *arr;
      arr = (int *) malloc (2*sizeof(int));
      int num1 = 0;
      int num2 = 0;
      for (int i = 0; i < Size; i++){
         for (int j = 1 ; i < Size; i++){
            if (nums[i] + nums [j] == tgt){
              num1 = i;
              num2 = j;
            }
         }
      }
   arr[0]= num1;
   arr[1]= num2;
      return arr;
   }