#include <iostream>
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
using namespace std;
//problema 10
int main(){
    long int i = 3;
    unsigned long long int rpt = 2;
    int b = 1;
    long int j;
    while(i < 2000000){
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                b=0;
                break;
            }
        }
        if(b==1)
            rpt+= i;
        b=1;
        i += 2;
    }
    cout<<"Respuesta: "<<rpt;
    return 0;
}
