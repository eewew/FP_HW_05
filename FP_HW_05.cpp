#include <iostream>
using namespace std;
int main()
{
    cout << "\t\tTask 1\n";
    //Користувач вводить з клавіатури символ. Визначити, який це символ : літера, цифра, знак пунктуації або інше.
    char symbol;
    cout << "Enter your symbol: ";
    cin >> symbol;
    if (symbol >= '0' && symbol <= '9')
        cout << "This is digit\n";
    else if (symbol >= 'A' && symbol <= 'Z')
        cout << "This is big letter\n";
    else if (symbol >= 'a' && symbol <= 'z')
        cout << "This is small letter\n";
    else if (symbol == '"')
        cout << "This is quotation mark\n";
    else
        cout << "Invalid symbol!\n";


    cout << "\n\t\tTask 2\n";
    //Написати програму підрахунку вартості розмови для різних мобільних операторів.Користувач вводить вартість розмови і вибирає, з якого на який оператор він дзвонить.
    //Вивести вартість на екран.
    //Чомусь перша програма іноді мішає першій тому краще спочатку провірте першу, виключіть її і запустіть заново вже другу
    int k;
    double time; 
    double const vv = 1.1, kk = 1.2, vk = 1.3;  
    cout << "Enter time of call in minutes: ";
    cin >> time;
    cout << "Choose operator: 1 - Vodafone-Vodafone, 2 - Kyivstar-Kyivstar, 3 - Vodafone-Kyivstar : ";
    cin >> k;

    switch (k)
    {
    case 1:
    {
        cout << "The call will cost: " << time * vv << " UAH. Call will be produced in 10 seconds, exit if don't agree.\n";
        break;
    }
    case 2:
    {
        cout << "The call will cost: " << time * kk << " UAH. Call will be produced in 10 seconds, exit if don't agree.\n";
        break;
    }
    case 3:
    {
        cout << "The call will cost: " << time * vk << " UAH. Call will be produced in 10 seconds, exit if don't agree.\n";
        break;
    }
    default:
        cout << "Invalid value!\n";
    }


    cout << "\n\t\tTask 3\n";
    /*Вася працює програмістом та отримує 50$
        за кожні 100 рядків коду.За кожне третє запізнення Васю
        штрафують на 20$.Реалізувати меню :
    ■ користувач вводить бажаний дохід Васі та кількість
        запізнень, порахувати, скільки рядків коду йому треба
        написати;
    ■ користувач вводить кількість рядків коду, написані
        Васею та бажаний обсяг зарплати.Порахувати, скільки
        разів Вася може запізнитися;
    ■ користувач вводить кількість рядків коду та кількість
        запізнень, визначити, скільки грошей заплатять Васі
        і чи заплатять взагалі.*/
    
        cout << "\n\tWelcome to Vasya's salary program!\n";
        cout << "\n1 - User enters Vasya's wished salary and how many times he was late. Count how many rows of code he need to write.\n";
        cout << "2 - User enter rows of code writen by Vasya and wished salary. Count how many times can Vasya get late.\n";
        cout << "3 - User enter rows of code and times he got late, determine, how much money will Vasya get and will he at all.\n";
        cout << "4 - Exit program.\n";
        cout << "\n\tChoose menu:\n";
        int menu;
        cin >> menu;
       switch (menu)
       {
        case 1:
        {
            float wish_salary, code;
            int late;
            cout << "Enter wished salary (USD): ";
            cin >> wish_salary;
            cout << "Enter how many times Vasya will get late: ";
            cin >> late;
            code = ((wish_salary + late * 20) / 50) * 100;
            cout << "Vasya needs to write " << code << " rows of code.\n";
            break;
        }
        case 2:
        {
            float wish_salary, max_real_salary, code;
            int late;
            cout << "Enter how many rows of code have Vasya writen: ";
            cin >> code;
            cout << "Enter wished salary (USD): ";
            cin >> wish_salary;
            max_real_salary = (code / 100) * 50;
            if (wish_salary > max_real_salary)
            {
                cout << "Vasya cannot get more than he worked for!\n";
                break;
            }
            late = (max_real_salary - wish_salary) / 20;
            cout << "Vasya can get late " << late << " times.\n";
            break;
        }
        case 3:
        {
            float wish_salary, max_real_salary, code;
            int late;
            cout << "Enter how many rows of code have Vasya writen: ";
            cin >> code;
            cout << "Enter how many times Vasya will get late: ";
            cin >> late;
            max_real_salary = ((code / 100) * 50) - late * 20;
            if (max_real_salary > 0)
            {
                cout << "Vasya will get " << max_real_salary << " USD.\n";
            }
            else
            {
                cout << "Vasya can't get salary below 0 USD.\n";
            }
        }
        case 4:
            break;
       }
    
}