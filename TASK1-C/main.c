#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Enter amount in dollar to transform to LE");

    float dollar ;
    scanf("%f",&dollar);
    float v_le;
    v_le= dollar * 15.67;        //value in le
    printf(" Value in LE = %f",v_le);

    return 0;
}
