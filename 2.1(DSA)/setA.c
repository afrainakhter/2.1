#include<stdio.h>
int main(){

    double basic_salary, h_r_a, ta, ma, gs, it, nt;

    scanf("%lf", &basic_salary);
    h_r_a = basic_salary * 0.3;
    ta = basic_salary * 0.05;
    ma = basic_salary * 0.1;
    gs = basic_salary + h_r_a + ta + ma;
    it = gs * 0.035;
    nt = gs - it;
    printf("%lf", nt);
}