#include<iostream>
using namespace std;
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float mul(float a,float b)
{
    return a*b;
}

float div(float a,float b)
{
    return (a/b);
}
float mod(int a,int b)
{
    return a%b;

}

void cal()
{
    int choice;
    float a,b;

    cout<<"enter your operation:"<<endl;
    cout<<"1.addition"<<endl;
    cout<<"2.sub"<<endl;
    cout<<"3.multiplication"<<endl;
    cout<<"4.division"<<endl;
    cout<<"5.modulus"<<endl;

    
    while(true)
    {
        cout<<"enter choice(1/2/3/4/5):";
        cin>>choice;

        if(choice>=1 && choice <=5)
        {
            cout<<"enter value of a:";
            cin>>a;
            cout<<"enter second value b:";
            cin>>b;

            switch (choice)
            {
            case 1:
                cout<<a<<"+"<<b<<"="<<add(a,b)<<endl;
                break;
            case 2:
                cout<<a<<"-"<<b<<"="<<sub(a,b)<<endl;
                break;

            case 3:
            cout<<a<<"*"<<b<<"="<<mul(a,b)<<endl;
            break;

            case 4:
            cout<<a<<"/"<<b<<"="<<div(a,b)<<endl;
            break;

            case 5:
            cout<<a<<"%"<<b<<"="<<mod(a,b)<<endl;
            break;                
            
            default:
                cout<<"enter valid data";
            }
        }
    }
}
int main()
{
    cal();
    return 0;
    
}