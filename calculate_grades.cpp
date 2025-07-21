// entc b2, prn 24070123120 

//program to calculate the grades 
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,n4;
    cout<<"enter the marks of 4 subjects \n";
    cin>> n1>> n2>> n3>> n4;
    cout<<" the marks are : "<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<"\n";
    int avg;
    avg=(n1+n2+n3+n4)/4;
    cout<<" \n the average of the marks is : "<<avg<<endl;
    if(avg>=80 && avg<=100)
    {
        cout<<"grade A\n";

    }
    else if(avg<80 && avg>=60)
    {
        cout<<"grade B\n";

    }
    else if(avg<60 && avg>=40)
    {
        cout<<"grade C\n";

    }
    else if(avg<40)
    {
        cout<<"grade F.. you failed\n";

    }

}

/* output of this code

enter the marks of 4 subjects 
45
67
88
67
 the marks are : 45 67 88 67
 
 the average of the marks is : 66
grade B

*/
