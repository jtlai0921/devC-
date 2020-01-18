#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float r1=123.45,r2=-123.45;
	printf("===123456789012345\n");
	printf("1. %f\n",1.2345);
	printf("2. %-f\n",-1.2345);
    printf("3. %.1f\n",123.45);
	printf("4. %4.3f\n",123.45);
	printf("5. %10.1f\n",123.45);
	printf("6. %010.1f\n",123.45);
	printf("7. %+10.1f\n",123.45);
	printf("8. %-10.1f\n",123.45);
	printf("9. %10.2f\n",-123.45);
	printf("10 %-10.2f\n",-123.45);
	printf("===123456789012345\n");	
	printf("11 %f\n",1234.123456789);
	printf("12 %g\n",1234.123456789);
	printf("12 %g\n",123456.7891234);
	printf("12 %g\n",12340.0056789);
	printf("13 %G\n",123.456789);
	printf("14 %10.2e\n",1234.567);
	printf("15 %10.6e\n",1234.567); 
	printf("16 %10.2E\n",1234.567);
	printf("17 %10.2g\n",1234.567);
	printf("18 %10.2G\n",123.4567);	
	printf("19%10.2G\n",12.34567);
	printf("20 %10.2G\n",1.234567);	
	printf("21 %10.4G\n",0.000123456);
    printf("22 %10.3G\n",0.000123456);		
	printf("23 %10G\n",0.000123456);
	printf("24 %10.2G\n",0.0000123456);
	printf("25 %10.3g\n",0.0000123456);
	printf("26 %.7g\n",0.00001234);
	printf("27 %.7g\n",0.000012345678);
	printf("28 %10.5G\n",1230.764567);  			
	system("PAUSE");	
	return 0;
}
