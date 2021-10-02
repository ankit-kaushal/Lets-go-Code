#include <iostream>
using namespace std;
int main()
{
    int date1, month1, year1, date2, month2, year2, ctr = 0, ptr = 0;
    cout << "enter date1 : ";
    cin >> date1;
    cout << endl;
    cout << "enter month1 : ";
    cin >> month1;
    cout<<endl;
    cout << "enter year1 : ";
    cin >> year1;
    cout << endl;
    cout << "enter date2 : ";
    cin >> date2;
    cout << endl;
    cout << "enter month2 : ";
    cin >> month2;
    cout << endl;
    cout << "enter year2 : ";
    cin >> year2;
    cout <<endl;
    if (year1 == year2)
    {
        if (month1 == month2)
        {
            cout << "date is " << (date1 - date2) << endl;
        }
        else
        {
            int month = month2 - month1;
            int date = date2 - date1;
            cout << "month is " << month << endl;
            cout << "date is: " << date << endl;
        }
    }
    else
    {
        if (month1 == month2)
        {
            if (date1 == date2)
            {

                cout << "12 months" << endl;
                cout << "year=1 " << endl;
            }
            else
            {
                cout<<"12 months and "<<(date2-date1)<<" days"<<endl;
            }
            
        }
        else
        {
            if(date1==date2)
            {
                for (int i = month1; i <= 12; i++)
            {
                ctr++;
                if (i == 12)
                {
                    break;
                }
            }
            for (int i = 1; i <= month2; i++)
            {
                ptr++;
            }
            int total = ctr + ptr;
            cout<<"total months are: "<<total<<endl;

            }
            else
            {

                for (int i = month1; i <= 12; i++)
            {
                ctr++;
                if (i == 12)
                {
                    ptr = ctr;
                    ctr = 0;
                }
            }
            for (int i = 1; i <= month2; i++)
            {
                ctr++;
            }
            int total = ctr + ptr;
            cout<<"total months are: "<<total<<endl;
            cout<<"date are: "<<(date2-date1);

                
            }
            
            
        }
    }

    return 0;
}