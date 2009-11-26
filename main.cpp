#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const int ar_con= 9;
    bool fl[ar_con];
    float i=0.0;
    srand(time(0));
    int ran;
    while (i<=1)
    {
        for (int no = 0;no<=ar_con;no++)
        {
            ran = ((rand()%10)+1);
            if ((1/i)<ran)
            {
                fl[no]=true;
            }
            else
            {
                fl[no]=false;
            }
        }
        cout << i <<":1/"<<(1/i) <<":"<< (int)((1/i)) ;
        for (int ni = 0;ni<=ar_con;ni++)
        {
            cout  << ":"<< fl[ni];
        }
        cout <<endl;
        i  += 0.1;
    }
    return 0;
}
