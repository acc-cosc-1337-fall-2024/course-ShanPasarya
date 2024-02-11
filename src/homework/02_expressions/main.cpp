#include <iostream>
#include "hwexpressions.h"

using std::cout;
using std::cin;

int main()
{
    int meal_amount = 0;
    cout << "Enter amount of Meal: ";
    cin >> meal_amount;
    
    double tip_rate = 0;
    cout << "Enter your tip percentage: ";
    cin >> tip_rate;
    
    cout << "Meal amount: " << meal_amount << "\n";
    cout << "Total Tax: " << get_sales_tax_amount << "\n"; 
    cout << "Tip Amount: " << get_tip_amount << "\n";
	cout << "Total: " << total << "\n";
    
	return 0;
}
