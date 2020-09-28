#include <iostream>

using namespace std;

int main()
{
    system ("chcp 1250"); //Ékezetes betû beolvasás javítás.
    setlocale(LC_ALL,"hun");


    const string havak[12] {"január","február","március","április","május","június","július","agusztus","szeptember","október","november","december"};
    const string evszakok[4] {"tél","tavasz","nyár","õsz"};
    string ho,evszak;
    bool van;
    int hsz;

    do
    {
        cout << "Add meg a hónap nevét kisbetûkkel!" << endl;
        cin >>ho;
        for (hsz=0;hsz<12;++hsz)
        {
            if (ho == havak[hsz])
            {
                van = true;
                break; //Hogy átadja a "hsz" értékét a for cikluson kívûlre
            }
        }
        if (!van)
        {
           cout << "Ilyen hónap nincs! ";
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(!van);

    evszak=evszakok[((hsz/3)%4)];
    cout << havak[hsz] << " nevû hónap "  << evszak << "-hoz/hez tartozik!" << endl;

    return 0;
}
