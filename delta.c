#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <tgmath.h>
int main()
{
    char choice;
    double z1, z2, delta, a, b, c, pr1;
    printf("\nInput the first number(a): ");
    scanf("%lf", &a);
    printf("\nInput the second number(b): ");
    scanf("%lf", &b);
    printf("\nInput the third number(c): ");
    scanf("%lf", &c);

    printf("\n What mode do you choose? \n[1]: Complex Mode \n[2]: Normal Mode ");
    scanf("%d", choice);


    if (choice == 1)
    {
        printf("... \n Complex Mode \n [ON!]");
        delta = pow(b, 2) - (4 * a * c);
        printf("%d", delta);

        if (delta < 0 && a != 0)
        {
            delta = sqrt(delta);
            z1 = (-b - (I * (-delta)) / (2 * a));
            z2 = conj(z1);
            printf("Root1 = %.5lf\n", z1);
            printf("Root2 = %.5lf\n", z2);
        }
        else
        {
            printf("\nImpossible to find the roots.\n");
        }
    }
    else if (choice == 2)
    {
        printf("Normal mode is ON");

        pr1 = (b * b) - (4 * (a) * (c));

        if (pr1 > 0 && a != 0)
        {
            double x, y;
            pr1 = sqrt(pr1);
            x = (-b + pr1) / (2 * a);
            y = (-b - pr1) / (2 * a);
            printf("Root1 = %.5lf\n", x);
            printf("Root2 = %.5lf\n", y);
        }
        else
        {
            printf("\nImpossible to find the roots.\n");
        }
    }

    return 0;
}
