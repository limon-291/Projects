// A tiny project on calculator operations: 


#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>



void add(float arr[], int n){
  float sum = 0;
  for (int i = 0; i < n; i++){
    sum += arr[i];
  }
  printf("Sum of these %d numbers= %.2f\n", n, sum);
}



void sub(float n1, float n2){

  printf("Substraction : %.2f - %.2f = %.2f", n1, n2, (n1 - n2));
}



void mult(float arr[], int n){

  float multiplication = 1;
  for (int i = 0; i < n; i++){
    multiplication *= arr[i];
  }

  printf("Multiplication of these %d numbers= %.2f\n", n, multiplication);
}



void division(float n1, float n2){

  printf("Substraction : %.2f / %.2f = %.2f", n1, n2, (n1 / n2));
}



void root(float n){

  printf("\nSq. root of %.2f = %.2f\n", n, sqrt(n));
}



void power(float base, float expo){

  printf("\nPower %.2f of %.2f ( %.2f times %.2f ) = %.2f", expo, base, expo, base, pow(base, expo));
}


void menu(){
  system("cls");
  printf("===============CALCULATOR===============\n");
  printf("\nWelcome to calculator!\n");
  printf("\n\nMode:\n\n");
  printf("1. Addition\n");
  printf("2. Substraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. SQ. Root\n");
  printf("6. Power\n");
  printf("\n\nPlease Enter Your Operation:\n");
}


void close(char reop[]);




int main(){

  menu();

  int operation;
  scanf("%d", &operation);

  if (operation == 1){
    printf("\n\n\nHow many numbers you want to add?\n");
    int size;
    scanf("%d", &size);

    printf("Enter %d numbers\n", size);
    float array[size];

    for (int i = 0; i < size; i++){
      scanf("%f", &array[i]);
    }

    add(array, size);

    char r[4];
    printf("\n\n\nClear calculator data? (Yes / No) \n");
    fflush(stdin);
    gets(r);
    close(r);
  }

  else if (operation == 2){

    float a, b;
    printf("\nEnter the base number and the number you want to minus:\n");
    scanf("%f%f", &a, &b);
    sub(a, b);

    char r[4];
    printf("\n\n\nClear calculator data? (Yes / No) \n");
    fflush(stdin);
    gets(r);
    close(r);
  }

  else if (operation == 3){

    int size;
    printf("\nHow many numbers you want to multiply?\n");
    scanf("%d", &size);

    float array[size];

    printf("\nEnter %d numbers\n", size);
    for (int i = 0; i < size; i++){
      scanf("%f", &array[i]);
    }

    mult(array, size);

    char r[4];
    printf("\n\n\nClear calculator data? (Yes / No) \n");
    fflush(stdin);
    gets(r);
    close(r);
  }

  else if (operation == 4){

    float a, b;
    printf("\nEnter the base number and the number you want to divide with:\n");
    scanf("%f%f", &a, &b);

    division(a, b);

    char r[4];
    printf("\n\n\nClear calculator data? (Yes / No) \n");
    fflush(stdin);
    gets(r);
    close(r);
  }

  else if (operation == 5){
    float a;
    printf("\nEnter the number you want to sqroot: ");
    scanf("%f", &a);

    root(a);

    char r[4];
    printf("\n\n\nClear calculator data? (Yes / No) \n");
    fflush(stdin);
    gets(r);
    close(r);
  }
  
  else if (operation == 6){
    float b;
    float e;
    printf("\nEnter base and expo: \n");
    scanf("%f%f", &b, &e);

    power(b, e);

    char r[4];
    printf("\n\n\nClear calculator data? (Yes / No) \n");
    fflush(stdin);
    gets(r);
    close(r);
  }

  return 0;
}



void close(char reop[]){

  strlwr(reop);

  if (strcmp(reop, "yes") == 0){
    system("cls");
    main();
  }
  else if (strcmp(reop, "no") == 0){
    printf("\nThanks for using me!\nRun the program manually again to perform any operations.\n\n\n\n");
  }
}