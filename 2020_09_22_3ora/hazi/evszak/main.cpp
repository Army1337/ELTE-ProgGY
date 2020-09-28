#include <iostream>

using namespace std;

int main()
{
    system ("chcp 1250"); //�kezetes bet� beolvas�s jav�t�s.
    setlocale(LC_ALL,"hun");


    const string havak[12] {"janu�r","febru�r","m�rcius","�prilis","m�jus","j�nius","j�lius","agusztus","szeptember","okt�ber","november","december"};
    const string evszakok[4] {"t�l","tavasz","ny�r","�sz"};
    string ho,evszak;
    bool van;
    int hsz;

    do
    {
        cout << "Add meg a h�nap nev�t kisbet�kkel!" << endl;
        cin >>ho;
        for (hsz=0;hsz<12;++hsz)
        {
            if (ho == havak[hsz])
            {
                van = true;
                break; //Hogy �tadja a "hsz" �rt�k�t a for cikluson k�v�lre
            }
        }
        if (!van)
        {
           cout << "Ilyen h�nap nincs! ";
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(!van);

    evszak=evszakok[((hsz/3)%4)];
    cout << havak[hsz] << " nev� h�nap "  << evszak << "-hoz/hez tartozik!" << endl;

    return 0;
}
