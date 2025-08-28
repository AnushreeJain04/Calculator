#include <iostream>
#include<string.h>
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
	cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Temperature Conversion\n6. Number Conversion\n7. Matrix\n8. Factorial Calculation\n9. Power and Root\n10. Ceil value and floor value" << endl;
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
    }
    return 0;
}