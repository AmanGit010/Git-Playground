#include <iostream>
using namespace std;

int main(){
    /*int a;
    int b;
    cout<<"Enter two number to show the String: "<<endl;
    cin>>a;
    cin>>b;

    //if and else loop
    if (a>b)
    {
        cout<<"A is positive"<<endl;
    }
    else
    {
        cout<<"A is Negative"<<endl;
    }*/
    
    //Pattern using numbers
    /*int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }*/
    
    //Pattern using Asterisk(*)
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    
    cout<<endl;
    cout<<"Output:"<<endl;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<"^_^";
            //cout<<row;
            //cout<<col;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    

}