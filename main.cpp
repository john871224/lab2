#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;
 int main(){
 Lab2 lab2; 
 int weight,height;
 
 ifstream inFile("infile.txt",ios::in);
 if(!inFile){
   cerr<<"Failed opening"<<endl;
   exit(1);
 }
 ofstream outFile("outfile", ios::out);
 if (!outFile){
	 cerr << "Failed opening" << endl;
	 exit(1);
 }
    
 while(inFile>>height>>weight){
 	 if (height==0 && weight==0){break;}
      
	 outFile << lab2.calculate(height, weight) << "\t";
	 outFile << lab2.determine() << endl;

 }
  cout<<endl;
  return 0;
 }














