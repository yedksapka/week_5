#include <stdio.h>

int main(){

    double pi;
    int i=1;

    while(i<=1003){

        pi = pi+(4/(double)i);

        i +=2;

        pi = pi-(4/(double)i);

        i +=2;

        
    }

    printf("\n%lf", pi);

    return 0;
}