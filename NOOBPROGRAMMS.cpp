/*These are my c++ programms that i first wrote and i hope they will stay here forever
the programms are very basic and i am using to learn them and revise


*/





#include <iostream>


int main(){

    int x;//declaration
    x = 5;//assignment
    int y = 8;
    int sum = x+y;
    double g = 6.88;
    double f = 993489.382334723478;
    char grade = 'A';
    int age = 16;
    std::cout << x <<std::endl;
    std::cout << y << std::endl;
    std::cout << grade << std::endl;
    std::cout << sum << std::endl;
    std::cout << f << std::endl;    //int function can only store a whole number 
    std::cout << g;               // the double function can store decimal points also
    char name = 'K';//char can only stor 1 string
    std::cout <<  name<< std::endl;
    bool student = true;//boolean has either true or fals wvalue and gives 1 or 0 accordingly
    bool employee = false;
    //strings and how to assign them (SEQUENCE OF TEXT)
    std::cout << employee <<std::endl;


    //to print hello and then the name 
    int Age = 16;
    std::string Pame = "Devadathan";
    std::cout << "Hello " << Pame << std::endl;
    std::cout << "You are "<< Age << " years old";
    return 0;



    //print circumference of a circle
    //const function does not allow rewriting of variable value
    const double PI = 3.14;
    double radius = 10;
    double circumference = 2*PI*radius;
    std::cout << "Circumference of circle is "<<circumference;
    //with namespace you can give different value to same variable
    return 0;
}

#include<iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main(){
    int x = 0;
    std::cout << first:: x <<std::endl;
    std::cout << second:: x <<std::endl;
    std::cout << x <<std::endl;
    return 0;


    //another way of doing it
    //using namespace first;
    //std::cout<<x;

    using std::cout;
    using namespace first;
    int x = 0;
    cout << x;
}
//typedef usually is a reserved keyword kind of like a nickname
//lets say we have a very long datatype


namespace first{
    int y =68;
}
int main(){
    using namespace first;
    using std::cout;
    std::cout << y;   

}

//some typedef examples
typedef int integer; // can also be written as using integer = int;
typedef std::string letter;//using letter = std::string letter;

int main (){
    letter name ="devadathan";
    integer b = 533576; 
    std::cout << name <<std::endl;
    std::cout << b << std::endl;

}

int main (){
//type conversion examples
//implicit = automatic
//explicit = precede value with new datatype 
    double x = (int) 3.24443;
    std::cout << x;   // 3 will be the output
    std::cout << (char) 80;//3P is the output this is an example of explicit type conversion
}

//taking inputs from user

int main(){
    std:: string name;
    int agee;
    std::cout << "What is your name: ";
    std::cin >> name ;
    //std::getline(std::cin >> std::ws, name);  //we can give space in the string we enter
    std::cout <<"What is your age: ";
    std::cin >> agee ;
    std::cout << "Hello " << name << " You are " << agee ;
return 0;   
}   


//MATH RELATED FUNCTIONS IN C++

//Print the greater value of 2 variables to the third variable

int main(){
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x,y); // this tells the computer to print the larger value in the 2 variables
    std::cout << z;// this will give an output of 4
}



int main(){
    double x = 3;
    double y = 4;
    double z;

    z = std::min(x,y); // this tells the computer to print the larger value in the 2 variables
    std::cout << z;// this will give an output of 3
}

#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = pow(2, 3);//power function
    std::cout << z;// this will give an output of 8
}



#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = sqrt(9);//square root function
    std::cout << z;// this will give an output of 3
}



#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = abs(-99);//modulus function
    std::cout << z;// this will give an output of 99
}



#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = round(5.334);//round off function
    std::cout << z;// this will give an output of 5
}



#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = ceil(5.334);//round off to the next highest whole number function
    std::cout << z;// this will give an output of 6
}



#include <cmath>
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = floor(5.998);//round off to the next highest whole number function
    std::cout << z;// this will give an output of 6
}



//for more math functions visit  www.cplusplus.com
//to find the hypotenuse of a right angles triangle 
int main(){
    double a ;
    double b ;
    std::cout << "Enter the length of the first side: "; 
    std::cin >>  a;
    std :: cout << "Enter the length of the seccond side: ";
    std::cin >> b;
    double c = sqrt(pow(a, 2)+pow(b,2 ));
    std::cout << "The hypotenuse of the triangle you have entered is " << c;
}



// starting with some basic if statements
//age chacking programme
int main(){
    int age;
    std::cout << "Enter your age";
    std::cin >> age;

    if(age>=18){
        using std::cout;
        cout << "Welcome to the site";
    }
    else if (age<=0){
        std::cout << "You havent been born yet! ";
    }
    else{
        std::cout << "You cannot enter the site due to age restriction";
    }
    
}



