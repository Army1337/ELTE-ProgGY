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
        cout << "Add meg hány darab napon keresztül lettek az adatok felírva!" << endl;
        cin >>dbn;
        hiba = cin.fail() || cin.peek()!='\n' || dbn <= 0;
        if(hiba)
        {
            cout << "Szöveget,valós vagy hibás számot adtál meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    int vasarlokszama[dbn];

    for (int i=0;i<dbn;++i)
    {
        do
        {
            cout << "Add meg a(z) " << i+1 <<". napon vásárlók számát!" << endl;
            cin >>vasarlokszama[i];
            hiba = cin.fail() || cin.peek()!='\n' || vasarlokszama[i] <= 0 || vasarlokszama[i] >100;
            if(hiba)
            {
                cout << "Szöveget,valós vagy hibás számot adtál meg!" << endl;
            }
            cin.clear();
            cin.ignore(999,'\n');
        }while(hiba);
    }
    //Meglehetett volna oldani tömbök nélkül is, meg az alattam lévõ for ciklus nélkül, de gondolom erre gondolt tanárúr hogy gyakoroljuk a tömbök kezelését :)
    for (int i=0;i<dbn;++i)
    {
        osszes = osszes + vasarlokszama[i];
    }
    atlag = osszes/dbn;
    cout << "Átlagosan "<< atlag <<" db vásárló volt!" << endl;

    return 0;
}
