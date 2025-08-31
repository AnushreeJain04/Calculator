#include <iostream>
#include<string.h>
#include<iomanip>
#include<cmath>
using namespace std;

string DecimalToBinary(int num){

    char bin[] = "01";
    string ans = "";
    if(num == 0) return "0";
    while(num > 0){
        ans = bin[num % 2] + ans;
        num /= 2;
    }
    return ans;
}

string DecimalToHexa(int num){

    char hexa[] = "0123456789ABCDEF";
    string ans = "";
    if(num == 0) return "0";
    while(num > 0){
        ans = hexa[num % 16] + ans;
        num /= 16;
    }
    return ans;
}

string DecimalToOctal(int num){

    char octal[] = "01234567";
    string ans = "";
    if(num == 0) return "0";
    while(num > 0){
        ans = octal[num % 8] + ans;
        num /= 8;
    }
    return ans;
}

int BinaryToDecimal(int num){
    int i = 0;
    int ans = 0;
    while(num > 0){
        int temp = num % 10;
        ans += (temp * pow(2, i));
        i++;
        num /= 10;
    }
    return ans;
}

int HexaToDecimal(int num){
    int i = 0;
    int ans = 0;
    while(num > 0){
        int temp = num % 10;
        ans += (temp * pow(16, i));
        i++;
        num /= 10;
    }
    return ans;
}

int OctalToDecimal(int num){
    int i = 0;
    int ans = 0;
    while(num > 0){
        int temp = num % 10;
        ans += (temp * pow(8, i));
        i++;
        num /= 10;
    }
    return ans;
}

string BinaryToOctal(int num){

    int a = BinaryToDecimal(num);
    string k = DecimalToOctal(a);
    return k;
}

string BinaryToHexa(int num){

    int a = BinaryToDecimal(num);
    string k = DecimalToHexa(a);
    return k;
}

string OctalToBinary(int num){
    int a = OctalToDecimal(num);
    string k = DecimalToBinary(a);
    return k;
}

string OctalToHexa(int num){
    int a = OctalToDecimal(num);
    string k = DecimalToHexa(a);
    return k;
}

string HexaToBinary(int num){
    int a = HexaToDecimal(num);
    string k = DecimalToBinary(a);
    return k;
}

string HexaToOctal(int num){
    int a = HexaToDecimal(num);
    string k = DecimalToOctal(a);
    return k;
}

int SumOfQuad(int matrix[100][100], int rowStart, int rowEnd, int colStart, int colEnd){
    int sum = 0;
    for(int i = rowStart; i < rowEnd; i++){
        for(int j = colStart; j < colEnd; j++){
            sum += matrix[i][j];
        }
    }
    return sum;
}

int FactorialNum(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++) fact *= i;
    return fact;
}

