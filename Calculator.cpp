#include <iostream>
#include <cmath>
using namespace std;

int main(){
   double cycle = 0, num1, num2, result, num3;
   char act;
   bool loop = true;

   cout << "CALCULATOR" << endl;
   cout << "First enter a number. Press 'Enter'." << endl;
   cout << "Then choose an action ( +, -, *, /, ^, v, !). Press 'Enter'." << endl;
   cout << "Then enter a second number. Press 'Enter'." << endl;
   cout << "Then choose an action ( +, -, *, / ). Press 'Enter'." << endl;
   cout << "Then enter a second number. Press 'Enter'." << endl;
   cout << "Repeat the process." << endl;
   cout << endl;
   cout << "If you want to reset the calculator press c." << endl;
   cout << "If you want to exit the calculator press x." << endl;

   while(loop){
      if(cycle < 1){
         cout << "| ";
         cin >> num1;
         cout << "| ";
         cin >> act;

         if(act == '+'){
         cout << "| ";
         cin >> num2;
         result = num1 + num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         

         }else if(act == '-'){
         cout << "| ";
         cin >> num2;
         result = num1 - num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         

         }else if(act == '*'){
         cout << "| ";
         cin >> num2;
         result = num1 * num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         

         }else if(act == '/'){
         cout << "| ";
         cin >> num2;
         result = num1 / num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         
         }else if(act == '^'){
         cout << "| ";
         cin >> num2;
         result = pow(num1, num2);
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         
         }else if(act == 'v'){
         result = cbrt(num1);
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;

         }else if(act == '!'){
            num2 = 1;
            result = 1;

            while(num2 <= num1){
               result *= num2;
               num2++;

            }

            cout << "|VVVVV" << endl;
            cout << "| " << result << endl;
         }
      
      }else{
         cout << "| ";
         cin >> act;

         if(act == '+'){
         cout << "| ";
         cin >> num2;
         result += num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         

         }else if(act == '-'){
         cout << "| ";
         cin >> num2;
         result -= num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         

         }else if(act == '*'){
         cout << "| ";
         cin >> num2;
         result = result * num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         

         }else if(act == '/'){
         cout << "| ";
         cin >> num2;
         result = result / num2;
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         
         }else if(act == '^'){
         cout << "| ";
         cin >> num2;
         result = pow(result, num2);
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;
         
         }else if(act == 'v'){
         result = cbrt(result);
         cout << "|VVVVV" << endl;
         cout << "| " << result << endl;

         }else if(act == 'c'){
         cout << "|reseted" << endl;
         result = 0;
         cycle = -1;

         }else if(act == 'x'){
         return 0;

         }else if(act == '!'){
             num3 = result;
             num2 = 1;
             result = 1;

             while (num2 <= num3){

              result *= num2;
              num2++;

            }

            cout << "|VVVVV" << endl;
            cout << "| " << result << endl;

         }
         

      }
   cycle ++;

   }
   
return 0;
}