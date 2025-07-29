#include <iostream>
int main()

{
   char op;
   double num1;
   double num2;
   double result;

   std:: cout << "*******************Calculator*****************" << '\n';

   std:: cout << "Enter the operator (+ , - , / , *) : ";
   std:: cin >> op;

   std:: cout << " Enter the first number: ";
   std:: cin >> num1;

   std:: cout << " Enter the second number: ";
   std:: cin >> num2;

   switch(op){

       case '+':
         result = num1+num2;
         std:: cout << "Result: "<< result << '\n' << '\n';

         break;

       case '-':
         result = num1-num2;
         std:: cout << "Result: "<< result << '\n' << '\n';

         break;

       case '/':
         result = num1/num2;
         std:: cout << "Result: "<< result << '\n' << '\n';

         break;

       case '*':
         result = num1*num2;
         std:: cout << "Result: "<< result << '\n' << '\n';

         break;

       default:
        std:: cout << "That was not a valid operator" << '\n' << '\n';



}

    






   std:: cout << "**********************************************";








}