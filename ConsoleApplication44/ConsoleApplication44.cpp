// ConsoleApplication44.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//Завдання 1

#include <iostream>

using namespace std;

class Student {
private:
    char fullName[100];
    char bDate[20];
    char phNum[20];
    char city[50];
    char country[50];
    char uni[100];
    char uniCity[50];
    char uniCountry[50];
    char gpNum[20];

public:
    Student(const char* name = "Unknown") {
        int i = 0;
        while (name[i] != '\0' and i < 99) {
            fullName[i] = name[i];
            i++;
        }
        fullName[i] = '\0';
    }


    ~Student() {

    }

    inline void setData() {
        cout << "Enter Full Name: ";
        cin.getline(fullName, 100);

        cout << "Enter Date of Birth: ";
        cin.getline(bDate, 20);

        cout << "Enter Contact Phone: ";
        cin.getline(phNum, 20);

        cout << "Enter City: ";
        cin.getline(city, 50);

        cout << "Enter Country: ";
        cin.getline(country, 50);

        cout << "Enter University Name: ";
        cin.getline(uni, 100);

        cout << "Enter University City: ";
        cin.getline(uniCity, 50);

        cout << "Enter University Country: ";
        cin.getline(uniCountry, 50);

        cout << "Enter Group Number: ";
        cin.getline(gpNum, 20);
    }

    inline void displayData() const {
        cout << "Full Name: " << fullName << "\n";
        cout << "Date of Birth: " << bDate << "\n";
        cout << "Contact Phone: " << phNum << "\n";
        cout << "City: " << city << "\n";
        cout << "Country: " << country << "\n";
        cout << "University: " << uni << "\n";
        cout << "University City: " << uniCity << "\n";
        cout << "University Country: " << uniCountry << "\n";
        cout << "Group Number: " << gpNum << "\n";
    }
};

int main() {
    Student student;
    student.setData();
    cout << "\nStudent Data:\n";
    student.displayData();
    return 0;
}








// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
