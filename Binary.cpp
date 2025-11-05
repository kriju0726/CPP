//Nesting of member functions in c++...
/* In C++, nesting member functions refers to the practice of defining a member function within the scope of another member function within
 a class. This can be useful for encapsulating functionality that is tightly related to a particular member function and doesn't need to be 
 accessed from outside the class.   */


 #include <iostream>

class Outer {
private:
    int data;

public:
    void setData(int value) {
        data = value;
    }

    void processData() {
        // Nested member function
        auto displayData = [this]() {
            std::cout << "Data: " << data << std::endl;
        };

        displayData(); // Call the nested function

        // Other processing code...
    }
};

int main() {
    Outer obj;
    obj.setData(10);
    obj.processData();

    return 0;
}


/*
#include <iostream>

class Outer {
private:
    int outerData;

public:
    Outer(int data) : outerData(data) {}

    void outerFunction() {
        std::cout << "Outer function called." << std::endl;

        // Nested member function
        void innerFunction() {
            std::cout << "Inner function called." << std::endl;
            std::cout << "Outer data: " << outerData << std::endl;
        }

        innerFunction(); // Call the nested function
    }
};

int main() {
    Outer obj(20);
    obj.outerFunction();

    return 0;
}
*/