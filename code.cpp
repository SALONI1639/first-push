//#include<iostream>
//using namespace std;
//int main()
//{
    //char grade='a';
    //float PI=3.14;
    //bool issafe =false;
    //char grade='a';
    //int value=grade;
    //cout<<value<<endl;
    //cout<<issafe<<endl;
    //cout<<"saloni\n from vaishali"<<endl;
    //double price=100.95;
    //int newprice=(int)price;
    //cout<<newprice<<endl;
    // float price;
    // cout<<"enter price:";
    // cin>>price;
    // cout<<"your age is:" <<price <<endl;
    // int months;
    // cout<<"enter your months:"<<endl;
    // cin>>months;
    // switch (months)
    // {
    // case 1:
    // cout<<"january"<<end;
        // break;
        // case 2:
        // cout<<"feb"<<endl;
        // break;
        // case 3:
        // cout<<"march"<<endl;
        // break;
        // case 4:
        // cout<<"april"<<endl;
        // break;
        // case 5:
        // cout<<"may"<<endl;
        // break;
        // case 6:
        // cout<<"june"<<endl;
        // break;
        // case 7:
        // cout<<"july"<<endl;
//         default:
        // cout<<"alll months in 2025"<<endl;}
        //ARITHMETIC OPERATOR
        // int a=15,b=12;
        // cout<<"sumof ="<<(a+b)<<endl;
        // cout<<"difference="<<(a-b)<<endl;
        // cout<<"division ="<<(a/b)<<endl;
        // cout<<"product ="<<(a*b)<<endl;
        // cout<<"module ="<<(a%b)<<endl;
        // int ans=(5/(double)2);
        // cout<<ans<<endl;
        //RELATIONAL OPERATOR
        // cout<<(3<5)<<endl;//true->1
        // cout<<(3>5)<<endl;
        // cout<<(2<=2)<<endl;
        // cout<<(2!=2)<<endl;
        // cout<<(2==2)<<endl;
        // cout<<(2>=2)<<endl;
        //sum of 2no;
        // int a,b;
        // cout<<"enter a"<<endl;
        // cin>>a ;
        //cout<<"enter b"<<endl;
        // cin>>b;
        // int sum=a+b;
        //cout<<"sum"<<sum<<endl;
        //unary operator
        //increment
       //int a=10;
        //int b=++a;
        //cout<<"a"<<a<<endl;
        //cout<<"b"<<b<<endl;
        //decrement
       // int b=a--;
       // cout<<"a"<<a<<endl;
        //cout<<"b"<<b<<endl;
        //conditional statement
       // int n;
        //cout <<"enter age:";
        //cin >> age;
        //if(age>=18){
        //    cout<<"vailid for weding";
       // }
        //else{
        //    cout<<"not vailid";
        //}
       // cout<<"enter n:";
       // cin>>n;
        //if(n%2==0)
        //{
        //    cout<<"even no";
        //}else{
          //  cout<<"odd no";
        //}
        //int a=4,b=7;
        //cout<<"enter no";
        //cin>>a;
        //cout<<"enter b";
        //cin>>b;
        //cout<<a*b<<endl;
        /*#include<iostream>
        using namespace std;
        int search(int arr[],int n,int tar){
          for(int i=0;i<=n;i++){
            if (arr[i]==tar)
            return i;
          }
        return -1;}
        int main(){
          int n,tar;
          cout<<"enter the size of the array:"<<endl;
          cin>>"%d",&n;
          int arr[n];cout<<"enter array element:\n"<<endl;
          for(int i=0;i<=n;i++){
            cin>>"%d"&arr[i];
            cout<<"enter the target value :"<<endl;
            cin>>"%d"&tar;
            int result =search(arr,n,tar);
            if(result==-1)
            cout<<"the target %d is not present in the array",<<tar<<endl;
            else
            cout<<"the target %d is present in the index %d of the array",<<tar,result<<endl;
            return 0;
          }



        }
          
        #include <iostream>
        using namespace std;
        
        // Function to perform linear search
        int linearSearch(int arr[], int size, int target) {
            for (int i = 0; i < size; i++) {
                if (arr[i] == target) {
                    return i; // Return the index of the target value
                }
            }
            return -1; // Return -1 if the target is not found
        }
        
        int main() {
            int size, target;
            
            // Taking input for the array size
            cout << "Enter the number of elements in the array: ";
            cin >> size;
            
            int arr[size];
            
            // Taking input for the array elements
            cout << "Enter " << size << " elements: ";
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            
            // Taking input for the target value
            cout << "Enter the target value: ";
            cin >> target;
            
            // Calling the linearSearch function
            int result = linearSearch(arr, size, target);
            
            // Output the result
            if (result != -1) {
                cout << "Target found at index " << result << endl;
            } else {
                cout << "Target not found in the array." << endl;
            }
            
            return 0;
        }
            patterns.
            #include<iostream>
            using namespace std;
            int main(){
              int n=10
              ;
              for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
              cout<<j<<" ";}
              cout<<endl;}
              return 0;
              }
             #include<iostream>
             using namespace std;
             int main(){
              int n=4;
              for(int i=1;i<n;i++){
                for(int j=1;j<n;j++){
                  cout<<"*";

                }
                cout<<endl;
              }
              return 0;
             }
            #include<iostream>
            using namespace std;
            int main(){
              int n=8;
              for(int i=0;i<n;i++){
              char ch='A';
              for(int j=0;j<n;j++){

                cout<<ch;
                ch=ch+1;
              }
              cout<<endl;}
              return 0;
            }
           #include<iostream>
           using namespace std;
           int main(){
            int n=3;
            int num=1;
            for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
              cout<<num<<" ";
              num++;
            }
            cout<<"after pattern:"<<num<<endl;}
            return 0;
           }
          #include<iostream>
          using namespace std;
          int main(){
            int n=3;
            char ch='A';
            for(int i=0;i<n;i++){
              for(int j=0;j<n;j++){
                cout<<ch<<" ";
                ch++;
              }//cout<<endl;
              cout<<"after pattern:"<<ch<<endl;
            }return 0;
          }
         #include<iostream>
         using namespace std;
         int main(){
          int n=8;
          for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
              cout<<"*"<<" ";
            }
            cout<<endl;
          }return 0;

         }
        #include<iostream>
        using namespace std;
        int main(){
          int n=7;
          for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
              cout<<i+1<<" ";
            }
            cout<<endl;
          }return 0;
        }
       not compelete
       #include<iostream>
       using namespace std;
       int main(){
        int n=4;
        char ch='A';
        for (int  i = 0; i <n; i++)
        {
          for(int j=0;j<ch;j++){
            cout<<ch<<" ";ch++;

          }cout<<endl;
        }return 0;
        
       }
      #include<iostream>
      using namespace std;
      int main(){
        int n=5;
        //char ch='A';
        for(int i=0;i<n;i++){
          for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
          }cout<<endl;
        }return 0;
      }
     #include<iostream>
     using namespace std;
     int main(){
      int n=5;
      for(int i=n;i>0;--i){
        cout<<i<<" ";
      }cout<<endl;return 0;
     }
    #include<iostream>
    using namespace std;
    int main(){
      int n=4;
      for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
          cout<<j<<" ";
        }cout<<endl;
      }return 0;
    }
   #include<iostream>
   using namespace std;
   int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
      for(int j=i+1;j>0;j--){
        cout<<num<<" " ;
      num++;  }
       cout<<endl;
    }return 0;
   }
  #include<iostream>
  using namespace std;
  int main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
      for(int j=i+1;j>0;j--){
        cout<<ch<<" ";
        ch++;
      }cout<<endl;
    }return 0;
  }
 #include<iostream>
 using namespace std;
 int main(){
  int n=5;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    for(int j=0;j<n-i;j++){
      cout<<i+1;
    }cout<<endl;
  }return 0;
 }
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter no:";
  cin>>n;
  for(int i=0;i<n;i++){
    for(int k=0;k<n-1-i;k++){
      cout<<" ";
    }for(int k=1;k<=i+1;k++){
      cout<< k;
    }
    for(int k=i;k>0;k--){
      cout<< k;
    }cout<<endl;
  }return 0;
}
#include<iostream>
using namespace std;
int main(){
  int n=4;
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }cout<<"*";
    if(i!=0){
      for(int j=0;j<2*i-1;j++){
        cout<<" ";
      }
      cout<<"*";
    }cout<<endl;

  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<i+1;j++){
      cout<<" ";
    }cout<<"*";
    if(i!=n-2){
      for(int j=0;j<2*(n-i)-5;j++){
        cout<<" ";
      }
      cout<<"*";
    }cout<<endl;

  }
  return 0;
}
#include<stdio.h>
int printHello(){
  printf("hello\n");
  return 3;
}
int main(){
  printf("hello");
  return 0;
}
#include<stdio.h>
int sum(float a,float b){
  int s=a+b;
  return s;
}
int main(){
  printf sum (4.34,6.54);
  return 0;
}
//functions
#include<iostream>
using namespace std;
int minoftwo(int a,int b){//parameters
  if(a<b){
    return a;
  }else{
    return b;
  }
}
  int main(){
    cout<<"min:"<<minoftwo(5,6)<<endl;//arrguments
    return 0;
  }
  //sum of 1to n.
  #include<iostream>>
  using namespace std;
  int sumN(int n){
  int sum=0;
  for(int i=1;i<=n;i++){
  sum+=i;}
  return sum;}
  int main(){
    cout<< sumN(5)<<endl;
    cout<< sumN(7)<<endl;
    return 0;
  }
 #include<iostream>
 using namespace std;
 int factorialN(int n){
  int fact = 1;
 
 for(int i=1;i<=n;i++){
 fact+=i;}
 return fact;
 }
 int main(){
  cout<< factorialN(4)<<endl;
  cout<< factorialN(5)<<endl;
  return 0;
 }






         

            
        







    //return 0;}
    

