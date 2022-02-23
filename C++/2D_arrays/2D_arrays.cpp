#include<iostream>
using namespace std;

void print_2d_array(int a[][100], int row, int col){
    /// printing input row wise.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }

}

void geting_input_2d_array(int a[][100], int row, int col){
    /// geting input row wise.
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
        
    }
}


int main()
{

    // int a[5][5] = {
    //               {1, 2},
    //               {3, 4}
    //              };

    // int b[5][5] = {{0}};

    int b[5][100];



    int row, col;
    cin>>row>>col;
    
    /// printing input row wise.
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < col; j++)
    //     {
    //         cout<<b[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    geting_input_2d_array(b, row, col);

    print_2d_array(b, row, col);

    return 0;
}
