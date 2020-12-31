#include<iostream>
#include<string>
using namespace std;

int age = 0, height = 0, property = 0;
string status = "";

int main(){
    cout << "Enter your age: ";
    cin >> age;
    //อายุน้อยกว่า 20
    if(age <= 20){
        cout << "Enter your height: ";
        cin >> height;
        //สูงไม่ถึง 160
        if(height < 160){
            status = "UNFRIEND";
        }
        else if(height >= 160 && height < 175){
            status = "FRIEND";
        }
        else {
            cout << "Enter your property: ";
            cin >> property;
            if(property > 69000000){
                status = "MARRIED";
            }
            else if(property <= 69000000){
                status = "ONE-NIGHT-STAND";
            }  
        } 
    }
    //อายุ 30ปี
    else if (age > 20 && age < 30){
        cout << "Enter your property: ";
        cin >> property;
        if(property > 10000000){
            status = "BEST FRIEND";
        }
        else{
            status = "UNFRIEND";
        }
    }
    
    //นอกจากนั้น
    else{
        status = "UNFRIEND";
    }

    cout << "Your status = " << status;

    return 0;
}

