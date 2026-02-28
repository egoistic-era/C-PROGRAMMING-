// Program to generate Salary Slip
// Author: Prince Verma

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float basic_salary, DA, HRA, conveyance = 1600, medical = 1250;
    float gross_salary, ESIC, provident_fund;
    float net_before_tax, TDS, salary_in_hand;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    // Allowances
    DA = 0.10 * basic_salary;
    HRA = 0.50 * (basic_salary + DA);

    // Gross Salary
    gross_salary = basic_salary + DA + HRA + conveyance + medical;

    // Deductions
    ESIC = 0.0475 * gross_salary;
    provident_fund = 0.12 * basic_salary;

    net_before_tax = gross_salary - ESIC - provident_fund;

    TDS = 0.05 * net_before_tax;

    salary_in_hand = net_before_tax - TDS;

    // Salary Slip Output
    printf("\n================ SALARY SLIP ================\n");
    printf("Basic Salary        : %.2f\n", basic_salary);
    printf("DA (10%%)            : %.2f\n", DA);
    printf("HRA (50%%)           : %.2f\n", HRA);
    printf("Conveyance          : %.2f\n", conveyance);
    printf("Medical             : %.2f\n", medical);
    printf("---------------------------------------------\n");
    printf("Gross Salary        : %.2f\n", gross_salary);
    printf("ESIC (4.75%%)        : %.2f\n", ESIC);
    printf("Provident Fund(12%%) : %.2f\n", provident_fund);
    printf("Net Before Tax      : %.2f\n", net_before_tax);
    printf("TDS (5%%)            : %.2f\n", TDS);
    printf("---------------------------------------------\n");
    printf("Salary In Hand      : %.2f\n", salary_in_hand);
    printf("=============================================\n");

    return 0;
}
