#include <stdio.h>

int main()
{
    float num1, num2, sum, sub, mult, div;

    printf("\n Digite o primeiro numero: " );
    scanf("%f", &num1);

    printf("\n Digite o segundo numero: " );
    scanf("%f", &num2);

    //Soma
    sum = num1 + num2;

    //Subtra��o
    sub = num1 - num2;

    //Multiplica�ao
    mult = num1 * num2;

    //Divis�o
    div = num1/num2;

    printf("\n\n %.2f + %.2f = %.2f\n", num1, num2, sum);
    printf("\n %.2f - %.2f = %.2f\n", num1, num2, sub);
    printf("\n %.2f * %.2f = %.2f\n", num1, num2, mult);
    printf("\n %.2f / %.2f = %.2f\n", num1, num2, div);
    
}

