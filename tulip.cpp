#include<bits/stdc++.h>
using namespace std;

const int N = (int)2e5 + 100;
#define gc getchar_unlocked
#define PI 3.1415926535897932384626
#define f first
#define s second
#define pb push_back
#define pp pop_back
#define mp make_pair

typedef long long ll;
typedef set<int> si;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll, ll>	pl;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  string name,branch;
  int s,c;
  float arr1[N],arr2[N],sum1=0,sum2=0,a=1,b=0,gpa;

  cout<<"Enter your name"<<endl;
  cin>>name;
  cout<<"Enter your branch"<<endl;
  cin>>branch;
  cout<<"Enter your current Semester"<<endl;
  cin>>s;
  cout<<"Enter the total number of courses undertaken in the current semester"<<endl;
  cin>>c;

  cout<<"Enter the number of credit points for each course"<<endl;
  for (int i = 1; i <=c; i++)
  {
    cout<<"Course "<<i<<endl;
    cin>>arr1[i];
    sum1 = sum1 + arr1[i];
  }

  cout<<"Enter the grade points obtained in each course"<<endl;
  for (int i = 1; i <=c; i++)
  {
    cout<<"Course "<<i<<endl;
    cin>>arr2[i];
    sum2 = sum2 + arr2[i];
  }

  //GPA Calculation
  for (int i = 1; i <=c; i++)
  {
    a = arr1[i]*arr2[i];
    b = b + a;
  }
  gpa = b/sum1;

  cout<<"Student's Name : "<<name<<endl;
  cout<<"Branch : "<<branch<<endl;
  cout<<"Semester : "<<s<<endl;
  cout<<"Total Courses : "<<c<<endl;
  cout<<"Total Grade Points Obtained : "<<sum2<<endl;

  cout<<"Student's grade in every course : "<<endl;
  for (int i = 1; i <=c; i++)
  {
    if(arr2[i]==10){
      cout<<"Course "<<i<<": "<<"A+"<<" "<<" "<<"Outstanding"<<endl;
    }
    else if(arr2[i]==9){
      cout<<"Course "<<i<<": "<<"A "<<" "<<" "<<"Excellent"<<endl;
    }
    else if(arr2[i]==8){
      cout<<"Course "<<i<<": "<<"B+"<<" "<<" "<<"Very Good"<<endl;
    }
    else if(arr2[i]==7){
      cout<<"Course "<<i<<": "<<"B "<<" "<<" "<<"Good"<<endl;
    }
    else if(arr2[i]==6){
      cout<<"Course "<<i<<": "<<"C "<<" "<<" "<<"Above Average"<<endl;
    }
    else if(arr2[i]==5){
      cout<<"Course "<<i<<": "<<"D "<<" "<<" "<<"Average"<<endl;
    }
    else if(arr2[i]==4){
      cout<<"Course "<<i<<": "<<"E "<<" "<<" "<<"Poor"<<endl;
    }
    else{
      cout<<"Course "<<i<<": "<<"F "<<" "<<" "<<"Fail"<<endl;
    }
  }

  cout<<setprecision(3)<<"Student's GPA is : "<<gpa<<endl;
  
  if(gpa>=5){
    cout<<"Status : "<<"PASS"<<endl;
  }
  else{
    cout<<"Status : "<<"FAIL"<<endl;
  }

   return 0;
}

  
  
  
  
  

  

  
   

