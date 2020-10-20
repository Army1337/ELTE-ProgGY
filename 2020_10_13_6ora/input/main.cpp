#include <iostream>

using namespace std;


int be_egesz(string input_szoveg, int minert, int maxert, string hibauzenet);
void be_egesz_tomb(const int meret, int tomb[]);


int main()
{
    setlocale(LC_ALL,"hun");//�kezetes bet�k
    bool hiba;
    int db;

    db = be_egesz("�rd be a t�mb elemsz�m�t (1<=sz�m<=20)!",1,20,"Hib�s sz�mot adt�l meg!");
    //t�mb deklar�l�sa
    int szamok[db];


    int asd;
    be_egesz_tomb(db,szamok);
    return 0;
}


int be_egesz(string input_szoveg, int minert, int maxert, string hibauzenet)
{
    int szam;
    bool hiba; //hibaellenorzeshez
    do
    {
        cout << input_szoveg << endl;
        cin >> szam;
        hiba=cin.fail() || cin.peek()!='\n' || (szam<minert || szam>maxert);
        if (hiba)//Nem �rv�nyes az input
        {
            cout << hibauzenet << endl;
        }
        cin.clear();
        cin.ignore(999,'\n');
    }while(hiba);
    return szam;

}
    void be_egesz_tomb(const int meret, int tomb[])
    {
        for (int i=0;i<meret;i++)
        {
            string szoveg ="�rd be a(z) " + to_string(i+1) +". sz�mot (egy 0-n�l nagyobb de 20 nal kisebb szamot)";
            cout << i+1 << ". ertek: " << endl;
            tomb[i] = be_egesz(szoveg,0,20,"hib�s szamot adtal meg");
        }

    }




