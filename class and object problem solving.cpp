#include <iostream>
using namespace std;

class a {
public:
    int a, b;

    // Function to input two numbers
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    // Function to calculate and display the average of two numbers
    void average() {
        int aver = (a + b) / 2;
        cout << "Average of two numbers: " << aver << endl;
    }

    // Function to check if the sum is even or odd
    void even() {
        int sum = a + b;  // Sum of two numbers
        if (sum % 2 == 0) {
            cout << "Sum is an even number: " << sum << endl;
        } else {
            cout << "Sum is an odd number: " << sum << endl;
        }
    }
};

int main() {
    a obj;

    obj.input();      // Get the input from the user
    obj.average();    // Calculate and display the average
    obj.even();       // Check and display if the sum is even or odd

    return 0;
}



//problem solving by using object and class

//determine average and odd number of two numbers

//Riaz 11 November 2024
