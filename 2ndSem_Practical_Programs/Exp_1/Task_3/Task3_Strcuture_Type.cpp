/* 
Task 3 done using POP with functions
Code only works when matrix dimension is known at compile time
Reference Website - https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function
*/
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
}

template <int rows, int columns>
void get_item(int (&a)[rows][columns], int enter_row, int enter_column)
{
    cout << a[enter_row - 1][enter_column - 1];
}

template <int rows, int columns>
void set_item(int (&a)[rows][columns], int enter_row, int enter_column)
{
    int value_2;

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
    a[enter_row][enter_column] = {value_2};
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
    int Image_Matrix[3][3];

    do
    {
        cout << "Menu\n 1. Creation of a 2D array which consists of n rows x n columns \n  2. Display 2D array \n 3. Returns the width of the image. \n 4. Returns the height of the image. \n 5. Clears the entire image by setting each pixel to the entered intensity value(Please enter value between 0 and 255). \n 6. Returns the intensity level of the given pixel. \n 7. Sets the intensity level of the given pixel to the given value(Please enter value between 0 and 255). \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;
        if(ch == 1)
        {
            GrayScaleImage(Image_Matrix);
            DisplayScaleImage(Image_Matrix);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 2)
        {
            DisplayScaleImage(Image_Matrix);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 3)
        {
            Return_Width(Image_Matrix);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 4)
        {
            Return_Height(Image_Matrix);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 5)
        {
            clear_value(Image_Matrix);
            DisplayScaleImage(Image_Matrix);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 6)
        {
            int row_value_1, column_value_1;
            cout << "Enter Limit for Height(Row of matrix) of Image : ";
            cin >> row_value_1;
            cout << "Enter Limit for Width(Column of matrix)  of Image : ";
            cin >> column_value_1;
            cout << endl;
            get_item(Image_Matrix, row_value_1, column_value_1);

            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 7)
        {
            int row_value_2, column_value_2;
            cout << "Enter Limit for Height(Row of matrix) of Image : ";
            cin >> row_value_2;
            cout << "Enter Limit for Width(Column of matrix)  of Image : ";
            cin >> column_value_2;
            set_item(Image_Matrix, row_value_2, column_value_2);
            DisplayScaleImage(Image_Matrix);
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
    } while (run == true);
    return 0;
}
