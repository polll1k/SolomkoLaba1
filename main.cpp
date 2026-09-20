#include <iostream>
#include <string>
using namespace std;

struct Pipe {
    string name;
    double length;
    int diameter;
    bool inRepair;
};

struct CompressorStation {
    string name;
    int workshops;
    int workshopsInWork;
    int stationClass;
};

void addPipe(Pipe& p) {
    cout << "Название: ";
    cin >> p.name;
    cout << "Длина: ";
    cin >> p.length;
    cout << "Диаметр: ";
    cin >> p.diameter;
    cout << "В ремонте (1/0): ";
    cin >> p.inRepair;
}

void addCS(CompressorStation& cs) {
    cout << "Название: ";
    cin >> cs.name;
    cout << "Количество цехов: ";
    cin >> cs.workshops;
    cout << "Цехов в работе: ";
    cin >> cs.workshopsInWork;
    cout << "Класс: ";
    cin >> cs.stationClass;
}

void printPipe(Pipe& p) {
    cout << "Труба " << p.name << endl;
    cout << "Длина: " << p.length << endl;
    cout << "Диаметр: " << p.diameter << endl;
    cout << "Ремонт: " << p.inRepair << endl;
}

void printCS(CompressorStation& cs) {
    cout << "КС " << cs.name << endl;
    cout << "Цехов: " << cs.workshops << endl;
    cout << "Работает: " << cs.workshopsInWork << endl;
    cout << "Класс: " << cs.stationClass << endl;
}

int main() {
    Pipe pipe;
    CompressorStation cs;

    addPipe(pipe);
    addCS(cs);

    cout << endl;
    printPipe(pipe);
    printCS(cs);

    return 0;
}