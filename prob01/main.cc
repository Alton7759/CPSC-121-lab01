#include <iomanip>
#include <iostream>

int main() {
   double meal_cost{00.00};
  double tip_per;
  double tax_rate{0.075};
  std::cout << "Please input meal cost: ";
  std::cin >> meal_cost;
  std::cout << "Please input tip percentage: ";
  std::cin >> tip_per;
  tip_per = 0.01 * tip_per;
  std::cout << "\nRestaurant Bill"
            << "\n====================\n";
  double tax = meal_cost * tax_rate;
  double tip = meal_cost * tip_per;
  double total = meal_cost + tip + tax;
  std::cout << "Subtotal: $" << std::setprecision(2) << std::fixed << meal_cost
            << "\n";
  std::cout << "Taxes: $" << std::setprecision(2) << std::fixed << tax << "\n";
  ;
  std::cout << "Tip: $" << std::setprecision(2) << std::fixed << tip << "\n";
  ;
  std::cout << "====================\n";
  std::cout << "Total: $" << std::setprecision(2) << std::fixed << total
            << "\n";
  ;
  return 0;
}
