#include<iostream>
#include<string>
#include<fstream>
#include"lab2.h"
using namespace std;

 float Lab2::calculate(int a,int b){
	BMI=b/(a*0.01)/(a*0.01);
	return BMI;
    }
  string Lab2::determine(){
        if(18.5<=BMI&&BMI<25){ category="normal";}
        if(30<=BMI&&BMI<35){category="Obese Class l";}
        if(16<=BMI&&BMI<18.5){category="Underweight";}
        if(25<=BMI&&BMI<30){category="Overweight";}
        if(15<=BMI&&BMI<16){category="Several underweight";}
	return category;
    }

    
    