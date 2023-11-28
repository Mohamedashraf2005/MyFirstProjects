// BMI Calculator With Advices for your health according to your classification
//Some information was obtained from this Source ==>  https://www.medicalnewstoday.com/articles/323622
#include <iostream>
using namespace std;

int main(){
	
	float weight , heightCM , BMI, heightM;
	cout <<"====BMI Calculator====\n";
	
	cout <<"Enter Your Weight in KG "; 
	cin >> weight;
	
	cout <<"Enter Your height in Centimeters "; 
	cin >> heightCM ;
	
	heightM = heightCM/100; // To convert cm input to meter
	
	
	if(  weight < 20 || weight > 300 || heightCM >250 || heightCM < 120 ){
		cout <<"Please Enter Valid height or Weight, It must Be Between 120-250 cm and Between 20-300 KG"; 
	}else{
		BMI = weight / (heightM * heightM ); //To calculate BMI in metric units, use the following method: BMI = kg/m2
		
		cout << "\nYour BMI is "<< BMI <<" And Your Classification is ";
		
		if( BMI < 16){
		cout << "Severe Thinness \nthis indicates that you are underweight, so you may need to put on some weight. You are recommended to ask your doctor or a dietitian for advice.";
	} else if( BMI > 16 && BMI < 17){
		cout << "Moderate Thinness \nthis indicates that you are underweight, so you may need to put on some weight. You are recommended to ask your doctor or a dietitian for advice.";		
	}else if( BMI >17 && BMI < 18.5){  
		cout << "Mild Thinness \nthis indicates that you are underweight, so you may need to put on some weight. You are recommended to ask your doctor or a dietitian for advice.";		
	}else if( BMI > 18.5 && BMI < 25){    
		cout << "Normal \nthis indicates that you are at a healthy weight for your height. By maintaining a healthy weight, you lower your risk of developing serious health problems.";		
	}else if( BMI > 25 && BMI <30){    
		cout << "Overweight \nthis indicates that you are slightly overweight. You may be advised to lose some weight for health reasons. You are recommended to talk to your doctor or a dietitian for advice.";		
	}else if( BMI > 30 && BMI <35){    
		cout << "Obese Class I \nthis indicates that you are heavily overweight. Your health may be at risk if you do not lose weight. You are recommended to talk to your doctor or a dietitian for advice.";		
	}else if( BMI > 35 && BMI <40){    
		cout << "Obese Class II \nthis indicates that you are heavily overweight. Your health may be at risk if you do not lose weight. You are recommended to talk to your doctor or a dietitian for advice.";		
	}else{    
		cout << "Obese Class III \nthis indicates that you are heavily overweight. Your health may be at risk if you do not lose weight. You are recommended to talk to your doctor or a dietitian for advice.";		
	}	
	}
	
	return 0;
}
