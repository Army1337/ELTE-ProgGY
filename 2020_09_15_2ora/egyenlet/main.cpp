#include <iostream>

using namespace std;

int main()
{

    float a,b;
    float x;
    char* S;
    bool hiba;
    //�kezetes bet�k
    setlocale(LC_ALL,"hun");
    do{
        cout << "Add meg a(z) 'A' �rt�k�t." << endl;
        cin >> a;
        hiba = cin.fail() || cin.peek()!='\n';
        if (hiba)
        {
            cout << "Sz�mot adj meg." << endl;
        }
        //input puffer �r�t�se.
        cin.clear();
        cin.ignore(999,'\n');

    }while(hiba);

    do{
        cout << "Add meg a(z) 'B' �rt�k�t." << endl;
        cin >> b;
        hiba = cin.fail() || cin.peek()!='\n';
        if (hiba)
        {
            cout << "Sz�mot adj meg." << endl;
        }
        //input puffer �r�t�se.
        cin.clear();
        cin.ignore(999,'\n');

    }while(hiba);

    if (a==0&&b==0)
    {
        S = "Azonoss�g";
    }
    else if(a==0&&b!=0){
        S = "Ellentmond�s";
    }
    else if(a!=0){
        x=-b/a;
    }
    cout << S << "   X �rt�ke:" << x<< endl;


    cout << "Hello world!" << endl;
    return 0;
}
