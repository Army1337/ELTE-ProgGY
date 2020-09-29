#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    int T;
    int NapDb;
    int DragaDb;
    bool hiba;

    do
    {
        cout << "Add meg h�nyan mentetek nyaralni!" << endl;
        cin >>T;
        hiba = cin.fail() || cin.peek()!='\n' || T <= 0;
        if(hiba)
        {
            cout << "Sz�veget,val�s sz�mot adt�l meg, vagy ennyien nem mehettetek el nyaralni." << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    do{
        cout << "Add meg h�ny napos volt a nyaral�s!" << endl;
        cin >> NapDb;
        hiba = cin.fail() || cin.peek()!='\n' || NapDb < 0;
        if(hiba)
        {
            cout << "Sz�veget,val�s sz�mot adt�l meg, vagy ilyen hossz� nem lehetett a nyaral�s" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    //------------------------------------------------------
    int koltes[NapDb];
    for (int i=0;i<NapDb;++i)
    {
        do{
            cout << "Add meg mennyit k�lt�ttetek a " << i+1 << ". napon!" << endl;
            cin >> koltes[i];
            hiba = cin.fail() || cin.peek()!='\n' || koltes[i] < 0;
            if(hiba)
            {
                cout << "Sz�veget,val�s sz�mot adt�l meg, vagy ennyit nem k�lthettetek! " << endl;
            }
            cin.clear();
            cin.ignore(999,'\n');
        }while(hiba);
    }
    //------------------------------------------------------
    for (int i=0;i<NapDb;++i)
    {
        if ((koltes[i]/(double)T)>100){
          DragaDb++;
        }
    }
    //------------------------------------------------------
    cout << DragaDb << " db napon k�lt�ttetek t�bbet mint 100 eur�" << endl;
    return 0;
}
