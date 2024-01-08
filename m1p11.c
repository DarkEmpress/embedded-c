//Take input of some length in meter and covert it to feet and inches.(Length in feet=Length in meters×3.28084 and 
//Remaining inches=(Length in feet−⌊Length in feet⌋)×12)
#include <stdio.h>
#include <math.h>
int main(){
    float len;
    printf("enter length in meter: ");
    scanf("%f",&len);
    float feet= len*3.28084;
    float inch= (feet-floor(feet))*12;
    printf("\nlength is %f meter = %.0f foot %.2f in\n",len, feet, inch);
    return 0;
}
