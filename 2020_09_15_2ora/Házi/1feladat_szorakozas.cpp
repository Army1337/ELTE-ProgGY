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
        cout << "Add meg mennyi pénzed van!" << endl;
        cin >>penz;
        hiba = cin.fail() || cin.peek()!='\n' || penz % 5 > 0 || penz <=0 ;
        if(hiba)
        {
            cout << "Szöveget,valós vagy hibás számot adtál meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    int elkolt = penz % hatar;
    int utal = penz-elkolt;
    if(penz <= hatar){
        cout<<penz<<" Forintot költök el azonnal"<<endl;
    }
    else{
        cout<<"Összesen "<<penz<<" Forintom van amibõl "<<utal<<" Forintot utalok a számlamra és "<<elkolt<<" Forintot költök el szorakozásra."<<endl;
    }
    return 0;
}
