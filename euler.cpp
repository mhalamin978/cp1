#include<iostream>
#include<cmath>
#include<fstream>
using namespace std;

double func(double t, double x ){
    return 2-exp(-(4*t))-2*x;
}

double euler(double n, double t0,double tf, double x0){
    double x = x0; 
    double h =(tf-t0)/n;
    ofstream fout("eu1.dat");
    for(double t=t0;t<=tf;t+=h){
        x=x+h*func(t,x);
        fout<<t <<" "<<x<<endl;

    }
    return 0;
}
int main(){
    euler (2000,0,5,1);
    return 0;
}