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

int main() {
    Pipe pipe;
    CompressorStation cs;

    cout << "Труба:" << endl;
    addPipe(pipe);

    cout << "КС:" << endl;
    addCS(cs);

    return 0;
}