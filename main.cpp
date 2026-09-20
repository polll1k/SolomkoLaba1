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

void addPipe(Pipe& p){
 cout<<"Название трубы: ";
 cin>>p.name;
 cout<<"Длина трубы (км): ";
 cin>>p.length;
 cout<<"Диаметр трубы (мм): ";
 cin>>p.diameter;
 cout<<"Труба в ремонте? (1-да, 0-нет): ";
 cin>>p.inRepair;
}

int main(){
 Pipe pipe;

 cout<<"Программа для работы с трубой и КС"<<endl;
 addPipe(pipe);

 return 0;
}