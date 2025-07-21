// entc b2, prn 24070123120

// program to find quadrant using coordinates
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the x and y coordinates \n";
    cin>> x >> y;
    
    if(x>0 && y>0)
    {
        cout<<"\n 1st quadrant ";
    }
    else if (x<0 && y>0)
    {
        cout<<"\n 2nd quadrant";
    }
    else if (x<0 && y<0)
    {
        cout<<"\n 3rd quadrant";
    }
    else if (x>0 && y<0)
    {
        cout<<"4th quadrant";
    }
    else if (y==0)
    {
        cout<<"\n coordinate on x axis";
    }
    else if (x==0)
    {
        cout<<"\n coordinate on y axis";
    }
    else if (x==0 && y==0)
    {
        cout<<"\n coordinate on origin";
    }
}

/* output of this code

enter the x and y coordinates 
43
-22
4th quadrant

*/
