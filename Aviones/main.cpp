#include <iostream>
#include <vector>
using namespace std;

class Avion{
public:
    int velocidad;
    int altura;
    int asientos;
    Avion(int vel,int alt, int asien){
        velocidad=vel;
        altura=alt;
        asientos=asien;
    }void datos(){
        cout<<"velocidad:"<<velocidad<<endl;
        cout<<"altura   :"<<altura<<endl;
        cout<<"asientos :"<<asientos<<endl;
    }
};
class Torre{
public:
    vector<Avion *>j;
    void nuevo_avion(){
        cout
    }
};
int main()
{
    Avion jumbo(14,240,60);
    Avion boeing(14,210,400);
    Avion comercial(14,200,10);
    jumbo.datos();
    boeing.datos();
    return 0;
}
