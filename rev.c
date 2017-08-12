#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100], temp;
   int k,l= 0;
 
   printf("\nEnter the string :");
   gets(str);
 
   k= 0;
   l = strlen(str) - 1;
 
   while (k < l) {
      temp = str[k];
      str[k] = str[l];
      str[l] = temp;
      k++;
      l--;
   }
 
   printf("\nReverse string is :%s", str);
   return (0);
}
