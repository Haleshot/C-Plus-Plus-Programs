#include <iostream>
using namespace std;

int main() 
{
    long t;
    cin>>t;
    while(t--)
    {
        long n;
        cin>>n;

        long te,max=0;
        bool maxhasdoub=false;
        for(long i=0;i<n;i++)
        {
            cin>>te;
            if(te==max)
            {
               maxhasdoub=true; 
            }
            if(te>max)
            {
                max=te;
                maxhasdoub=false;
            }
        }
        if(maxhasdoub)
        {
            cout<<"fight:(\n";
        }
        else
        {
            cout<<"peace:)\n";
        }
    }
    return 0;
}
