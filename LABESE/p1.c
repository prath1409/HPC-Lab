#include <omp.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
  int n, reversed = 0, remainder, original;
  printf("Enter an integer: ");
  scanf("%d", &n);
  original = n;
  //int argc, char* argv[]
  //#pragma omp parallel
  //{
  	while (n != 0) {
        	remainder = n % 10;
        	reversed = reversed * 10 + remainder;
        	n /= 10;
  	}
  //}
  if (original == reversed)
        printf("%d is a palindrome.", original);
  else
        printf("%d is not a palindrome.", original);

    return 0;
} 	
