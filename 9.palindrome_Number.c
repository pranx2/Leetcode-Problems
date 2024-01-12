#include<stdio.h>
#include<stdbool.h>//For Boolian Data type;
bool isPalindrome(int x);
int main(){
   int x = 121;//Example: 121;
   printf("%i",isPalindrome(x));

}
bool isPalindrome(int x){
   int num,sum=0;
   long int p = x;//Store Largest numbers;
   while (x>0){
      num = x%10;
      sum = num + (sum*10);
      x=x/10;
   }
   if (p ==sum  ){
      return true;//For true = 1;
   }
   else return false;//For False = 0; 
}