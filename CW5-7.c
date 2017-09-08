#include<stdio.h>
#include<stdint.h>

uint64_t sum_of_elemets(uint64_t* m) //sum elements
{
    uint64_t sum = 0;
    for (int l = 0; l < 5; l++)
    {
            sum += *(m+l);
    }
    return sum;
}

uint64_t copy_matrix(uint64_t* m, uint64_t* m1) //copy
{
    for (int l = 0; l < 5; l++)
    {
        *(m1+l) = *(m+l);
    }
}

uint64_t reverse_matrix(uint64_t* m, uint64_t* m1) //reverse
{
    for (int l = 0; l < 5; l++)
    {
        int l1 = 4;
        *(m1+(l1 -l)) = *(m+l);
    }
}
int main()
{
    uint64_t matrix[5] = {1, 2, 3, 4, 5};
    uint64_t matrix1[5] = {0};
    uint64_t *m;
    uint64_t *m1;
    m = matrix;
    m1 = matrix1;
    sum_of_elemets(m);
    printf("%lu\n", sum_of_elemets(m)); //sum elements

    copy_matrix(m, m1);                 //copy matrix
    for (int l = 0; l < 5; l++)
    {
        printf("%lu ", matrix1[l]);
    }
    printf("\n");

    reverse_matrix(m, m1);              //reverse
    for (int l = 0; l < 5; l++)
    {
        printf("%lu ", matrix1[l]);
    }

    return 0;
}