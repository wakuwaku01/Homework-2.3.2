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
        << "�� ������ ������� ��������� �������� ��������? ������� y ��� n: ";
    std::string begin;
    std::cin >> begin;

    if (begin == "n") {
        std::cout << "�������� �������� 1" << std::endl;
        num = 1;

    }
    else if (begin == "y") {
        cout << "������� ��������� �������� ��������: ";
        cin >> num;
    }
    Counter counter(num);
    while (true) {
        char opt;
        cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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
            std::cout << "�� ��������." << std::endl;
            return 0;

        default:
            cout << "������������ ������!\n";
        }
    }

    return 0;
}