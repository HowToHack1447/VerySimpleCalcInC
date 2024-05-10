#include <stdio.h>

int main(void)
{
    
    printf("==================================================================\n");
    printf("============== Simple Calculator Application =====================\n");
    printf("==================================================================\n");
    printf("\t\t\t[ 1 ] = [ + ]\n");
    printf("\t\t\t[ 2 ] = [ - ]\n");
    printf("\t\t\t[ 3 ] = [ * ]\n");
    printf("\t\t\t[ 4 ] = [ / ]\n");
    
    double n1,n2;
    int op;
    
    printf("Enter First Number: ");
    scanf("%lf",&n1);
    printf("Enter Second Number: ");
    scanf("%lf",&n2);
    printf("Enter Operation: ");
    scanf("%i",&op);
    
    switch (op)
    {
        case 1:
                printf("%.2lf + %.2lf = %.2lf",n1, n2, n1 + n2);
            break;
        
        case 2:
                printf("%.2lf - %.2lf = %.2lf", n1, n2, n1 - n2);
            break;
            
        case 3:
                printf("%.2lf * %.2lf = %.2lf", n1, n2 ,n1 * n2);
            break;
            
        case 4:
                printf("%.2lf / %.2lf = %.2lf", n1, n2 ,n1 / n2);
            break;
        
        
        default:
                printf("Invalid Operation!");
            break;
        
    }
    return 0;
}
