#include "Calculating_FUNC.h"

float CelciusToFarenheit(float C_Deg)
{
    return ( C_Deg * 9/5.0 ) + 32;
}
long ElectricCharge(long kW)
{
    long charge = 0 ;
    if (kW > 500)
    {
        charge = charge + (kW-500) * 2927;
        kW = 500;
    }
    if (kW > 400)
    {
         charge = charge + (kW-400) * 2834;
         kW = 400;
    }
    if (kW > 300)
    {
        charge = charge + (kW-300) * 2834;
        kW = 300;
    }
    if (kW > 200)
    {
        charge = charge + (kW-200) * 2536;
        kW = 200;
    }
    if (kW > 100)
    {
        charge = charge + (kW-100) * 2014;
        kW = 100;
    }
    if (kW > 50)
    {
        charge = charge + (kW-50) * 1734;
        kW = 50;
    }
    if (kW <= 50)
    {
        charge = charge + (kW) * 1678;
    }
    return charge;
}
void decTohex(int n_decimal, char * n_hex)
{
    if (n_decimal < 0)
        n_hex[0] = '\0';
    int temp,i;
    temp = i = 0;
	int quotient = n_decimal;
	while(quotient!=0)
	{
		temp = quotient % 16;
		//To convert integer into character
		if( temp < 10)
            temp =temp + 48;
        else
            temp = temp + 55;
		n_hex[i++]= temp;
		quotient = quotient / 16;
	}
}
