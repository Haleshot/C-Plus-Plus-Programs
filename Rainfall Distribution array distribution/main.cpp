// Program that inputs Rain fall Distribution of 31 days and displays the wettest week and driest day.
#include <iostream>

using namespace std;

int main()
{
    float A[4][8];
    int i = 0, j = 0;
    float sum = 0;
    float avg[4][1];
    cout << "Enter Rainfall readings for the month(31 days)\n" << endl;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 8; j++)
        {
            cin >> A[i][j];
        }

    }
    A[3][7] = {0};

    cout << "\n\nThe Rainfall Distribution for the month is : \n \n";
    for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 8; j++)
                    {
                        cout << "\t";
                        cout << A[i][j];
                        cout << "\t";
                    }
                    cout << endl << endl;
            }



    for (int i = 0; i < 4; i++)
        {
            sum = 0;
            for (int j = 0; j < 7; j++)
                {
                    sum += A[i][j];
                }
                avg[i][0] = sum/ 7;
                cout << endl << endl;
        }


    cout << "Average Rainfall of respective weeks : \n \n";
    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 1; j++)
                {
                    cout << "\t";
                    cout << avg[i][j];
                    cout << "\t";
                }
                cout << endl << endl;
        }


        float Max = avg[0][0];
        int index = 0;

        //Max Calculator
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 1; j++)
                {
                    if(avg[i][j] > Max)
                        {
                            Max = avg[i][j];
                        }
                }
        }



        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 1; j++)
                {
                    if(avg[i][j] == Max)
                        {
                            index = i + 1;
                            break;
                        }
                }
        }


        //Min Calculator
        float Min = A[0][0];
        int index_2 = 0, x = 0, y = 0;

        for (x = 0; x < 4; x++)
        {
            for (y = 0; y < 7; y++)
                {
                    if(A[x][y] < Min)
                        {
                            Min = A[x][y];
                        }
                }
        }

        for (x = 0; x < 4; x++)
        {
            for (y = 0; y < 7; y++)
                {
                    if(A[x][y] == Min)
                        {
                            index_2 = x*7 + (y + 2);
                            break;
                        }
                }
        }



        cout << "Week " << index << " has the highest average rainfall with " << Max << " cm of rainfall. \n";
        cout << "Day " << index_2 - 1 << " has the least rainfall throughout the month with " << Min << " cm of rainfall. \n";










        return 0;

}

