#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int s; //стаж работы
    float z, b; // зарплата в рублях, курс доллара
    
    b = 81; //курс доллара на 02.11.20
    z = 45673;

    cin >> s;
    
    switch (s)
    {

    case 0: case 1: case 2: z = z * 0.5;
        break;

    case 3: case 4: z = z * 0.6;
        break;
    case 5: case 6: case 7: z = z * 0.8;

    default: z = z; 
        break;

    }
    
    cout << "Больничные работника в рублях: " << z << "р" << " Больничные работника в долларах: " << z / b << " bucks" << endl;
    return 0;
}

