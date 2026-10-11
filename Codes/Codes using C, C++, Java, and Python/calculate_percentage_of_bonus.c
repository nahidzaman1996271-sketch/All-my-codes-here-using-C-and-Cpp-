#include <stdio.h>

int main() {

    char   name[50] = "Likhon";
    int    id       = 571;
    double salary   = 50000.0;
    int    rating   = 4;

    char*   pName   = name;
    int*    pId     = &id;
    double* pSalary = &salary;
    int*    pRating = &rating;

    printf("==== Before Update ====\n");
    printf("Name   : %s\n",   pName);
    printf("ID     : %d\n",  *pId);
    printf("Salary : %.2f BDT\n", *pSalary);
    printf("Rating : %d\n",  *pRating);

    double bonus = 0.0;

    if      (*pRating == 5) bonus = *pSalary * 0.25;
    else if (*pRating == 4) bonus = *pSalary * 0.20;
    else if (*pRating == 3) bonus = *pSalary * 0.10;

    *pSalary += bonus;

    printf("\n After Update \n");
    printf("Rating     : %d\n",    *pRating);
    printf("Bonus      : %.2f BDT\n", bonus);
    printf("New Salary : %.2f BDT\n", *pSalary);

    return 0;
}