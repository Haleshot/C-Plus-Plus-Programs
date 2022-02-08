// Program that calculates Standard Deviation of a class using functions and data entered by user.
#include <iostream>
#include <math.h>
using namespace std;

float Mean(float Percentage[], int limit)
{
    float sum_1 = 0, avg;
    for (int i = 0; i < limit; i++)
    {
        sum_1 += Percentage[i];
    }
    avg = sum_1/ limit;
    return avg;
}

float Variance(float Percentage[], int limit)
{
    float sum_2 = 0, variance, sum = 0, avg;

    for (int i = 0; i < limit; i++)
    {
        sum += Percentage[i];
    }
    avg = sum/ limit;

    for (int i = 0; i < limit; i++)
    {
        sum_2 += pow((Percentage[i] - avg) , 2);
    }
    variance = sum_2/ limit;
    return variance;
}





int main()
{
    int limit;
    cout << "Enter Limit of class\n" << endl;
    cin >> limit;

    float Percentage[limit];
    cout << "Enter Percentage of students\n" << endl;

    for (int i = 0; i < limit; i++)
    {
        cin >> Percentage[i];
    }
    cout << " Average Percentage of the Class is \t\t" << Mean(Percentage, limit) << endl;;
    cout << " Variance of the Class is \t\t" << Variance(Percentage, limit) << endl;;
    cout << " Standard Deviation of the Class is \t\t" << sqrt(Variance(Percentage, limit));
    return 0;
}
