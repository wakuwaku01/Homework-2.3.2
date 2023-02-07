#include <iostream>
#include <string>

using namespace std;

class Counter {
public:
    Counter(int num = 1) : num(num) {}

    void add(int v) { num++; }

    void sub(int v) { num--; }

    int get(int v) { return num; }

private:
    int num;
};

int main() {
    setlocale(LC_ALL, "Russian");
    int num;
    std::cout
        << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
    std::string begin;
    std::cin >> begin;

    if (begin == "n") {
        std::cout << "Значение счётчика 1" << std::endl;
        num = 1;

    }
    else if (begin == "y") {
        cout << "Введите начальное значение счетчика: ";
        cin >> num;
    }
    Counter counter(num);
    while (true) {
        char opt;
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> opt;

        switch (opt) {
        case '+':
            counter.add(num);
            break;

        case '-':
            counter.sub(num);
            break;

        case '=':
            std::cout << counter.get(num) << std::endl;
            break;

        case 'x':
            std::cout << "До свидания." << std::endl;
            return 0;

        default:
            cout << "Неправильный символ!\n";
        }
    }

    return 0;
}