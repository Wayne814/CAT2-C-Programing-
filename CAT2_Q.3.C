#include <stdio.h>

int main(){
	double hours_worked, hourly_wage, gross_pay, taxes, net_pay;
	double overtime_rate=1.5, tax_rate1=0.15, tax_rate2 = 0.20;
	double tax_bracket1 = 600;
	
	//Prompt for user input
	printf("Enter hours worked in week: ");
	scanf("%lf", &hours_worked);
	printf("Enter hourly wage: ");
	scanf("%lf", &hourly_wage);
	
	//Calculate the gross pay
	if(hours_worked > 40){
		gross_pay = (40 * hourly_wage) +((hours_worked - 40) * hourly_wage * overtime_rate);
	}else{
		gross_pay = hours_worked * hourly_wage;
	}
	
	//Calculate taxes
	if(gross_pay <= tax_bracket1){
		taxes = gross_pay *tax_rate1;
	}else {
		taxes = (tax_bracket1 * tax_rate1)+((gross_pay - tax_bracket1) *tax_rate2);
		}
		
		//Calculate net pay
		net_pay = gross_pay -taxes;
		
		//Output the results
		printf("Gross pay: $%.2f\n",gross_pay);
		printf("Taxes: $%.2f\n",taxes);
		printf("Net pay: $%.2f\n",net_pay);
		
		return 0;
		
}