#ifndef CALCULATING_FUNC_H_INCLUDED
#define CALCULATING_FUNC_H_INCLUDED
/* Convert Celsius to Fahrenheit
    Input: A float number in Celsius scale
    Out  : return float number
*/
float CelciusToFarenheit(float);

/* Calculating charge by https://www.evn.com.vn/c3/calc/Cong-cu-tinh-hoa-don-tien-dien-9-172.aspx*/
long ElectricCharge(long kW);

/* Convert Decimal number to Hexadecimal
    Input   : n_decimal
    Output  : n_hex
*/
void  decTohex(int n_decimal,char * n_hex);

#endif // CALCULATING_FUNC_H_INCLUDED
