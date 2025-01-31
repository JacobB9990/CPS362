#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
Calculate phi
Show difference
Save the data to csv and plot in python
*/
double straightforward(double phi, int n)
{
    double result = pow(phi, n); 
    return result;
}

/*
Formula:
phi^n = phi^(n-1) + phi^(n-2)
*/
double iterative(double phi, int n)
{
    double phi_n_minus_2 = 1.0;
    double phi_n_minus_1 = phi;
    double result = 0.0;

    for (int i = 2; i <= n; i++)
    {
        result = phi_n_minus_1 + phi_n_minus_2;
        phi_n_minus_2 = phi_n_minus_1;
        phi_n_minus_1 = result;
    }

    return result;
}

int main()
{
    double phi = (1 + sqrt(5)) / 2; 
    int nth_term;

    printf("Enter the value of n: ");
    scanf("%d", &nth_term);

    char filename[50];
    sprintf(filename, "calculating_%dth_phi.csv", nth_term);

    FILE *file_pointer;
    file_pointer = fopen(filename, "w+");

    if (file_pointer == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file_pointer, "n,Straightforward,Iterative,Delta\n");

    for (int i = 2; i <= nth_term; i++)
    {
        double straightforward_phi = straightforward(phi, i);
        double iterative_phi = iterative(phi, i);

        double delta_phi = straightforward_phi - iterative_phi;

        printf("\n%ith power\n", i);
        printf("Straightforward: %f\n", straightforward_phi);        
        printf("Iterative: %f\n", iterative_phi);       
        printf("Delta phi: %f\n", delta_phi);

        fprintf(file_pointer, "%d,%f,%f,%f\n", i, straightforward_phi, iterative_phi, delta_phi);
    }

    fclose(file_pointer);
    printf("Data saved to %s\n", filename);

    char command[100];
    sprintf(command, "python3 ./readPhi.py %d", nth_term);
    system(command);

    return 0;
}

/*
gcc PhiCalculation.c -o PhiCalculation -lm
./PhiCalculation
*/