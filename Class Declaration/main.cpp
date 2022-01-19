#include <iostream>
using namespace std;

class Simple
{
    private:
        int a, b, c;
    public:
        void Readdata(int x, int y)
        {
            a = x;
            b = y;
        }

        void Adddata(int x, int y)
        {
            c = x + y;
        }

        void Displaydata(void)
        {
            cout << "Addition of the two numbers is : " << c << endl;
        }

};

int main()
{

    Simple sim;
    int n1, n2;
    cout << "Enter two integer numbers: \n";
    cin >> n1 >> n2;
    sim.Readdata(n1, n2);
    sim.Adddata(n1, n2);
    cout << endl;
    sim.Displaydata();


    return 0;
}
