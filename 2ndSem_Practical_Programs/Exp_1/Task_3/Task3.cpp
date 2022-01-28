//Task 3 done using POP without functions.
#include <iostream>
using namespace std;
const int x = 0;
const int y = 0;


int main()
{
    int i, j, value_1, value_2, ch;
    int row, column;
    bool run = true;

    cout << "Enter Limit for Height(Row of matrix) of Image : ";
    cin >> row;
    cout << "Enter Limit for Width(Column of matrix)  of Image : ";
    cin >> column;
    int Image_Matrix[row][column];
    
    do
    {

        cout << "Menu\n 1. Creation of a 2D array which consists of n rows x n columns \n 2. Display 2D array \n 3. Returns the width of the image. \n 4. Returns the height of the image. \n 5. Clears the entire image by setting each pixel to the entered intensity value(Please enter value between 0 and 255). \n 6. Returns the intensity level of the given pixel. \n 7. Sets the intensity level of the given pixel to the given value(Please enter value between 0 and 255). \n" ;
        cout << "Enter Choice\n" ;
        cin >> ch;

        if(ch == 1)
        {
            //GrayScaleImage(rows, columns)
            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    Image_Matrix[i][j] = {0};
                }
            }

            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    cout << "\t";
                    cout << Image_Matrix[i][j] << " ";
                    cout << "\t";
                }
                cout << endl;
            }
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;


        }
        else if (ch == 2)
        {
            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    cout << "\t";
                    cout << Image_Matrix[i][j] << " ";
                    cout << "\t";
                }
                cout << endl;                
            }
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 3)
        {
            //width()
            cout << "Width of Image = " << column << endl;
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 4)
        {
            //height()
            cout << "Height of Image = " << row << endl;
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 5)
        {
            //clear(value)
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
    
            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    Image_Matrix[i][j] = {value_1};
                }
            }

            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    cout << "\t";
                    cout << Image_Matrix[i][j] << " ";
                    cout << "\t";
                }
                cout << endl;
            }
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;

        }

        else if(ch == 6)
        {
            //get_item(row, column)
            int row_1, column_1;
            cout << "Enter Height and Width to find Intensity value : " << endl;
            cin >> row_1 >> column_1;
            cout << Image_Matrix[row_1][column_1] << endl;
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;
        }
        else if(ch == 7)
        {
            //set_item(row, column, value)
            int row_2, column_2;
            cout << "Enter Height and Width whose Intensity value is to be changed : " << endl;
            cin >> row_2 >> column_2;

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
            Image_Matrix[row_2][column_2] = {value_2};

            for(i = 0; i < row; i++)
            {
                for(j = 0; j < column; j++)
                {
                    cout << "\t";
                    cout << Image_Matrix[i][j] << " ";
                    cout << "\t";
                }
                cout << endl;
            }
            cout << "Want to continue? (Yes = Input 1/false = Input 0) : " << endl;
            cin >> run;

        }
    } while (run == true);
    

    return 0;
}
