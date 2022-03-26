//Write a program in C to print all unique elements in an array
//https://www.w3resource.com/c-programming-exercises/array/c-array-exercise-6.php
//C Programming  Exercises No.6


//TEMPLATE
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARR_SIZE 10
#define LEN_ARR(x) sizeof(x) / sizeof(x[0])
// 0 is false 1 is true


void func(){

}

int main(){
  int n;
  int sum = 0;
  printf("Enter the size of the array : ");
  scanf("%d",&n);
  int arr[n];
  for(int i = 0; i < n;i++){
  printf("Enter the -%d of the array : ",i + 1);
  scanf("%d",&arr[i]);
}
  int numbers[10] = {0};

  for(int i = 0; i < n;i++){
    numbers[arr[i]]++;
    }
    printf("The unique elements found in the array are : \n");
    for(int i = 0; i < 10;i++){
      if(numbers[i] == 1){
        printf("%d ",i);

      }
    }
    return 0;
  }
