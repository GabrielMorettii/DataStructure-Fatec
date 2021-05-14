#include <stdio.h>
#include <stdlib.h>

int main(){

    float c=0, f;

    for(f = 50; f <= 65; f++){
        c = 0.555555556 * (f - 32);
        printf("%.2f Farenheit  %.2f Centigrados\n", f, c);
    }
}
