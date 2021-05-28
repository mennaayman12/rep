#include <iostream>

using namespace std;
class MYRECT{
    private:
int length;
int width;
public :
    MYRECT(){length=0;
    width=0;}
    set_Length(int l){length=l;}
    set_Width(int w){width=w;}
    getArea(){return (length*width);}
    };

int main()
{
   cout<<"Hello World"<<endl;
    return 0;
}
