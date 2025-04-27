#include <iostream>
using namespace std;
class Employee {
private:
  int salary;
  int hoursOfWork;
public:
  // Constructor
  Employee() {
    salary = 0;
    hoursOfWork = 0;
  }
  // Function to get employee information
  void getInfo(int sal, int hours) {
    salary = sal;
    hoursOfWork = hours;
  }
  // Function to add $10 to salary if it's less than $500
  void AddSal() {
    if (salary < 500) {
      salary += 10;
    }
  }

  // Function to add $5 to salary if hours worked are more than 6
  void AddWork() {
    if (hoursOfWork > 6) {
      salary += 5;
    }
  }

  // Function to print the final salary
  void printSalary() {
    cout << "Final Salary: $" << salary << endl;
  }
};

int main() {
  Employee employee;

  int sal, hours;
  // Get employee information
  cout << "Enter salary: $";
  cin >> sal;
  cout << "Enter hours of work per day: ";
  cin >> hours;

  // Set employee information
  employee.getInfo(sal, hours);

  // Add salary if eligible
  employee.AddSal();

  // Add work bonus if eligible
  employee.AddWork();

  // Print final salary
  employee.printSalary();

  return 0;
}