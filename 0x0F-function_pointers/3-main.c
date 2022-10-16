#include "3-calc.h"

/**
 *
 *
 *
 */
int main(int argc, char argv[]){
if (argc != 4){
printf("Error\n")
exit(98);
}
num1 = atoi(argv[1]);
operand = argv[2];
num2 = atoi(argv[3]);
if (operand != '/' || '*' || '+' || '-' || '%'){
printf("Error\n")
exit(99);
} 
if ((operand == '/' && num2 == 0) || operand == '%' && num2 == 0){
printf("Error\n")
exit(100);
} 
get_op_func(operand))(num1, num2)
}
