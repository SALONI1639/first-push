/*#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    if(age>18){
        cout<<"eligible for weding:";
        cout<<"ready for weding:";
    }
    else{
        cout<<"not eligible:";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n=50;
    int sum =0;
    for(int i=1;i<=n;i++){
        sum+=i;}
        cout<<"sum"<<sum<<endl;
    
    return 0;
}
/*#include<iostream>
using namespace std;
int main(){
    int n=50;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        if(i!=6){
            break;
        }
    }
    cout<<"sum"<<sum<<endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n=100;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";}
        cout<<endl;
        return 0;
    
}
#include<iostream>
using namespace std;
int main(){
    int i=1;
    do
    {
    
    
        if(i%2==0){
        cout<<i<<" ";
        i++;}
    }
    while(i<=10)
    cout<<endl;
    return 0;
}*
#include<iostream>
using namespace std;
int main () {
    int n=10;
    int i=1;
    do{
        cout<< i <<" ";
        i++;
    }
    while( i <=n);
    cout << endl;
    return 0;
    
}
#include<iostream>
using namespace std;
int main(){
    int n=5;
    bool isprime=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            isprime=false;
            break;}
        }
        if(isprime==true){
            cout<<"prime no\n";
        }
        else{
            cout<<"nonprime no\n";}
            return 0;}
#include<iostream>
using namespace std;
int main(){
    //int n=10;
    for(int i=1;i<=5; i++){
       // int m=10;
            for(int i=1;i<=5;i++){
                cout<<"#";
            }
            cout<<endl;
        
        
    }
    return 0;
}*/
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    double salary;
    public:
    student (){
        cout<<"iot";//constructer
    }
    string name;
    string branch;
    string college;

    void changeBranch(string newBranch){
        branch=newBranch;

    }
    //setter
    void setSalary(double s) {
        salary=s;
    }
    //getter
    double getsalary(){
        return salary;
    }
};
int main(){
    student t1;//constructer call
   /// student t2;
    t1.name="saloni";
    t1.branch="iot";
    t1.college="gecv";
    t1.setSalary(25000);

    //cout<<t1.name<<endl;
    cout<<t1.getsalary()<<endl;
    return 0;
    
}


        
    



