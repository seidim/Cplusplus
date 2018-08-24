/*********************************************************************
** Author: Muneef Seidi
** Date: 11/22/16
** Description: This function uses a stack of double to evaluate
postfix expressions. It takes a C-style string parameter that represents
a postfix expression. It uses +,-,*,/, and digits to evaluate the expression.
*********************************************************************/

#include<iostream>
#include<stack>
#include<string>
#include<cstring>


using namespace std;



// Function to evaluate Postfix expression.
double postfixEval(char equation[])
{

	stack<double> stack;	//Creating a stack.

	for (int i = 0; i < strlen(equation); i++) {

		if (equation[i] == ' ') continue;	//If character is space, move on.

		// If character is operator, pop two elements from stack, perform operation and push the result back. 
		else if (equation[i] == '+' || equation[i] == '-' || equation[i] == '*' || equation[i] == '/') {
			double oper2 = stack.top(); stack.pop();
			double oper1 = stack.top(); stack.pop();
			double result;

			if (equation[i] == '+') result = oper1 + oper2;
			else if (equation[i] == '-') result = oper1 - oper2;
			else if (equation[i] == '*') result = oper1 * oper2;
			else if (equation[i] == '/') result = oper1 / oper2;

			stack.push(result);
		}
		else if (equation[i] >= '0' && equation[i] <= '9') {	//Extract the number from string 
			double operand = 0;									//keep doing until a empty space is reached.
			while (i < strlen(equation) && (equation[i] >= '0' && equation[i] <= '9')) {

				operand = (operand * 10) + (equation[i] - '0');
				i++;
			}
			i--;
			stack.push(operand);	// Push operand on stack.
		}

	}
	// If equation is in correct format, Stack will finally have one element. This will be the output. 
	return stack.top();
}

