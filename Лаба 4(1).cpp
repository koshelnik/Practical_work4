#include <iostream.h>
void bubbleSort(int* array, int size)
{
    bool wasSwapped = true;
    for (int i = 1; (i <= size) && wasSwapped; ++i)
    {
        wasSwapped = false;
        for (int j = 0; j < (size - i); ++j)
        {
            if (array[j] > array[j + 1])
            {
                std::swap(array[j], array[j + 1]);
                wasSwapped = true;
            }
        }
    }
}
int LineSearch (int*mass, int n, int x)
{
    int index=-1;
    for(int i=0; i<n; i++)
    {
            if (mass[i]==x)
            index=i;
    }
    return index;
}
int main()
{
    setlocale(LC_ALL,"Russian");
    int x;
    int*massA=new int[10];
    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
            massA[i]=rand()%100;
            cout<<massA[i]<<endl;
    }
    bubbleSort(massA, 10);
    cout<<"\n"<<endl;
    for(int i=0; i<10; i++)
    {
          cout<<massA[i]<<endl;
    }
    
    
    cout<<"\n*����� ��������� ����� ������� � ���� \n*������� ����� � ������ ������ = ";
    cin>>x;
    
    cout<<"\n*����� = "<<LineSearch(massA, 10, x)<<endl;
    system("Pause");
    return 0;
}
