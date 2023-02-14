 #include <iostream>
 using namespace std;
class account
{
public:
    string name;
    int bals;
    int balc;
    int num;
    void data()
    {
     cout << "\nEnter the name and account number of the cutomer: ";
     cin >> name >> num;
    }
    virtual void display()
    {
        cout << "\nThe details of the customer are: ";
    }
};
class savings : virtual public account
{
public:
    int dp;
    int wd;
    int total;
    void calcs()
    {
        cout << "\nEnter the balance of saving accouunt:  ";
        cin >> bals;
        int min = 2000;
        total = bals;
        if (bals >= min)
        {

                 cout << "\nEnter the amount to be deposited: ";
            cin >> dp;
            total = total + dp;
            cout << "\nEnter the amount withdrawn";
            cin >> wd;
            total = total - wd;
        }
        else
        {
            cout << "\nMinimum balance not maintained.";
        }
    }
    void display()
    {

        cout << "\nTotal balance in saving accounts: " << total;
    }
};
class current : virtual public account
{
public:
    int d;
    int w;
    int t;
    void calcc()
    {
        cout << "\nEnter the balance of current accouunt:  ";
        cin >> balc;
        t = balc;

        int due = 2000;
        if (balc > due)
        {
            cout << "\nEnter the amount to be deposited: ";
            cin >> d;
            t = t + d;
            cout << "\nEnter the amount withdrawn";
            cin >> w;
            t = t - w;
        }
        else
            cout << "\nPay the overdue amount.";
    }
    void display()
    {

        cout << "\nTotal balance in current account: " << t;
    }
};
int main()
{
    account a;
    account *ptr;
    ptr = &a;
    a.data();
    savings s;
    s.calcs();
    ptr = &s;
    ptr->display();
    current c;
    c.calcc();
    ptr = &c;
    ptr->display();
    return 0;
}