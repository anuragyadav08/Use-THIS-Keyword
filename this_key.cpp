

#include <iostream>

using namespace std;

class anu
{
    private:
        int x,y;
    public: 
        void get(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
        void put()
        {
            cout<<x<<"\n"<<y;
        }
};
int main()
{
    anu obj;
    obj.get(8,12);
    obj.put();

    return 0;
}
