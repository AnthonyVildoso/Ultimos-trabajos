#include <iostream>

using namespace std;

class Birthday{
public:
    int dia,mes,anio;
};
class persona{
private:
    string nombre;
    Birthday micumple;
public:
    persona(string name,int d,int m,int a){
        nombre=name;
        micumple.dia=d;
        micumple.mes=m;
        micumple.anio=a;
    }void cumple(){
        cout<<nombre<<" tiene ";
        if(micumple.mes>5){
            cout<<2017-micumple.anio-1<<" anios."<<endl;
        }else{
            cout<<2017-micumple.anio<<" anios."<<endl;
        }
    }
};
int main()
{
    persona Juan("-Juan",8,5,1998);
    persona Luis("-Luis",21,11,1999);
    persona Daniel("-Daniel",12,10,1993);
    Juan.cumple();
    Luis.cumple();
    Daniel.cumple();
    return 0;
}
