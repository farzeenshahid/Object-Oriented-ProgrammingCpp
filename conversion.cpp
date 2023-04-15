#include <iostream>
using namespace std;
class Matrixlin{
    protected:
        int size;
        double *data = new double [width];
        int height, width;
    public:
        void array1d(int size)
        {
            cout<<"Size of 1D array:"<<endl;
            cin>>size;
            for (int i=0; i<size;i++)
            {
                cout<<"Array["<< i << "] ";
                cin>> data[i];
            }
            for (int i=0; i<size;i++)
            {
                cout<<data[i]<<" ";
            }
            delete[]data;
            data = NULL;
        }
        int delinearize(int arr[],int d[100][100], int height, int width)
        { 
            cout<<"Enter size: ";
            cin>>size;
            int k = 0;
            if (height*width == size)
            {
        
                for(int i=0; i<height; i++)
                {
                    for(int j=0; j<width; j++)
                    {
                        d[i][j] =arr[k]; 
                        cout<<d[i][j];
                        k++;
                    }
                    cout<<"\n";
                }
                
            }
            else{cout<<arr[k];} 
            return 0;           
        }
        int min(int a, int b)
        {
            int A[a][b];
            int Min;

            for(int i=0; i<a; i++)
            {
                for(int j=0; j<b; j++)
                {
                    cin>>A[i][j];
                }
            }
        
            for(int i=0; i<a; i++)
            {
                for(int j=0; j<b; j++)
                {
                    cout<<A[i][j]<<" ";

                    
                    if (A[i][j] <= A[0][0])
                    {
                        Min = A[i][j];
                    }
                }  
            }
           cout<<"MIN: "<<Min<<endl;      
        }
};
int main(){
    Matrixlin mat;
    //mat.array1d(5);
    int arr[6]= {4,5,6,7,5,1};
    int d[2][100];
    mat.delinearize(arr,d,2,3);
    mat.min(2,2);
    return 0;
}