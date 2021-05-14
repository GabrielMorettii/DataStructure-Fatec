#include <stdio.h>

int main(){
    int cont;
    for(int cont = 1000; cont <= 1999; cont++){
        if(cont % 11 == 5){
            printf("%d\n", cont);
        }
    }
    return 0;
}
