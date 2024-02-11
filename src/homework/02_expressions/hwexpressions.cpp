#include "hwexpressions.h"

//write function code here

double get_sales_tax_amount(int meal_amount, double tax_rate)
{
	return meal_amount * tax_rate;  
}

double get_tip_amount(int meal_amount, double tip_rate)
{
		double return_value = meal_amount * tip_rate;

		return return_value;

}

int total(int get_sales_tax_amount, double get_tip_amount)
{
	return get_sales_tax_amount + get_tip_amount;
}
