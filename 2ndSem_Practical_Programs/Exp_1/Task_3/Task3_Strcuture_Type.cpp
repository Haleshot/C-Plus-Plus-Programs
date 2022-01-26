//Task 3 done with functions
#include <iostream>
using namespace std;

void DisplayScaleImage(int rows, int columns, int a[][10])
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

void GrayScaleImage(int rows, int columns, int a[][10])
{
    //GrayScaleImage
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            a[i][j] = {0};
        }
    }
    DisplayScaleImage(rows, columns, a);
}

void Return_Width(int rows, int columns, int a[][10])
{
    cout << "The Width of the image : " << columns << endl;
}

void Return_Height(int rows, int columns, int a[][10])
{
    cout << "The Height of the image : " << rows << endl;
}

void clear_value(int rows, int columns, int a[][10])
{
    int i, j, value_1;
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
    
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            a[i][j] = value_1;
        }
    }
    DisplayScaleImage(rows, columns, a);
}

void get_item(int rows, int columns, int a[][10])
{
    cout << "Enter Height and Width to find Intensity value : " << endl;
    cin >> rows >> columns;
    cout << a[rows][columns];
}

void set_item(int rows, int columns, int a[][10])
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
    a[rows][columns] = value_2;
    DisplayScaleImage(rows, columns, a);
}


int main()
{
    int i, j, value_1, value_2, ch;
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
            GrayScaleImage(row, column, Image_Matrix);
            DisplayScaleImage(row, column, Image_Matrix);
        }
        else if(ch == 2)
        {
            Return_Width(row, column, Image_Matrix);
        }
        else if(ch == 3)
        {
            Return_Height(row, column, Image_Matrix);
        }
        else if(ch == 4)
        {
            clear_value(row, column, Image_Matrix);
            DisplayScaleImage(row, column, Image_Matrix);
        }
        else if(ch == 5)
        {
            get_item(row, column, Image_Matrix);
        }
        else if(ch == 6)
        {
            set_item(row, column, Image_Matrix);
            DisplayScaleImage(row, column, Image_Matrix);
        }
    } while (run == true);

    return 0;
}
