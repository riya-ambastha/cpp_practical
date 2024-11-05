#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[64];
    int age;
    char address[64];
    float basicSalary;
    float hra;  // House Rent Allowance
    float da;   // Dearness Allowance
    float totalSalary;

public:
    // Constructor to initialize person details
    Person(const char* n, int a, const char* addr, float bSalary) {
        strcpy(name, n);
        age = a;
        strcpy(address, addr);
        basicSalary = bSalary;
        hra = 0.2 * basicSalary;  // 20% of basic salary as HRA
        da = 0.1 * basicSalary;   // 10% of basic salary as DA
        totalSalary = basicSalary + hra + da;
    }

    // Inline function to get the age of a person
    inline int getAge() const {
        return age;
    }

    // Function to generate the salary slip
    void displaySalarySlip() const {
        cout << "\nSalary Slip for: " << name << endl;
        cout << "---------------------------------\n";
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA (20%): " << hra << endl;
        cout << "DA (10%): " << da << endl;
        cout << "Total Salary: " << totalSalary << endl;
        cout << "---------------------------------\n";
    }

    // Function to display person details
    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }
};

// Inline function to find the youngest person in an array
inline Person findYoungest(Person persons[], int size) {
    Person youngest = persons[0];
    for (int i = 1; i < size; i++) {
        if (persons[i].getAge() < youngest.getAge()) {
            youngest = persons[i];
        }
    }
    return youngest;
}

// Inline function to find the eldest person in an array
inline Person findEldest(Person persons[], int size) {
    Person eldest = persons[0];
    for (int i = 1; i < size; i++) {
        if (persons[i].getAge() > eldest.getAge()) {
            eldest = persons[i];
        }
    }
    return eldest;
}

int main() {
    // Creating an array of 10 persons
    Person persons[10] = {
        Person("Alice", 25, "123 Street A", 50000),
        Person("Bob", 35, "456 Street B", 60000),
        Person("Charlie", 28, "789 Street C", 55000),
        Person("David", 40, "101 Street D", 65000),
        Person("Eva", 30, "202 Street E", 52000),
        Person("Frank", 23, "303 Street F", 49000),
        Person("Grace", 33, "404 Street G", 58000),
        Person("Helen", 22, "505 Street H", 47000),
        Person("Ian", 29, "606 Street I", 53000),
        Person("Jack", 45, "707 Street J", 70000)
    };

    // Display details of all persons
    for (int i = 0; i < 10; i++) {
        cout << "\nPerson " << i + 1 << " Details:\n";
        persons[i].displayDetails();
        persons[i].displaySalarySlip();
    }

    // Find the youngest and eldest person
    Person youngest = findYoungest(persons, 10);
    Person eldest = findEldest(persons, 10);

    cout << "\nThe Youngest Person is:\n";
    youngest.displayDetails();
    cout << "\nThe Eldest Person is:\n";
    eldest.displayDetails();
 
    
  // Displaying additional information
    cout << "Name - Riya Sinha" << endl;
    cout << "Roll - A45304823045" << endl;
    cout << "Class - BCA 3 A" << endl;

    return 0;
}