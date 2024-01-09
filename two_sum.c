#include<stdio.h>
#include<stdlib.h>
int* twosum(int* nums, int size,int target);
    int main (){
        int size=0;
        int nums[size];
        int target;
        // int* returnSize = 2;
        scanf("%d",&size);//Enter array size;
        for (int i = 0; i < size; i++){
            scanf("%d",&nums[i]);//Enter array;
        };
        scanf("%d",&target);//Enter Target;
        int* index = twosum(nums , size , target);
        printf("[%d,%d]",index[0],index[1]);
    }
    //leetcode code starts Form Here! to submission add //int* returnSize=2; into the function parameter; 
    int* twosum(int*  nums, int size,int target){
        // *returnSize = 2; //uncomment this line for submission; 
        int *arr = (int *) malloc(2 * sizeof(int));//allocate memory;
        for (int i = 0; i < size ; i++){
            for(int j = 0; j < size ; j++){
                if((nums[i]+ nums[j] == target) && (i!=j)){
                        arr[0] = i;
                        arr[1] = j;
                }
            }
        }
            return arr;//return malloc;
    }