int main() {
	
	cout << "Select the operation you want to perform: " << endl;
	cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Temperature Conversion\n6. Number Conversion\n7. Matrix\n8. Factorial Calculation\n9. Power and Root\n10. Ceil value and Floor value\n11. Solve the equation\n12. Currency Converter\n13. Unit Converter\n14. Graph Plotting" << endl;
	cout << "Enter your choice: "; 
	int n;
	cin >> n;

	switch(n){
	    case 1:{
	        cout << "Enter the numbers to add: ";
	        int a,b;
	        cin >> a >> b;

	        int sum = a + b;  
	        cout << "Sum = " << sum << endl;
	        break;
	    }
	    case 2:{
	        cout << "Enter the numbers to subtract: ";
	        int a,b;
	        cin >> a >> b;

	        int diff = a - b;
	        if(diff < 0) diff = -1 * diff;
	        cout << "Difference = " << diff << endl;
	        break;
	    }
	    case 3:{
	        cout << "Enter the numbers to multiply: ";
	        int a,b;
	        cin >> a >> b;

	        int mul = a * b;
	        cout << "Product = " << mul << endl;
	        break;
	    }
	    case 4:{
	        cout << "Enter the numbers to divide: ";
	        int a,b;
	        cin >> a >> b;

	        int quo = a / b;
	        int rem = a % b;
	        cout << "Quotient = " << quo << " Remainder = " << rem << endl;
	        break;
	    }
	    case 5:{
	        cout << "Select conversion type: " << endl;
	        cout << "1. Fahrenheit to Celsius\n2. Celsius to Fahrenheit" << endl;

            int k, temp;
            float convertedTemp;
            cout << "Enter the conversion type: ";
	        cin >> k;

	        cout << "Enter the temperature: ";
	        cin >> temp;

	        if(k == 1) convertedTemp = (float)((temp - 32) * 5 / 9);
	        if(k == 2) convertedTemp = (float)((temp * 9 / 5) + 32);

	        cout << "The converted temperature is " << convertedTemp;
            if(k == 1) cout << " degree C" << endl;
            if(k == 2) cout << " F" << endl;
	        break;
	    }
	    case 6:{
	        cout << "Select conversion type: " << endl;
	        cout << "1. Decimal to Binary\n2. Decimal to Hexadecimal\n3. Decimal to Octal\n4. Binary to Decimal\n5. Hexadecimal to Decimal\n6. Octal to Decimal\n7. Binary to Octal\n8. Binary to Hexadecimal\n9. Octal to Binary\n10. Octal to Hexadecimal\n11. Hexadecimal to Octal\n12. Hexadecimal to Binary" << endl;

	        int r;
            cout << "Enter conversion type: ";
            cin >> r;

            if(r == 1){
                int num;
                cout << "Enter the decimal number: ";
                cin >> num;
                cout << "Binary Number = " << DecimalToBinary(num) << endl;
            }
            if(r == 2){
                int num;
                cout << "Enter the decimal number: ";
                cin >> num;
                cout << "Hexadecimal Number = " << DecimalToHexa(num) << endl;
            }
            if(r == 3){
                int num;
                cout << "Enter the decimal number: ";
                cin >> num;
                cout << "Octal Number = " << DecimalToOctal(num) << endl;
            }
            if(r == 4){
                int num;
                cout << "Enter the binary number: ";
                cin >> num;
                cout << "Decimal Number = " << BinaryToDecimal(num) << endl;
            }
            if(r == 5){
                int num;
                cout << "Enter the hexadecimal number: ";
                cin >> num;
                cout << "Decimal Number = " << HexaToDecimal(num) << endl;
            }
            if(r == 6){
                int num;
                cout << "Enter the octal number: ";
                cin >> num;
                cout << "Decimal Number = " << OctalToDecimal(num) << endl;
            }
            if(r == 7){
                int num;
                cout << "Enter the binary number: ";
                cin >> num;
                cout << "Octal Number = " << BinaryToOctal(num) << endl;
            }
            if(r == 8){
                int num;
                cout << "Enter the hexadecimal number: ";
                cin >> num;
                cout << "Hexadecimal Number = " << BinaryToHexa(num) << endl;
            }
            if(r == 9){
                int num;
                cout << "Enter the octal number: ";
                cin >> num;
                cout << "Binary Number = " << OctalToBinary(num) << endl;
            }
            if(r == 10){
                int num;
                cout << "Enter the octal number: ";
                cin >> num;
                cout << "Hexadecimal Number = " << OctalToHexa(num) << endl;
            }
            if(r == 11){
                int num;
                cout << "Enter the hexadecimal number: ";
                cin >> num;
                cout << "Octal Number = " << HexaToOctal(num) << endl;
            }
            if(r == 12){
                int num;
                cout << "Enter the hexadecimal number: ";
                cin >> num;
                cout << "Binary Number = " << HexaToBinary(num) << endl;
            }
            break;
	    }
        case 7:{
            int n1, k;
            cout << "Enter the size of matrix: ";
            cin >> n1;

            int arr[100][100];

            cout << "Enter the matrix: ";
            for(int i = 0; i < n1; i++){
                for(int j = 0; j < n1; j++){
                    cin >> arr[i][j];
                }
            }

            cout << "The matrix is: " << endl;
            for(int i = 0; i < n1; i++){
                for(int j = 0; j < n1; j++){
                    cout << " " << arr[i][j];
                }
                cout << endl;
            }
            
            cout << "Select function to perform: " << endl;
            cout << "1. Sum of matrix\n2. Transpose of matrix\n3. Sum of diagonal\n4. Sum of elements in quadrant" << endl;

            cout << "Enter the selection: ";
            cin >> k;

            if(k == 1){
                int sum = 0;
                for(int i = 0; i < n1; i++) for(int j = 0; j < n1; j++) sum += arr[i][j];
                cout << "Sum of matrix = " << sum << endl;
            }
            if(k == 2){
                cout << "Transpose matrix:" << endl;
                for(int i = 0; i < n1; i++){
                    for(int j = i + 1; j < n1; j++){
                        int temp = arr[i][j];
                        arr[i][j] = arr[j][i];
                        arr[j][i] = temp;
                    }
                }
                for(int i = 0; i < n1; i++){
                    for(int j = 0; j < n1; j++){
                        cout << " " << arr[i][j];
                    }
                    cout << endl;
                }
            }
            if(k == 3){
                int sum = 0;
                for(int i = 0; i < n1; i++) for(int j = 0; j < n1; j++) if(i == j) sum += arr[i][j];
                cout << "Sum of matrix = " << sum << endl;
            }
            if(k == 4){
                cout << "Sum of first quadrant = " << SumOfQuad(arr, 0, n1/2, 0, n1/2) << endl;
                cout << "Sum of second quadrant = " << SumOfQuad(arr, 0, n1/2, n1/2, n1) << endl;
                cout << "Sum of tird quadrant = " << SumOfQuad(arr, n1/2, n1, 0, n1/2) << endl;
                cout << "Sum of fourth quadrant = " << SumOfQuad(arr, n1/2, n1, n1/2, n1) << endl;
            }
            break;
        }
        case 8:{
            int num;
            cout << "Enter the number: ";
            cin >> num;
            cout << "Factorial of " << num << " = " << FactorialNum(num) << endl;
            break;
        }
        case 9:{
            cout << "Select your choice of execution: " << endl;
            cout << "1. Power\n2. Root" << endl;

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            if(choice == 1){
                int base, power;
                cout << "Enter the base and power: ";
                cin >> base >> power;
                cout << "The base(" << base << ") to power(" << power << ") = " << pow(base, power) << endl;
            }
            if(choice == 2){
                int base, root;
                cout << "Enter the base and root: ";
                cin >> base >> root;
                cout << "The base(" << base << ") to power(1/" << root << ") = " << pow(base, 1/root) << endl;
            }
            break;
        }
        case 10:{
            cout << "Select value type: " << endl;
            cout << "1. Ceil values\n2. Floor values" << endl;

            int choice, ans;
            cout << "Enter the selection: ";
            cin >> choice;

            double num;
            cout << "Enter the number: ";
            cin >> num;

            if(choice == 1){
                ans = num;
                if(num <= 0 || num == ans) ans = num;
                else ans = num + 1;
                cout << "Ceil value = " << ans << endl;
            }
            if(choice == 2){
                ans = num;
                if(num >= 0 || num == ans) ans = num;
                else ans = num - 1;
                cout << "Floor value = " << ans << endl;
            }
            break;
        }
        case 11:{
            cout << "Select equation type:" << endl;
            cout << "1. Linear Equation (ax + b = 0)\n2. Quadratic Equation (ax^2 + bx + c = 0)" << endl;
            int choice;
            cout << "Enter your choice: "; 
            cin >> choice;
            if(choice == 1){
                float a, b;
                cout << "Enter the values of a and b: ";
                cin >> a >> b;
                if(a == 0 && b == 0) cout << "Infinite solutions exist." << endl;
                else if(a == 0 && b != 0) cout << "No solution exists." << endl;
                else{
                    float x = -b / a;
                    cout << fixed << setprecision(2) << "The solution is x = " << x << endl;
                }
            }
            if(choice == 2){
                float a, b, c;
                cout << "Enter the values of a, b and c: ";
                cin >> a >> b >> c;
                if(a == 0 && b == 0 && c == 0) cout << "Infinite solutions exist." << endl;
                else if(a == 0 && b == 0 && c != 0) cout << "No solution exists." << endl;
                else if(a == 0 && b != 0){
                    float x = -c / b;
                    cout << fixed << setprecision(2) << "The solution is x = " << x << endl;
                }
                else{
                    float D = b * b - 4 * a * c;
                    if(D < 0) cout << "No real solution exists." << endl;
                    else if(D == 0){
                        float x = -b / (2 * a);
                        cout << "There exists two real and equal solutions." << endl;
                        cout << fixed << setprecision(2) << "The solution is x = " << x << endl;
                    }
                    else{
                        float x1 = (-b + sqrt(D)) / (2 * a);
                        float x2 = (-b - sqrt(D)) / (2 * a);
                        cout << "There exists two real and distinct solutions." << endl;
                        cout << fixed << setprecision(2) << "The solutions are x1 = " << x1 << " and x2 = " << x2 << endl;
                    }
                }
            
            break;}
        }
        case 12:{
            double usdToInr = 82.74;
            double eurToInr = 89.34;
            double gbpToInr = 101.23;
            double jpyToInr = 0.62;
            double audToInr = 55.12;
            double cadToInr = 61.45;

            cout << "Select the currency you want to convert from: " << endl;
            cout << "1. USD\n2. EUR\n3. GBP\n4. JPY\n5. AUD\n6. CAD\n7. INR" << endl;
            int choice1, choice2;
            cout << "Enter your choice: ";
            cin >> choice1;
            cout << "Select the currency you want to convert to: " << endl;
            cout << "1. USD\n2. EUR\n3. GBP\n4. JPY\n5. AUD\n6. CAD\n7. INR" << endl;
            cout << "Enter your choice: ";
            cin >> choice2;
            double amount;
            cout << "Enter the amount you want to convert: ";
            cin >> amount;
            
            cout << fixed << setprecision(2);
            switch(choice1){
                case 1:{
                    if(choice2 == 1) cout << amount << " USD = " << amount << " USD" << endl;
                    if(choice2 == 2) cout << amount << " USD = " << (amount * usdToInr) / eurToInr << " EUR" << endl;
                    if(choice2 == 3) cout << amount << " USD = " << (amount * usdToInr) / gbpToInr << " GBP" << endl;
                    if(choice2 == 4) cout << amount << " USD = " << (amount * usdToInr) / jpyToInr << " JPY" << endl;
                    if(choice2 == 5) cout << amount << " USD = " << (amount * usdToInr) / audToInr << " AUD" << endl;
                    if(choice2 == 6) cout << amount << " USD = " << (amount * usdToInr) / cadToInr << " CAD" << endl;
                    if(choice2 == 7) cout << amount << " USD = " << amount * usdToInr << " INR" << endl;
                    break;
                }
                case 2:{
                    if(choice2 == 1) cout << amount << " EUR = " << (amount * eurToInr) / usdToInr<< " USD" << endl;
                    if(choice2 == 2) cout << amount << " EUR = " << amount<< " EUR" << endl;
                    if(choice2 == 3) cout << amount<< " EUR = " << (amount * eurToInr) / gbpToInr<< " GBP" << endl;
                    if(choice2 == 4) cout << amount<< " EUR = " << (amount * eurToInr) / jpyToInr<< " JPY" << endl;
                    if(choice2 == 5) cout << amount<< " EUR = " << (amount * eurToInr) / audToInr<< " AUD" << endl;
                    if(choice2 == 6) cout << amount<< " EUR = " << (amount * eurToInr) / cadToInr<< " CAD" << endl;
                    if(choice2 == 7) cout << amount<< " EUR = " << amount * eurToInr<< " INR" << endl;
                    break;
                }
                case 3:{
                    if(choice2 == 1) cout << amount<< " GBP = " << (amount * gbpToInr) / usdToInr<< " USD" << endl;
                    if(choice2 == 2) cout << amount<< " GBP = " << (amount * gbpToInr) / eurToInr<< " EUR" << endl;
                    if(choice2 == 3) cout << amount<< " GBP = " << amount<< " GBP" << endl;
                    if(choice2 == 4) cout << amount<< " GBP = " << (amount * gbpToInr) / jpyToInr<< " JPY" << endl;
                    if(choice2 == 5) cout << amount<< " GBP = " << (amount * gbpToInr) / audToInr<< " AUD" << endl;
                    if(choice2 == 6) cout << amount<< " GBP = " << (amount * gbpToInr) / cadToInr<< " CAD" << endl;
                    if(choice2 == 7) cout << amount<< " GBP = " << amount * gbpToInr<< " INR" << endl;
                    break;
                }
                case 4:{
                    if(choice2 == 1) cout << amount<< " JPY = " << (amount * jpyToInr) / usdToInr<< " USD" << endl;
                    if(choice2 == 2) cout << amount<< " JPY = " << (amount * jpyToInr) / eurToInr<< " EUR" << endl;
                    if(choice2 == 3) cout << amount<< " JPY = " << (amount * jpyToInr) / gbpToInr<< " GBP" << endl;
                    if(choice2 == 4) cout << amount<< " JPY = " << amount<< " JPY" << endl;
                    if(choice2 == 5) cout << amount<< " JPY = " << (amount * jpyToInr) / audToInr<< " AUD" << endl;
                    if(choice2 == 6) cout << amount<< " JPY = " << (amount * jpyToInr) / cadToInr<< " CAD" << endl;
                    if(choice2 == 7) cout << amount<< " JPY = " << amount * jpyToInr<< " INR" << endl;
                    break;
                }
                case 5:{
                    if(choice2 == 1) cout << amount<< " AUD = " << (amount * audToInr) / usdToInr<< " USD" << endl;
                    if(choice2 == 2) cout << amount<< " AUD = " << (amount * audToInr) / eurToInr<< " EUR" << endl;
                    if(choice2 == 3) cout << amount<< " AUD = " << (amount * audToInr) / gbpToInr<< " GBP" << endl;
                    if(choice2 == 4) cout << amount<< " AUD = " << (amount * audToInr) / jpyToInr<< " JPY" << endl;
                    if(choice2 == 5) cout << amount<< " AUD = " << amount<< " AUD" << endl;
                    if(choice2 == 6) cout << amount<< " AUD = " << (amount * audToInr) / cadToInr<< " CAD" << endl;
                    if(choice2 == 7) cout << amount<< " AUD = " << amount * audToInr<< " INR" << endl;
                    break;
                }
                case 6:{
                    if(choice2 == 1) cout << amount<< " CAD = " << (amount * cadToInr) / usdToInr<< " USD" << endl;
                    if(choice2 == 2) cout << amount<< " CAD = " << (amount * cadToInr) / eurToInr<< " EUR" << endl;
                    if(choice2 == 3) cout << amount<< " CAD = " << (amount * cadToInr) / gbpToInr<< " GBP" << endl;
                    if(choice2 == 4) cout << amount<< " CAD = " << (amount * cadToInr) / jpyToInr<< " JPY" << endl;
                    if(choice2 == 5) cout << amount<< " CAD = " << (amount * cadToInr) / audToInr<< " AUD" << endl;
                    if(choice2 == 6) cout << amount<< " CAD = " << amount<< " CAD" << endl;
                    if(choice2 == 7) cout << amount<< " CAD = " << amount * cadToInr<< " INR" << endl;
                    break;
                }
                case 7:{
                    if(choice2 == 1) cout << amount<< " INR = " << amount / usdToInr<< " USD" << endl;
                    if(choice2 == 2) cout << amount<< " INR = " << amount / eurToInr<< " EUR" << endl;
                    if(choice2 == 3) cout << amount<< " INR = " << amount / gbpToInr<< " GBP" << endl;
                    if(choice2 == 4) cout << amount<< " INR = " << amount / jpyToInr<< " JPY" << endl;
                    if(choice2 == 5) cout << amount<< " INR = " << amount / audToInr<< " AUD" << endl;
                    if(choice2 == 6) cout << amount<< " INR = " << amount / cadToInr<< " CAD" << endl;
                    if(choice2 == 7) cout << amount<< " INR = " << amount<< " INR" << endl;
                    break;
                }
            }
            break;
        }
        case 13:{
            cout << "Select the unit you want to convert from: " << endl;
            cout << "1. Meter\n2. Kilometer\n3. Centimeter\n4. Millimeter\n5. Micrometer\n6. Nanometer\n7. Mile\n8. Yard\n9. Foot\n10. Inch" << endl;
            int choice1, choice2;
            cout << "Enter your choice: ";
            cin >> choice1;
            cout << "Select the unit you want to convert to: " << endl;
            cout << "1. Meter\n2. Kilometer\n3. Centimeter\n4. Millimeter\n5. Micrometer\n6. Nanometer\n7. Mile\n8. Yard\n9. Foot\n10. Inch" << endl;
            cout << "Enter your choice: ";
            cin >> choice2;
            double amount;
            cout << "Enter the amount you want to convert: ";
            cin >> amount;

            double meter, kilometer, centimeter, millimeter, micrometer, nanometer, mile, yard, foot, inch;

            switch(choice1){
                case 1:{
                    meter = amount;
                    kilometer = amount / 1000;
                    centimeter = amount * 100;
                    millimeter = amount * 1000;
                    micrometer = amount * 1000000;
                    nanometer = amount * 1000000000;
                    mile = amount / 1609.34;
                    yard = amount * 1.09361;
                    foot = amount * 3.28084;
                    inch = amount * 39.3701;
                    break;
                }
                case 2:{
                    meter = amount * 1000;
                    kilometer = amount;
                    centimeter = amount * 100000;
                    millimeter = amount * 1000000;
                    micrometer = amount * 1000000000;
                    nanometer = amount * 1000000000000;
                    mile = amount / 1.60934;
                    yard = amount * 1093.61;
                    foot = amount * 3280.84;
                    inch = amount * 39370.1;
                    break;
                }
                case 3:{
                    meter = amount / 100;
                    kilometer = amount / 100000;
                    centimeter = amount;
                    millimeter = amount * 10;
                    micrometer = amount * 10000;
                    nanometer = amount * 10000000;
                    mile = amount / 160934; 
                    yard = amount / 91.44;
                    foot = amount / 30.48;
                    inch = amount / 2.54;
                    break;
                }
                case 4:{
                    meter = amount / 1000;
                    kilometer = amount / 1000000;
                    centimeter = amount / 10;
                    millimeter = amount;
                    micrometer = amount * 1000;
                    nanometer = amount * 1000000;
                    mile = amount / 1.609e+6; 
                    yard = amount / 914.4;
                    foot = amount / 304.8;
                    inch = amount / 25.4;
                    break;
                }
                case 5:{
                    meter = amount / 1e+6;
                    kilometer = amount / 1e+9;
                    centimeter = amount / 10000;
                    millimeter = amount / 1000;
                    micrometer = amount;
                    nanometer = amount * 1000;
                    mile = amount / 1.609e+9; 
                    yard = amount / 914400;
                    foot = amount / 304800;
                    inch = amount / 25400;
                    break;
                }   
                case 6:{
                    meter = amount / 1e+9;
                    kilometer = amount / 1e+12;
                    centimeter = amount / 1e+7;
                    millimeter = amount / 1e+6;
                    micrometer = amount / 1000;
                    nanometer = amount;
                    mile = amount / 1.609e+12; 
                    yard = amount / 9.144e+8;
                    foot = amount / 3.048e+8;
                    inch = amount / 2.54e+7;
                    break;
                }
                case 7:{
                    meter = amount * 1609.34;
                    kilometer = amount * 1.60934;
                    centimeter = amount * 160934;
                    millimeter = amount * 1.609e+6;
                    micrometer = amount * 1.609e+9;
                    nanometer = amount * 1.609e+12;
                    mile = amount; 
                    yard = amount * 1760;
                    foot = amount * 5280;
                    inch = amount * 63360;
                    break;
                }
                case 8:{
                    meter = amount / 1.09361;
                    kilometer = amount / 1093.61;
                    centimeter = amount * 91.44;
                    millimeter = amount * 914.4;
                    micrometer = amount * 914400;
                    nanometer = amount * 9.144e+8;
                    mile = amount / 1760; 
                    yard = amount;
                    foot = amount * 3;
                    inch = amount * 36;
                    break;
                }
                case 9:{
                    meter = amount / 3.28084;
                    kilometer = amount / 3280.84;
                    centimeter = amount * 30.48;
                    millimeter = amount * 304.8;
                    micrometer = amount * 304800;
                    nanometer = amount * 3.048e+8;
                    mile = amount / 5280; 
                    yard = amount / 3;
                    foot = amount;
                    inch = amount * 12;
                    break;
                }
                case 10:{
                    meter = amount / 39.3701;
                    kilometer = amount / 39370.1;
                    centimeter = amount * 2.54;
                    millimeter = amount * 25.4;
                    micrometer = amount * 25400;
                    nanometer = amount * 2.54e+7;
                    mile = amount / 63360; 
                    yard = amount / 36;
                    foot = amount / 12;
                    inch = amount;
                    break;
                }
            }
            cout << fixed << setprecision(2);
            switch(choice2){
                case 1:{
                    cout << amount << " in selected unit = " << meter << " Meter" << endl;
                    break;
                }
                case 2:{
                    cout << amount << " in selected unit = " << kilometer << " Kilometer" << endl;
                    break;
                }
                case 3:{
                    cout << amount << " in selected unit = " << centimeter << " Centimeter" << endl;
                    break;
                }
                case 4:{
                    cout << amount << " in selected unit = " << millimeter << " Millimeter" << endl;
                    break;
                }
                case 5:{
                    cout << amount << " in selected unit = " << micrometer << " Micrometer" << endl;
                    break;
                }
                case 6:{
                    cout << amount << " in selected unit = " << nanometer << " Nanometer" << endl;
                    break;
                }
                case 7:{
                    cout << amount << " in selected unit = " << mile << " Mile" << endl;
                    break;
                }
                case 8:{
                    cout << amount << " in selected unit = " << yard << " Yard" << endl;
                    break;
                }
                case 9:{
                    cout << amount << " in selected unit = " << foot << " Foot" << endl;
                    break;
                }
                case 10:{
                    cout << amount << " in selected unit = " << inch << " Inch" << endl;
                    break;
                }
            }
            break;
        }
        case 14:{
            cout << "Select the type of graph to plot: " << endl;;
            cout << "1. Linear equation(y = ax + b || x = ay + b)\n2. Quadratic equation(y = ax^2 + bx + c || x = ay^2 + by + c)" << endl;
            cout << "Enter your choice: ";
            int choice;
            cin >> choice;

            if(choice == 1){
                cout << "Linear equation graph plotting" << endl;
                int a, b, gc;
                cout << "Enter the values of a and b: ";
                cin >> a >> b;

                cout << "Select which graph to plot: " << endl;
                cout << "1. y = ax + b\n2. x = ay + b" << endl;
                cout << "Enter selection: ";
                cin >> gc;

                if(gc == 1){
                    cout << "The linear equation is y = " << a << "x + " << b << endl;                
                    int height, width, scaleX, scaleY;
                    cout << "Enter the height and width of graph: ";
                    cin >> height >> width;
                    cout << "Enter the scale for x-axis and y-axis: ";
                    cin >> scaleX >> scaleY;

                    cout << "Graph -->" << endl;
                    for(int y = height; y >= -height; y--){
                        for(int x = -width; x <= width; x++){
                            int fx = x/scaleX;
                            int fy = (a*fx + b)/scaleY;

                            if(fy == y) cout << "*";
                            else if(x == 0 && y == 0) cout << "+";
                            else if(y == 0) cout << "-";
                            else if(x == 0) cout << "|";
                            else cout << " ";
                        }
                        cout << endl;
                    }
                }
                if(gc == 2){
                    cout << "The linear equation is x = " << a << "y + " << b << endl;                
                    int height, width, scaleY, scaleX;
                    cout << "Enter the height and width of graph: ";
                    cin >> height >> width;
                    cout << "Enter the scale for x-axis and y-axis: ";
                    cin >> scaleX >> scaleY;

                    cout << "Graph -->" << endl;
                    for(int y = height; y >= -height; y--){
                        for(int x = -width; x <= width; x++){
                            int fy = y/scaleY;
                            int fx = (a*fy + b)/scaleX;

                            if(fx == x) cout << "*";
                            else if(x == 0 && y == 0) cout << "+";
                            else if(y == 0) cout << "-";
                            else if(x == 0) cout << "|";
                            else cout << " ";
                        }
                        cout << endl;
                    }
                }
            }
            if(choice == 2){
                cout << "Quadratic graph plotting" << endl;
                int a, b, c, gc;
                cout << "Enter the values of a, b and c: ";
                cin >> a >> b >> c;

                cout << "Select which graph to plot: " << endl;
                cout << "1. y = ax^2 + bx + c\n2. x = ay^2 + by + c" << endl;
                cout << "Enter selection: ";
                cin >> gc;

                if(gc == 1){
                    cout << "The quadratic equation is y = " << a << "x^2 + " << b << "x +" << c << endl;
                                
                    int height, width, scaleX, scaleY;
                    cout << "Enter the height and width of graph: ";
                    cin >> height >> width;
                    cout << "Enter the scale for x-axis and y-axis: ";
                    cin >> scaleX >> scaleY;

                    cout << "Graph -->" << endl;
                    for(int y = height; y >= -height; y--){
                        for(int x = -width; x <= width; x++){
                            int fx = x/scaleX;
                            int fy = (a*fx*fx + b*fx + c)/scaleY;

                            if(fy == y) cout << "*";
                            else if(x == 0 && y == 0) cout << "+";
                            else if(y == 0) cout << "-";
                            else if(x == 0) cout << "|";
                            else cout << " ";
                        }
                        cout << endl;
                    }
                }
                if(gc == 2){
                    cout << "The quadratic equation is x = " << a << "y^2 + " << b << "y +" << c << endl;
                                
                    int height, width, scaleX, scaleY;
                    cout << "Enter the height and width of graph: ";
                    cin >> height >> width;
                    cout << "Enter the scale for x-axis and y-axis: ";
                    cin >> scaleX >> scaleY;

                    cout << "Graph -->" << endl;
                    for(int y = height; y >= -height; y--){
                        for(int x = -width; x <= width; x++){
                            int fy = y/scaleY;
                            int fx = (a*fy*fy + b*fy + c)/scaleX;

                            if(fx == x) cout << "*";
                            else if(x == 0 && y == 0) cout << "+";
                            else if(y == 0) cout << "-";
                            else if(x == 0) cout << "|";
                            else cout << " ";
                        }
                        cout << endl;
                    }
                }
            }
            break;
        }
    }
    return 0;
}