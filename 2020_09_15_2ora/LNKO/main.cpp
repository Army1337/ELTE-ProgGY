#include <iostream>

using namespace std;

int main()
{
    //Ékezetes betûk
    setlocale(LC_ALL,"hun");
    //Hibakezeléshez
    bool hiba;
    //bemenet
    int a,b;
    //Kimenet
    int LNKO;
    //beolvasás
    cout << "Kiszámoljuk két szám legnagyobb közös osztóját." << endl;
    do
    {
        cout << "Add 'a' értékét(nem negatív egész szám)" << endl;
        cin >>a;
        hiba = cin.fail() || cin.peek()!='\n' || a < 0;
        if(hiba)
        {
            cout << "Szöveget,valós vagy hibás számot adtál meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    do
    {
        cout << "Add 'b' értékét(nem pozítiv egész szám)" << endl;
        cin >>b;
        hiba = cin.fail() || cin.peek()!='\n' || b < 1;
        if(hiba)
        {
            cout << "Szöveget,valós vagy nem pozitív számot adtál meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    //Megoldás
    cout << a << "  és  " << b << " legnagyobb közös osztója: ";
    if(a<b&&a!=0)
    {//berakjuk cs-be az a változó értékét, majd az a értékbe a b értéket majd a cs értékét a b értékbe.
        int cs = a;
        a = b;
        b = cs;
    }
    int r = a%b;//maradékos osztás jele % (maradékot adja vissza)
    while(r>0)
    {
        a = b;
        b = r;
        r = a%b;
    }
    LNKO = b;
    cout << LNKO << endl;
    return 0;
}
