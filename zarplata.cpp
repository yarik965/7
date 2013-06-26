# include <iostream>
# include <iomanip>
# include <ctime>
# include <cstdlib>
using namespace std;
 
int main()
{
    const int size=15;
    int a[size]={0};
    int temp;
    for (int i=1;i<=10;i++)
    {
        cout<<"Enter sum for worker N"<<i<<": ";
        cin>>temp;
        a[(200+(temp/100*9))/100]++;
    }
    for (int i=2; i<size; i++)
    {
        if (i==10)
        {
            cout<<endl;
            cout<<i<<". $"<<"more "<<i*100;
        }
        else if (i>10);
        else
        {
            cout<<endl;
            cout<<i<<". $"<<i*100<<"-"<<i*100+99;
        }
        for(int j=0;j<a[i];j++)
        cout<<"*";
    }
    return 0;
}
 
