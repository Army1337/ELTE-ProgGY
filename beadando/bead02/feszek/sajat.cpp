#include <iostream>
#include <vector>
using namespace std;

struct madar
{
    int x = 0, y = 0, r = 0;
};
int main()
{
    int msz = 0;
    int T = 1;
    cin >> msz>>T;
    madar* madarak = new madar[msz];
    for (int i = 0; i < msz; i++){
        cin >> madarak[i].x >> madarak[i].y >> madarak[i].r;
    }
    vector< vector<int> >tomb(T, vector<int>(T) );

    for(int i=0; i<T; i++)
    {
            for(int j=0; j<T; j++)
            {
                    tomb[i][j] = 0;
                    //cout<<" "<<i<<"   :   "<<j;
            }
            //cout<<"\n";
    }


    int error = 0;
    int maxx = 0;
    int minx =0;
    int maxy = 0;
    int miny =0;
    for(int i=0; i<msz; i++)
    {
        error = 0;
            for(int x=((madarak[i].x)-(madarak[i].r)); x<((madarak[i].x)+(madarak[i].r)); x++)
            {
                for(int y=((madarak[i].y)-(madarak[i].r)); y<((madarak[i].y)+(madarak[i].r)); y++)
                {
                    if (x<0 || x>= T || y<0 || y>=T){

                    }
                    else{
                        tomb[x][y] = tomb[x][y] + 1;
                    }
                }

            }
    }

    int vereked = 0;
    for(int i=0; i<msz; i++)
    {
            vereked = 0;
            for(int x=(madarak[i].x-madarak[i].r); x<(madarak[i].x+madarak[i].r); x++)
            {
                for(int y=(madarak[i].y-madarak[i].r); y<madarak[i].y+madarak[i].r; y++)
                {
                    if (x<0 || x>= T || y<0 || y>=T){

                    }
                    else{

                        if (tomb[x][y] >= 2){
                            vereked = 1;
                            break;
                        }
                    }
                    if (vereked == 1){
                            break;
                            }
                }

            }
            if (vereked != 1){
                cout << i+1 << " ";
                }
    }

    cout << "x: " << minx<< " y:" << miny<<endl;

    return 0;
}
