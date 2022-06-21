#include <math.h>
#include <stdio.h>

float mult(float *x){
    int result;
    float y;
    printf("Enter second number? ");
    scanf("%f", &y);
    result = *x * y;
    return result;
}

float div(float *x){
    int result;
    float y;
    printf("Enter second number? ");
    scanf("%f", &y);
    result = *x / y;
    return result;
}

float subtract(float *x){
    int result;
    float y;
    printf("Enter second number? ");
    scanf("%f", &y);
    result = *x - y;
    return result;
}

float add(float *x){
    int result;
    float y;
    printf("Enter second number? ");
    scanf("%f", &y);
    result = *x + y;
    return result;
}

int reminder(float *x){
    int result;
    float y;
    printf("Enter second number? ");
    scanf("%f", &y);
    result = ((int)*x % (int)y);
    return result;
}

float power(float *x){
    int result;
    float y;
    printf("Enter second number? ");
    scanf("%f", &y);
    result = pow(*x, y);
    return result;
}

float square_single(float *x){
    int result;
    result = pow(*x, 2);
    return result;
}

float square_root(float *x){
    int result;
    result = sqrt(*x);
    return result;
}