#include <stdio.h>
#include <stdlib.h>

void exc_one(void) {
  printf("Ex.1:\nWrite a few printf statements and some comments");
  //this is a comment
  printf("\nHello\n\n");
}

void exc_two() {
  printf("Ex.2:\nPrint some variables using formatting options");
  char c = 'a';
  int x = 123;
  float f = 123.456f;
  double d = 789.545454;
  printf("\nChar %%c: %c", c);
  printf("\nInt %%d: %d", x);
  printf("\nFloat %%f: %.3f", f);
  printf("\nDouble %%f: %.2f\n\n", d);
}

void exc_three() {
  printf("Ex.3:\ndeclare and intialize two variables and save their sum to the third variable and print that third variable to the console!\n");
  int x = 1;
  int y = 2;
  int z = x+y;
  printf("The result is: %d + %d = %d\n\n", x, y, z);
}

void exc_four() {
  printf("Ex.4:\nExperiment with different arithmetic operations!");
  int x = 9;
  int y = 2;
  int z = x / y;
  printf("\nExpression of integers: %d / %d = %d\n", x, y, z);
  double c = (double) x / y;
  printf("Expression w/ casting a type to a variable: %d + %d = %.2f", x, y, c);

}

void do_loop() {
  printf("\n\nEx.5:\nTest a do loop\n");
  int i = 0;
  do {
    printf("%d ", i);
    i++;
  } while (i < 5);
}

void arrays1() {
  printf("\n\nEx.6:\nArrays\n");
  double arr[2][2] = {{1, 2}, {3, 4}};
  for (int i = 0; i < 2; i++) {
    printf("\n");
    for (int j = 0; j < 2; j++) {
      printf("%.2f ", arr[i][j]);
      
    }
  }
  printf("\n");
}

void arrays2() {
  printf("\n\nEx.7:\nArrays and pointers\n");
  char arr[] = "Hello";
  printf("The value of arr is: %s\n", arr);
  printf("The value of the pointer arr is: %p\n", arr);
  printf("The char value of arr: %c\n", *arr);
  int arr2[] = {1, 2, 3, 4, 5};
  printf("New array: %d\n", *arr2);
  for (int i=0; i < sizeof(arr2)/sizeof(int); i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");
  arr2[0] = 0;
  arr2[4] = 0;
  printf("New array changed: %d\n", *arr2);
  for (int i=0; i < sizeof(arr2)/sizeof(int); i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");
  // printf("%d\n", type(arr2));
}

void pointers() {
  printf("\n\nEx.8:\nPointers and arrays\n");
  double d = 1.1;
  double *p = &d;
  printf("Pointer *p points to value: %.2f\n", *p);
  *p = 1.2;
  printf("Value at address %p changed to: %.2f\n", p, *p);
  printf("Printing an array using a pointer to it:\n");
  int arr[] = {1, 2, 3};
  int *arr_p = arr;
  for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
    printf("%d ", arr_p[i]);
  }
  printf("\n");
  printf("Printing a character array using a pointer to it\n");
  char *arr_char_p = "Hello";
  printf("Character array using a pointer: %s\n", arr_char_p);
  printf("pointer arithmetics:\n");
  int five_array[5] = {1, 2, 3, 4, 5};
  int *five_array_p = five_array;
  five_array_p += 1;
  printf("2nd array element: %d\n", *five_array_p);
  five_array_p += 2;
  printf("4th array element: %d\n", *five_array_p);
  printf("You use `*p[]` for an array of pointers! (can point toany type)\n");
}

int functions1(int a, int b) {
  printf("\n\nEx.9:\nFUNCTIOnS\n");
  printf("Here we play around with functions\n");
  printf("We give this function two integers. Make it return their sum!\n%d + %d =\n", a, b);
  return a + b;
}

int functions2(int *p) {
  return (*p)++;
}

int main(int argc, char *argv[]) {
  exc_one(); 
  exc_two();
  exc_three();
  exc_four();
  do_loop();
  arrays1();
  arrays2();
  pointers();
  int x = functions1(1, 2);
  printf("%d\n", x);
  printf("function can change a value of a variable that was passed to it:\n");
  printf("Value of x at address %p: %d\n", &x, x);
  printf("You do it by passing\n");
  printf(" in definition function(type *var)\n");
  printf("And when calling function(&var)\n");
  // int *p_to_x = &x;
  functions2(&x);
  printf("Value of x at address %p (after function call): %d\n", &x, x);
  printf("To use cmd line args we use in argument\n");
  printf("function(int argc, char *argv[])\n");
  char *first_p;
  double first_arg = strtod(argv[1], &first_p);
  char *second_p;
  double second_arg = strtod(argv[2], &second_p);
  printf("The program name: %s\n", argv[0]);
  double result = first_arg / second_arg;
  printf("We print the division of the two arguments (%.2f and %.2f) in the corresponding order: %.2f\n", first_arg, second_arg, result);
}
