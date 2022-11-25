#include <stdio.h>
#include <math.h>

int main(){

    int i, i2, hyp2;
    float hyp, mod;

    for(i=1; i<=500; i++){
        for(i2=1; i2<=500; i2++){

            hyp = sqrt((i*i)+(i2*i2));
            hyp2 = sqrt((i*i)+(i2*i2));

            mod = hyp - (float)hyp2;
            if(mod == 0){
                printf("The triangle include %d and %d\n", i, i2);
                printf("Hypotenuse is %d\n\n", hyp2);
            }
        }
    }

    return 0;
}