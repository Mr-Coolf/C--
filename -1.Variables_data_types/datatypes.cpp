#include <iostream>

int main(int argc, char const *argv[])
{

    // integer (whole number)
    int age = 15;
    int year = 15;
    int days = 15.2;

    std::cout << days << "\n";

    // double (number including decimal)
    double price = 10.4;
    double gpa = 2.5;
    double temp = 17.7;
    double idk = 17;

    std::cout << temp << "\n";

    // char (single char)
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    std::cout << initial << "\n";

    // bool (true or false)
    bool isStudent = true;
    bool isTeacher = false;
    bool power = true;

    // string (objects that represent a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Sushi";

    std::cout << "Hello, " << name << '\n';
    std::cout << "You are " << age << " years old " << '\n';

    return 0;
}
