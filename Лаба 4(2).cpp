#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
double round(double number)
{
        return int(number + .5);
}
int main()
{
    
        setlocale(LC_ALL, "Russian");
        vector<double> a(9);
        vector<string> s(8);
        a[0] = 105; s[0];
        a[1] = 50;
        string c;
        cout << "��������� ����� ����� ����� �� '1' �� '100' \n" << "��������� ����� �������� �������, ���� ������������ ������� 'y', ����� 'n'. \n";
        for (int i=0; i < 7; ++i)
        {

             cout << i+1<<") ���������� ����� ������ " << a[i+1] <<"? ��� �����: " ;
             //label:
                   cin >> c;
                   s[i+1] = c;

                   double r = a[i] - a[i+1];
                   double m = pow(r,2);
                   double m1 = pow(m,0.5);

                   if (c == "y")  a[i+2] = a[i+1] - m1/2;
                   else 
                   if (c  == "n") a[i+2] = a[i+1] + m1/2;
                   //else goto label;
        }

        cout << "\n�� �������� ����� " << round(a[8]) <<"\n";
        system("Pause");
        return 0;
}
