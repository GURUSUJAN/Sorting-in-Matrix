#include"iostream"
using namespace std;
main()
{
    int n,i,j;
    cout<<"What is the size of the square matrix: "<<endl;
    cin>>n;
    int ar[n][n];
    cout<<"Enter the inputs: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"For ["<<i<<","<<j<<"]"<<endl;
            cin>>ar[i][j];
        }
    }
    int num=0,rep=0;
    cout<<"Enter the number you want to search: "<<endl;
    cin>>num;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(ar[i][j]==num)
            {
                rep++;
                cout<<"Found at ["<<i<<","<<j<<"]"<<endl;
            }
        }
    }
    if(rep>0)
    {
        cout<<"Repeated "<<rep<<" times"<<endl;
    }
    else
    {
        cout<<"Not Found!"<<endl;
    }
}
