#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    int dbn;
    bool hiba;
    double osszes = 0,atlag = 0;
    do
    {
        cout << "Add meg h�ny darab napon kereszt�l lettek az adatok fel�rva!" << endl;
        cin >>dbn;
        hiba = cin.fail() || cin.peek()!='\n' || dbn <= 0;
        if(hiba)
        {
            cout << "Sz�veget,val�s vagy hib�s sz�mot adt�l meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    int vasarlokszama[dbn];

    for (int i=0;i<dbn;++i)
    {
        do
        {
            cout << "Add meg a(z) " << i+1 <<". napon v�s�rl�k sz�m�t!" << endl;
            cin >>vasarlokszama[i];
            hiba = cin.fail() || cin.peek()!='\n' || vasarlokszama[i] <= 0 || vasarlokszama[i] >100;
            if(hiba)
            {
                cout << "Sz�veget,val�s vagy hib�s sz�mot adt�l meg!" << endl;
            }
            cin.clear();
            cin.ignore(999,'\n');
        }while(hiba);
    }
    //Meglehetett volna oldani t�mb�k n�lk�l is, meg az alattam l�v� for ciklus n�lk�l, de gondolom erre gondolt tan�r�r hogy gyakoroljuk a t�mb�k kezel�s�t :)
    for (int i=0;i<dbn;++i)
    {
        osszes = osszes + vasarlokszama[i];
    }
    atlag = osszes/dbn;
    cout << "�tlagosan "<< atlag <<" db v�s�rl� volt!" << endl;

    return 0;
}
