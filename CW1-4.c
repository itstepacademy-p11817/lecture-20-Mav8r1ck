#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

int_fast64_t comparison(int_fast64_t* p, int_fast64_t* r) //for min number
{
    int_fast64_t min = 0;
    if (*p > *r)
    {
        min = *r;
    }
    else
    {
        min = *p;
    }
    return min;
}

int_fast64_t sign(int_fast64_t* s) //for sign
{

    if (*s >= 0)
    {
        printf("Sign\n");
        printf("plus\n");
    }
    else
    {
        printf("Sign\n");
        printf("minus\n");
    }
}

int_fast64_t exchange_of_values(int_fast64_t* o, int_fast64_t* t) //exchange
{
    int_fast64_t x = 0;
    x = *t;
    *t = *o;
    *o = x;
}

int_fast64_t calculator(int_fast64_t* p, int_fast64_t* r) //calculator
{
    int_fast64_t aa = *p;
    int_fast64_t bb = *r;
    printf("Calc\n");
    printf("%li\n", (aa*bb));
    printf("%li\n", (aa/bb));
    printf("%li\n", (aa+bb));
    printf("%li\n", (aa-bb));

}

int main()
{
    int_fast64_t a = 0; //for min number&calc
    int_fast64_t b = 0; //for min number&calc

    int_fast64_t c = 0; //for sign

    int_fast64_t d = 0; //exchange
    int_fast64_t e = 0; //exchange

    scanf("%li", &a); //for min number&calc
    scanf("%li", &b); //for min number&calc

    scanf("%li", &c); //for sign

    scanf("%li", &d); //exchange
    scanf("%li", &e); //exchange

    int_fast64_t *p = NULL; //for min number
    int_fast64_t *r = NULL; //for min number

    int_fast64_t *s = NULL; //for sign

    int_fast64_t *o = NULL; //exchange
    int_fast64_t *t = NULL; //exchange

    p = &a; //for min number&calc
    r = &b; //for min number&calc

    s = &c; //for sign

    o = &d; //exchange
    t = &e; //exchange

    comparison(p, r);                 //for min number
    sign(s);                         //for sign
    exchange_of_values(o, t);		 //exchange

    printf("Comparison\n");
    printf("%li\n", comparison(p, r)); //for min number
    printf("Exchange\n");
    printf("%li, %li\n", d, e); //exchange

    calculator(p, r);               //calc
//    printf("%li, %li, %li, %li", calculator(p, r)); //calc

//    system("pause");
    return 0;
}