//order of else if statements also matter
//switch is a alternative to using many if statements
//lets say you have to write a lot of if statements it is a long process and is inefficient hence we use the switch operator one programme is don by me below
int main(){
    int month;
    std::cout << "Enter the month (1-12)";
    std::cin >> month;

    switch (month){
        case 1:
            std::cout << "It is January! ";
            break;
        case 2:
            std::cout << "It is February! ";
            break;
         case 3:
            std::cout << "It is March! ";
            break;
         case 4:
            std::cout << "It is April!  ";
            break;
         case 5:
            std::cout << "It is May! ";
            break;
         case 6:
            std::cout << "It is June! ";
            break;
         case 7:
            std::cout << "It is July! ";
            break;
         case 8:
            std::cout << "It is August! ";
            break;
         case 9:
            std::cout << "It is September! ";
            break;
         case 10:
            std::cout << "It is October! ";
            break;
         case 11:
            std::cout << "It is November! ";
            break;
         case 12:
            std::cout << "It is December! ";
            break;
        
    }
        
}



//checking grade and giving comments
int main(){
    char grade;
    std::cout <<"Enter your grade(A-F)(IN CAPITAL LETTERS ONLY) ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did less than average";
            break;
        case 'F':
            std::cout << "You did bad";
            break;
        default:
            std::cout << "Please enter from a-f in capital not anything else";
            
    }
}



//Simple calculator programme

int main(){
    double num1;
    double num2;
    double num3;
    char op;
    double result;
    std::cout << "****** CALCULATOR BY DEV ******";

    std::cout << "Enter any operator from these (+,-,*,/)";
    

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the operation: ";
    std::cin >> op;
    
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << result << std::endl;
            break;

    }

}



//easier way to write an if statement
//it is much shorter and efficient
//this is the ternary operator
int main(){
    int grade = 75;
    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail";
}



//another example
int main(){
    int number;
    std::cout << "Enter the number";
    std::cin >> number;
    number % 2 == 0 ? std::cout << "Number is even": std::cout << "Number is odd";
}

//&& checks weather 2 conditions are true
//



int main(){
    double temp;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    if(temp>=20 && temp <= 30){
        std::cout << "Temperature is normal";
    }
    else{
        std::cout << "Temperature is bad";
    }

}



//temperature conversion programme
int main(){
    double temp;
    char unit;
    std::cout << "**************Temperature conversion program********************\n";
    std::cout <<"C is Celsius\n";
    std::cout << "F is Farenheit\n";
    std::cout << "Enter the unit to which you want to convert the temperature to ";
    std::cin >> unit;
    if( unit == 'C' || unit == 'c' ){
        std::cout<<"Enter the temperature in farenheit\n";
        std::cin >> temp;

        temp = (temp-32)*5/9;
        std::cout << "Your temperature in Celsius is\n" << temp;  

    }
    else if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the unit in Celsius\n";
        std::cin >> temp;  
        temp = (9/5*temp) + 32;
        std::cout << "Temperature in Farenheit is\n" << temp;
    }
    else{
        std::cout << "Enter a valid character\n";
    }



    std::cout << "*******************************************************";
}



//degree to radian coversion programme
int main(){
    double angle;
    char unit;
    std::cout << "************angle inter-coversion programme*****************";

    std::cout <<"************************************************************";

}



//using the getline function
//clear function clears any value stored in a variable
//empty function checks weather there is anything stored in a variable
//append function helps us to insert something  
int main(){
    std::string name;
    std::cout << "Enter your name";
    std::cin >> name;
    std::getline(std::cin,name);

    if(name.length() > 10){
        std::cout << "Your name is too big try a shorter name";
    }
    else{
        std::cout << "Welcome" << name;
    }
}



//appending something
int main(){
    std::string name;
    std::cout << "Enter your name ";
    std::getline(std::cin, name);

    name.append("@gmail.com");
    std::cout << "Your mail id is " << name;
}



//take out character
int main(){
    std::string name;
    std::cout << "Enter your name ";
    std::getline(std::cin, name);

    
    std::cout << name.at(0);
}

//making a mail id programme

int main(){
    char decision;
    std::string mail_id; 


    std::cout << "Do you want to create a mail id \n";
    std::cout <<"Type a Y or N/n ";
    std::cin >> decision;
    if(decision == 'Y'||decision == 'y'){
        std::cout << "Only enter your first name \n";
        std::cout << "Enter your name and we will create mail id for you \n";
    }
        std::cin >> mail_id;
        if(mail_id.length()>10){
            std::cout << "Your mail is cannot be more than 10 characters \n";
        }
        mail_id.append("@gmail.com");
        std::cout << "Your mail id is: "<< mail_id;
return 0;

}



//if there is no value for an int then it is equated to 0
int main(){
    int number;
    if(number<0){
        std::cout <<"The value of the number is less than 0";
    }
    else{
        std::cout <<"The value of the number is 0";
    }
    
}



int main(){ //do while loop
    double number;
    do{
        std::cout << "Enter a positive number ";
        std::cin >> number;
    }while(number > 0);
}



int main(){ //for loop
    for(int i=1;i <=100;i++){
        std::cout << "Devadathan";
    }
}



//break = break out of the loop
//continue = skip current iteration
int main(){
    int number;
    std::cout << "Enter the number";
    std::cin >> number;
    if(number>10){
        std::cout<<"Number is greater than 10";
        break;
    }
}



//counting to 10 3 times using nested for loop
int main(){
    int i = 1;
    for(i=1,i<=3,i++){
        for(i=i,i<=10,i++){
            std::cout << i << ' ';
        }

    }
}