#include <iostream>

struct negyzet
{
    int x = 0, y = 0, r = 0;
};

int main()
{
    using namespace std;
    bool vereked = false;

    int msz = 0;
    int T = 1;
    cin >> msz>>T;

    negyzet* negyzett = new negyzet[msz];

    for (int i = 0; i < msz; i++){
        cin >> negyzett[i].x >> negyzett[i].y >> negyzett[i].r;
    }
	string s = "";
    for (int i = 0; i < msz; i++)
    {
        for (int j = 0; j < msz; j++)
        {
            if (j != i){
                int Xtav = abs(negyzett[j].x - negyzett[i].x);
                int Ytav = abs(negyzett[j].y - negyzett[i].y);
                int Rossz = negyzett[i].r + negyzett[j].r;
                if (Xtav <= Rossz && Ytav <= Rossz){
                    vereked = true;
                }
            }
        }

        if (!vereked){
			if(i+1 == msz){
                s+=to_string(i+1);
            }
			else{
                s+=to_string(i+1)+" ";
            };
        }
        vereked = false;
    }
	cout<<s;
    return 0;
}
