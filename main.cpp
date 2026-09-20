#include <iostream>
#include <string>
using namespace std;

struct Pipe{
    string name;
    double length;
    int diameter;
    bool inRepair;
};

struct CompressorStation{
    string name;
    int workshops;
    int workshopsInWork;
    int stationClass;
};

int main(){
    cout<<"Программа для работы с трубой и КС"<<endl;
    return 0;
}