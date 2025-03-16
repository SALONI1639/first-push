/*#include<iostream>
using namespace std;
int main(){
    //arithmetic operator
    int a,b;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    cout<<"the value of a+b:"<<a+b<<endl;
    cout<<"the value of a-b:"<<a-b<<endl;
    cout<<"the value of a/b:"<<a/b<<endl;
    cout<<"the value of a%b:"<<a%b<<endl;
    cout<<"the value of a*b:"<<a*b<<endl;
    //assignment operator
    cout<<"the value of a==b:"<<(a==b)<<endl;
    cout<<"the value of a<=b:"<<(a<=b)<<endl;
    cout<<"the value of a>=b:"<<(a>=b)<<endl;
    cout<<"the value of a<b:"<<(a<b)<<endl;
    cout<<"the value of a>b:"<<(a>b)<<endl;
    //logical operator
    cout<<"the value of (a==b)&&(a<b):"<<((a==b) && (a<b))<<endl;
    cout<<"the value of (a==b)||(a<b):"<<((a==b) || (a==b))<<endl;
    cout<<"the value of (!(a==b)):"<<(!(a>b))<<endl;


    return 0;
}*/
//07
/*#include<iostream>
using namespace std;
int c=8;
int main(){
    int a,b,c;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    c=a+b;
    cout<<"the sum of two integers no:"<<c<<endl;
    cout<<"the value of sum is:"<<::c<<endl;
    cout<<"the value of c is"<<::c;
    return 0;
}*/
#include<iostream>
using namespace std;
int main(){
 /* float d=34.4f;
long double  e= 34.4l;
cout<<"the value of 34.4 is"<<sizeof(34.4)<<endl;
cout<<"the value of 34.4f is"<<sizeof(34.4f)<<endl;
cout<<"the value of 34.4f is"<<sizeof(34.4f)<<endl;
cout<<"the value of 34.4l is"<<sizeof(34.4l)<<endl;
cout<<"the value of 34.4l is"<<sizeof(34.4l)<<endl;


    cout<<"the value of d is:"<<d<<endl<<"the value of is" <<e;*/
    //*********reference variable */
    //float a=240;
    //float & b=a;
   // cout<<a<<endl;
   // cout<<b<<endl;
    //*******typecasting */
    int a=34;
    float b=45.57;
    cout<<"the value of a is"<<(float)a;
    cout<<"the value of a is"<<(float)(a);
    cout<<"the value of a is"<<(int)b;
    cout<<"the value of a is"<<(int)(b);
    int c=int(b);
    cout<<"the experresion is"<<a+b;
    cout<<"the experresion is "<<a+int(b);
    cout<<"the experresion is"<<a+(int)b;
    
    return 0;

}

