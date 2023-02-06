#include <iostream>

using namespace std;

class Counter {
public:
    Counter(int v = 1) : counter(v) {}
    //Counter(int v) : counter(v) {}

    void add(int v) { counter++; }

    void sub(int v) { counter--; }

    int get(int v) { return counter; }

private:
    int counter;
};

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout
        << "�� ������ ������� ��������� �������� ��������? ������� y ��� n: ";
    std::string begin;
    std::cin >> begin;

    if (begin == "n") {
        std::cout << "�� ��������." << std::endl;
        return 0;
    }
    else if (begin == "y") {

        int n;
        cout << "������� ��������� �������� ��������: ";
        cin >> n;
        Counter counter(n);
        while (true) {
            char opt;
            cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
            cin >> opt;

            switch (opt) {
            case '+':
                counter.add(n);
                break;

            case '-':
                counter.sub(n);
                break;

            case '=':
                std::cout << counter.get(n) << std::endl;
                break;

            case 'x':
                std::cout << "�� ��������." << std::endl;
                return 0;

            default:
                cout << "������������ ������!\n";
            }
        }
    }
    return 0;
}