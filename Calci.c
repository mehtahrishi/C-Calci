#include <stdio.h>
#include<string.h>
int main() {

  char op;
  double first, second;
  printf("Hi,There Please Choose Perfect Operands And Operators For Desired Output.\n");
  printf("Enter An Operator (+, -, *, /)-\t");
  scanf("%c", &op);
  printf("Enter Two Operands-\n");
  scanf("%lf \t  %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
    default:
      printf("Error , Operator Is Not Correct !");
  }
  return 0;
}