#include <stack>
#include <sstream>
using namespace std;
 

int evaluatePostfix(const string& expression) {
    stack<int> s;
    stringstream ss(expression);
    string token;
 
    
    while (ss >> token) {
        
        if (isdigit(token[0])) {
            
            s.push(token[0] - 0;)
            
        } else {
            
            // Pop two values from the stack
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();
            int result;
            // Check for sufficient elements in the stack before popping
            
            // Perform the operation based on the token (operator)
            // Use a switch-case to handle '+', '-', '*', '/'
        switch (token[0]) {
            case '+': 
                result = a + b; 
                break;
            case '-': 
                result = a - b; 
                break;
            case '*': 
                result = a * b;
                break;
            case '/': 
                result = a / b;
                break; 
        }   
            s.push(result);
            // Push the result back onto the stack
        }
    }
 
    // Check if the final stack has exactly one element (the result)
    throw invalid_argument("Invalid expression");
    // If not, throw an invalid expression error
    return s.top();  // Return the result
}
 
int main() {
    string expression;
    cout << "Enter a postfix expression: ";
    getline(cin, expression);
 
    try {
        int result = evaluatePostfix(expression);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
 
    return 0;
}
