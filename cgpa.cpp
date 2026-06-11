#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number of courses : ";
    cin>>n; 
    float total_credits = 0,total_points = 0;
    
    float grades,cgpa,credits;
    for(int i=0;i<n;i++){
        cout<<"course "<<i+1<<" : "<<endl;
        cout<<"enter grade points : ";
        cin>>grades;
        cout<<"enter credits : ";
        cin>>credits;
        total_credits += credits;
        total_points += grades * credits;

    }
    cgpa = total_points / total_credits;
    cout<<"CGPA: "<<cgpa<<endl;
    cout<<"Total Credits: "<<total_credits<<endl;
    cout<<"Total Grade Points: "<<total_points<<endl;
    cout<<"Total CGPA: "<<cgpa<<endl;
    return 0;

}
