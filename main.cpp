#include <iostream>
#include <string>
#include <fstream>
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

void editCS(CompressorStation& cs) {
    int n;

    cout << "1. Запустить цех" << endl;
    cout << "2. Остановить цех" << endl;
    cin >> n;

    if (n == 1) {
        if (cs.workshopsInWork < cs.workshops) {
            cs.workshopsInWork++;
        }
    }
    else if (n == 2) {
        if (cs.workshopsInWork > 0) {
            cs.workshopsInWork--;
        }
    }
}

void save(Pipe& p, CompressorStation& cs) {
    ofstream fout("data.txt");
    fout << p.name << " " << p.length << " " << p.diameter << " " << p.inRepair << endl;
    fout << cs.name << " " << cs.workshops << " " << cs.workshopsInWork << " " << cs.stationClass << endl;
}

void load(Pipe& p, CompressorStation& cs) {
    ifstream fin("data.txt");
    fin >> p.name >> p.length >> p.diameter >> p.inRepair;
    fin >> cs.name >> cs.workshops >> cs.workshopsInWork >> cs.stationClass;
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
        else if (choice == 5) {
            editCS(cs);
        }
        else if (choice == 6) {
            save(pipe, cs);
        }
        else if (choice == 7) {
            load(pipe, cs);
        }
    }

    return 0;
}