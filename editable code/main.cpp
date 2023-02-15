#include <iostream>

using namespace std;

int calculator(){
        //Declaring the necessary variables to use as inputs in our calculator, including an Array
    int x;
    int y;
    char z;
    char operators[5] = {'+', '-', '*', '/', '%'};

    //Getting the values for the declared variables from the user
    cout << "first number >> ";
    cin >> x;
    cout << "second number >> ";
    cin >> y;
    cout << "math operator >> ";
    cin >> z;

    //Performing the necessary calculation to output the needed calculations
    if (z == operators[0]){
        cout << "The Results : " <<x + y;
    } else if (z == operators[1]){
        cout << "The Results : " <<x - y;
    } else if(z == operators[2]){
        cout << "The Results : " <<x * y;
    } else if(z == operators[3]){
        cout << "The Results : " <<x / y;
    } else if(z == operators[4]){
        cout << "The Results : " <<x % y;
    }

    return 0;
}

int main()
{
    calculator();
}
