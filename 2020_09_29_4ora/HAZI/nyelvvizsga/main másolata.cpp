#include <iostream>

int main()
{


    setlocale(LC_ALL,"hun");
    int vDb;
    int maxP;
    bool hiba,van;
    //----------------------------------------//
    do
    {
        cout << "Add meg h�nyan �rtak tesztet!" << endl;
        cin >>vDb;
        hiba = cin.fail() || cin.peek()!='\n' || vDb < 0;
        if(hiba)
        {
            cout << "Sz�veget,val�s sz�mot adt�l meg, vagy ennyien nem �rhattak tesztet!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    do
    {
        cout << "Mi volt a maxim�lisan el�rhet� pontsz�m?" << endl;
        cin >>maxP;
        hiba = cin.fail() || cin.peek()!='\n' || maxP <= 0;
        if(hiba)
        {
            cout << "Sz�veget,val�s sz�mot adt�l meg, vagy ennyi pontot nem �rhettek el!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    int tesztek[vDb];
    //----------------------------------------//
    for (int i=0;i<vDb;++i){
        do
        {
            cout << "Add meg a "<< i+1 << ". tanul� eredm�ny�t!" << endl;
            cin >>tesztek[i];
            hiba = cin.fail() || cin.peek()!='\n' || tesztek[i] > maxP || tesztek[i] < 0 ;
            if(hiba)
            {
                cout << "Sz�veget,val�s sz�mot adt�l meg, vagy ennyi pontot nem �rhettek el!" << endl;
            }
            cin.clear();
            cin.ignore(999,'\n');
        }while(hiba);
    }
    //----------------------------------------//
    int sorsz[vDb];
    int j = 0;
    for (int i=0;i<vDb-1;++i){
        if(tesztek[i] == tesztek[i+1])
        {
            van = true;
            sorsz[j] = i;
            j++;
        }
    }
    //----------------------------------------//
    if (van == true){
        cout << "Tal�ltam gyan�s egyforma pontsz�m� dolgozatot" << endl;
        for (int i=0;i<j;++i){
            cout<< sorsz[i]+1 << ", ";
            if (tesztek[sorsz[i]] != tesztek[sorsz[i]+2]){
                cout<< sorsz[i]+2<<" ("<<tesztek[sorsz[i]]<<" pont)"<< endl;
            }
        }
    }else{cout<<"Nem tal�ltunk gyan�s esetet!"<<endl;}

    return 0;
}
