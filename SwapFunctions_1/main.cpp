#include <iostream>
using namespace std;

int main() {

    int number1 = 2; // Numbers needed to be swapped
    int number2 = 1;
    int temp; // temporary integer to hold the values
    
    cout << "The values needed to be swapped are " << number1 << " and " << number2 << endl;
    
    temp = number1; // Assigning int temp with value in number1
    number1 = number2; // swap function using initialization
    number2 = temp;
    
    cout << "Now, the numbers in the integers are " << number1 << " and " << number2 << endl;
    cout << "The numbers in the integers have successfully swapped. End of Program" << endl;
    
    return 0;
}
