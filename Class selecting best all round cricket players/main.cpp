// Program that selects best all round player with class Encapsulation.
#include <iostream>
#include <string>
using namespace std;

class Cricket
{
    private:
        float bat_avg[20], bowl_avg[20];
        int c = 0, i1 = 0, i2 = 0, lim;
        string Select_Player[40];
        string Name_Player[40];
        string Name_Region[20];
    public:
        void readData(int limit, float bat[20], float bowl[20], string Player[24], string Region[25])
        {
            for (i1 = 0; i1 < limit; i1++){
            lim = limit;
            bat_avg[i1] = bat[i1];
            bowl_avg[i1] = bowl[i1];
            Name_Player[i1] = Player[i1];
            Name_Region[i1] = Region[i1];
        }}

        void generateList(void)
        {
            for(i2 = 0; i2 < lim; i2++){
            if(bat_avg[i2] > 30 && bowl_avg[i2] < 25)
            {
                Select_Player[i2] = Name_Player[i2];
            }}
        }

        void displayList(void)
        {
            for(i2 = 0; i2 < lim; i2++)
                {
                    cout << "\nSelected Candidate : " << Select_Player[i2] << endl;
                }

        }

};

int main()
{

    Cricket Cric;
    int limit;

    cout << "Enter the limit of players (Name of Player, Region, Batting Average, Bowling Average) : \n";
    cin >> limit;

    float bat_Avg[limit], bowl_Avg[limit];
    string Name_Player[40], Name_region[20];
    cout << "Enter Cricket Player info: \n";

    for (int i = 0; i < limit; i++)
    {
        cin >> bat_Avg[i] >> bowl_Avg[i] >> Name_Player[i] >> Name_region[i];
    }
    Cric.readData(limit, bat_Avg, bowl_Avg, Name_Player, Name_region);
    Cric.generateList();

    Cric.displayList();
    cout << endl;

    return 0;
}
