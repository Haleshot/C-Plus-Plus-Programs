//Task 3 done with functions
#include <iostream>
using namespace std;

template <int rows, int columns>
void DisplayScaleImage(int (&a)[rows][columns])
{
    //DisplayScaleImage
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << "\t";
            cout << a[i][j] << " ";
            cout << "\t";
        }
        cout << endl;
    }
}

template <int rows, int columns>
void GrayScaleImage(int (&a)[rows][columns])
{
    //GrayScaleImage
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            a[i][j] = {0};
        }
    }
    DisplayScaleImage(a);
}

template <int rows, int columns>
void Return_Width(int (&a)[rows][columns])
{
    cout << "The Width of the image : " << columns << endl;
}

template <int rows, int columns>
void Return_Height(int (&a)[rows][columns])
{
    cout << "The Height of the image : " << rows << endl;
}

template <int rows, int columns>
void clear_value(int (&a)[rows][columns])
{
    int value_1;
    cout << "Enter Value : ";
    cin >> value_1;

    if(value_1 > 255)
    {
        value_1 = 255;
    }
    else if(value_1 < 0)
    {
        value_1 = 0;
    }
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            a[i][j] = {value_1};
        }
    }
    DisplayScaleImage(a);
}

template <int rows, int columns>
void get_item(int (&a)[rows][columns])
{
    cout << "Enter Height and Width to find Intensity value : " << endl;
    cin >> rows >> columns;
    cout << a[rows][columns];
}

template <int rows, int columns>
void set_item(int (&a)[rows][columns])
{
    int value_2;
    cout << "Enter Height and Width whose Intensity value is to be changed :" << endl;
    cin >> rows >> columns;

    cout << "Enter Value : ";
    cin >> value_2;

    if(value_2 > 255)
    {
        value_2 = 255;
    }
    else if(value_2 < 0)
    {
        value_2 = 0;
    }
    a[rows][columns] = {value_2};
    DisplayScaleImage(a);
}


int main()
{
    int ch;
    int row, column;
    bool run = true;

    cout << "Enter Limit for Height(Row of matrix) of Image : ";
    cin >> row;
    cout << "Enter Limit for Width(Column of matrix)  of Image : ";
    cin >> column;

    cout << "Menu\n 1. Creation of a 2D array which consists of n rows x n columns \n 2. Returns the width of the image. \n 3. Returns the height of the image. \n 4. Clears the entire image by setting each pixel to the entered intensity value(Please enter value between 0 and 255). \n 5. Returns the intensity level of the given pixel. \n 6. Sets the intensity level of the given pixel to the given value(Please enter value between 0 and 255). \n" ;
    cout << "Enter Choice\n" ;
    cin >> ch;
    int Image_Matrix[row][column];
    do
    {
        if(ch == 1)
        {
            GrayScaleImage(Image_Matrix);
            DisplayScaleImage(Image_Matrix);
        }
        else if(ch == 2)
        {
            Return_Width(Image_Matrix);
        }
        else if(ch == 3)
        {
            Return_Height(Image_Matrix);
        }
        else if(ch == 4)
        {
            clear_value(Image_Matrix);
            DisplayScaleImage(Image_Matrix);
        }
        else if(ch == 5)
        {
            get_item(Image_Matrix);
        }
        else if(ch == 6)
        {
            set_item(Image_Matrix);
            DisplayScaleImage(Image_Matrix);
        }
    } while (run == true);

    return 0;
}
