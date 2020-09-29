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
        cout << "Add meg hányan mentetek nyaralni!" << endl;
        cin >>T;
        hiba = cin.fail() || cin.peek()!='\n' || T <= 0;
        if(hiba)
        {
            cout << "Szöveget,valós számot adtál meg, vagy ennyien nem mehettetek el nyaralni." << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    do{
        cout << "Add meg hány napos volt a nyaralás!" << endl;
        cin >> NapDb;
        hiba = cin.fail() || cin.peek()!='\n' || NapDb < 0;
        if(hiba)
        {
            cout << "Szöveget,valós számot adtál meg, vagy ilyen hosszú nem lehetett a nyaralás" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);

    //------------------------------------------------------
    int koltes[NapDb];
    for (int i=0;i<NapDb;++i)
    {
        do{
            cout << "Add meg mennyit költöttetek a " << i+1 << ". napon!" << endl;
            cin >> koltes[i];
            hiba = cin.fail() || cin.peek()!='\n' || koltes[i] < 0;
            if(hiba)
            {
                cout << "Szöveget,valós számot adtál meg, vagy ennyit nem költhettetek! " << endl;
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
    cout << DragaDb << " db napon költöttetek többet mint 100 euró" << endl;
    return 0;
}
