#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL,"hun");


    int const hatar = 5000;
    int penz;
    bool hiba;

    do
    {
        cout << "Add meg mennyi p�nzed van!" << endl;
        cin >>penz;
        hiba = cin.fail() || cin.peek()!='\n' || penz % 5 > 0 || penz <=0 ;
        if(hiba)
        {
            cout << "Sz�veget,val�s vagy hib�s sz�mot adt�l meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    int elkolt = penz % hatar;
    int utal = penz-elkolt;
    if(penz <= hatar){
        cout<<penz<<" Forintot k�lt�k el azonnal"<<endl;
    }
    else{
        cout<<"�sszesen "<<penz<<" Forintom van amib�l "<<utal<<" Forintot utalok a sz�mlamra �s "<<elkolt<<" Forintot k�lt�k el szorakoz�sra."<<endl;
    }
    return 0;
}
