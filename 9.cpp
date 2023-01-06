#include <iostream>
using namespace std;
struct Datchik
{
    float minznach;
    float maxznach;
    float pogr;
    float maxspeed;
};

Datchik makeDatchik(float mi, float ma, float pgr, float mspeed)
{
    Datchik D;
    D.minznach = mi;
    D.maxznach = ma;
    D.pogr = pgr;
    D.maxspeed = mspeed;
    return D;
}

float averagePogr(Datchik D1,Datchik D2)
{
    return (D1.pogr + D2.pogr) / 2;
}

int main()
{
    Datchik D1 = makeDatchik(0,256,0.001,255);
    Datchik D2 = makeDatchik(0,256,0.1,255);
    cout << averagePogr(D1,D2) << endl;
    
   
    
    return 0;
}