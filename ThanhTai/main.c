#include "function.h"

int main()
{
    ShowMenu();
    /* Getting User Selection */
    int SELECTION;
    scanf("%d",&SELECTION);
    /* ----------------------- */
    switch (SELECTION)
    {
        case 1:
            Function1();
            break;
        case 2:
            Function2();
            break;
        case 3:
            Function3();
            break;
        case 4:
            Function4();
            break;
        default:
            return 0;
    }

    return EXIT_SUCCESS;
}
void ShowMenu()
{
    printf("Chon chuc nang can thuc hien: \n");
    printf("\t 1. Doi do C ra do F. \n");
    printf("\t 2. Tinh tien dien hang thang luy tien theo kw tieu thu. \n");
    printf("\t 3. Doi so nguyen N sang chuoi bat phan \n");
    printf("\t 4. In ra man hinh va luu ket qua 1 bieu do vao \"Bieu_do.txt\". \n");
    printf("Nhap chuc nang can thuc hien: ");
}
void Function1()
{
    printf("Nhap nhiet do can chuyen doi (do C): ");

    float Celcius, Fahrenheit;
    scanf("%f", &Celcius);

    Fahrenheit = CelciusToFarenheit(Celcius);

    printf("Do F tuong ung la: %0.2f", Fahrenheit);
}
void Function2()
{
    printf("Nhap so kw su dung: ");

    float kw;
    scanf("%f", &kw);
    kw = floor(kw);

    long price = ElectricCharge(kw);

    printf("Tien dien can thanh toan la: %ld VND", price);
}
void Function3()
{
    printf("Nhap so nguyen N: ");
    int number;
    scanf("%d", &number);
    char hex[10];
    memset(hex,'\0', 10);
    decTohex(number, hex);
    int i = strlen(hex)-1;
    if (i < 0)
    {
        printf("Cannot convert");
    }
    else
    {
        for (i; i >= 0 ; i-- )
            printf("%c",hex[i]);
    }

}
void Function4()
{
    printf("Nhap so nguyen (1000->9999): ");
    int number;
    scanf("%d",&number);
    /*
        Digit is array of int number including 4 space to store 4 digit of input number
            In Digit, first position start from Zero Digit[0]
            For example: N = 3322 ;
                Digit = {3, 3, 2, 2} mean Digit[0] = 3; Digit[1] = 3; Digit[2]=2; Digit[3]=2;
        index is variable used in loop to store digit in right position
    */
    int digit[4]={0,0,0,0};
    int index = 3;
    // This will split each digit from number and store to digit array
    while (number>0)
    {
        int tmp = number % 10;
        digit[index] = tmp;
        number = number / 10;
        index--;
    }

    /*------Mo file de ghi-------*/
    FILE * f;
    f = fopen("bieu_do.txt","w+");
    /*--------------------------*/
    // Index variable here is reused for looping
    index = 0;
    //Cac cau lenh fprintf(..) la cau lenh in ra file
    for(index = 0; index<4; index++)
    {
       if (digit[index] != 0)
        {
            fprintf(f,"%d",digit[index]);
            printf("%d",digit[index]);
            int j = 1;
            for(j = 1; j <= digit[index]; j++)
            {
                fprintf(f,"*");
                printf("*");
            }
            fprintf(f,"\n");
            printf("\n");
        }
    }
}
