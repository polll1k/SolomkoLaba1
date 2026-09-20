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

void editPipe(Pipe& p) {
    if (p.inRepair == true) {
        p.inRepair = false;
        cout << "Труба снята с ремонта" << endl;
    }
    else {
        p.inRepair = true;
        cout << "Труба отправлена в ремонт" << endl;
    }
}

int main() {
    Pipe pipe;
    CompressorStation cs;
    int choice;

    while (true) {
        cout << endl;
        cout << "1. Добавить трубу" << endl;
        cout << "2. Добавить КС" << endl;
        cout << "3. Просмотр объектов" << endl;
        cout << "4. Редактировать трубу" << endl;
        cout << "5. Редактировать КС" << endl;
        cout << "6. Сохранить" << endl;
        cout << "7. Загрузить" << endl;
        cout << "0. Выход" << endl;
        cin >> choice;

        if (choice == 0) {
            break;
        }

        if (choice == 1) {
            addPipe(pipe);
        }
        else if (choice == 2) {
            addCS(cs);
        }
        else if (choice == 3) {
            printPipe(pipe);
            printCS(cs);
        }
        else if (choice == 4) {
            editPipe(pipe);
        }
        else {
            cout << "Этот пункт пока не сделан" << endl;
        }
    }

    return 0;
}