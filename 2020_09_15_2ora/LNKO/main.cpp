#include <iostream>

using namespace std;

int main()
{
    //�kezetes bet�k
    setlocale(LC_ALL,"hun");
    //Hibakezel�shez
    bool hiba;
    //bemenet
    int a,b;
    //Kimenet
    int LNKO;
    //beolvas�s
    cout << "Kisz�moljuk k�t sz�m legnagyobb k�z�s oszt�j�t." << endl;
    do
    {
        cout << "Add 'a' �rt�k�t(nem negat�v eg�sz sz�m)" << endl;
        cin >>a;
        hiba = cin.fail() || cin.peek()!='\n' || a < 0;
        if(hiba)
        {
            cout << "Sz�veget,val�s vagy hib�s sz�mot adt�l meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    do
    {
        cout << "Add 'b' �rt�k�t(nem poz�tiv eg�sz sz�m)" << endl;
        cin >>b;
        hiba = cin.fail() || cin.peek()!='\n' || b < 1;
        if(hiba)
        {
            cout << "Sz�veget,val�s vagy nem pozit�v sz�mot adt�l meg!" << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    //Megold�s
    cout << a << "  �s  " << b << " legnagyobb k�z�s oszt�ja: ";
    if(a<b&&a!=0)
    {//berakjuk cs-be az a v�ltoz� �rt�k�t, majd az a �rt�kbe a b �rt�ket majd a cs �rt�k�t a b �rt�kbe.
        int cs = a;
        a = b;
        b = cs;
    }
    int r = a%b;//marad�kos oszt�s jele % (marad�kot adja vissza)
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
