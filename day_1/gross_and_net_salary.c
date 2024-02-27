#include<stdio.h>

void main(){
    //logic for net salary is basic salary + house rent allowance + dearness allowance + travelling allowance + grade pay - PF - income tax - professional tax 
    //assumption: HRA = 30%, DA = 50%, TA=1000, PF=12%, 10% income tax, professional tax=500
    int basic_salary, grade_pay=9000, hra, da, ta;
    printf("Enter basic salary:");
    scanf("%d", &basic_salary);
    hra = basic_salary * 0.3;
    da = basic_salary * 0.5;
    ta = 1000;
    int gross_salary = basic_salary + grade_pay + hra + da + ta;
    int pf = basic_salary * 0.12, income_tax = basic_salary*0.1, pt = 500;
    printf("Gross salary: %d \n", gross_salary);
    int net_salary = gross_salary - pf - income_tax - pt;
    printf("Net salary = %d \n", net_salary);
}