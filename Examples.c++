// CdeBeauty 10 hours of c++
// #include<iostream>

// int main()
// {
//     std :: cout << "Hello Revanth";
//     system("pause");
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout << "hello world!\n";
//     cout << "my name is revanth." << endl;
//     cout << "Today is friday";

//     system("pause>0");

//     return 0;
// }

// Introduction to variables
// #include<iostream>
// using namespace std;

// int main()
// {
//     float annualslary;
//     cout <<  "Please  enter your annual salary: ";
//     cin >> annualslary;
//     float monthlysalary = annualslary / 12;
//     cout << "Your monthly salary is " << monthlysalary << endl;
//     cout << "In 10 years you will earn " << annualslary * 10;

//     char character = 'a';

//     system("pause>0");
//     return 0;
// }

// data types
// #include<iostream>
// using namespace std;

// int main()
// {
//     int yearofBirth = 1995;
//     char gender = 'M';
//     bool isOlderThan18 = true;
//     float averageGender = 4.5;
//     double blance = 456789456789;

//     cout << "Size of int is " << sizeof(int) << "bytes\n";
//     // -1,-2,-3,....,-9223372036854775808
//     cout << "Int min value is " << INT64_MIN << endl;
//     // 0,+1,+2,+3,....,+9223372036854775808
//     cout << "Int max value is "<< INT64_MAX << endl;

//     cout << "Size of unsigned int is" << sizeof(unsigned int) << "bytes\n";
//     cout << "UInt max value is " << UINT64_MAX << endl;
//     cout << "Size of bool is " << sizeof(bool) << " bytes\n";
//     cout << "Size of char is " << sizeof(char) << " bytes\n";
//     cout << "Size of float is " << sizeof(float) << " bytes\n";
//     cout << "Size of double is " << sizeof(double) << " bytes\n";

//     system("pause > 0");
//     return 0;
// }

// Data type overflow

// #include<iostream>
// using namespace std;

// int main()
// {
//     int intMax = INT32_MAX;
//     cout << intMax << endl;
//     cout << intMax + 1;
//     system("pause>0");
//     return 0;
// }

// ASCI TABLE
// #include<iostream>
// using namespace std;

// int main ()
// {
//     cout << (int) 'a' << endl;
//     cout << int('a') << endl;
//     cout << int ('A') << endl;
//     cout << char (65) << endl;

//     system("pause>0");
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main ()
// {
//     // char c1;
//     // char c2;
//     // char c3;
//     char c1,c2,c3,c4,c5;//modern methods
//     cout << "Enter 5 letters: ";
//     cin >> c1 >> c2 >> c3 >> c4 >> c5;
//     cout << "ACSII message: " << int(c1) << " " << int(c2)
//     << " " << int(c3)<< " " << int(c4) << " " << int(c5);

//     system("pause>0");
//     return 0;
// }

// if/else statement

// #include<iostream>
// using namespace std;

// int main()
// {
//     //user enter integer number
//     //program write out if that number is even or odd
//     int number;
//     cout << "please enter whole number: ";
//     cin >> number;
//     if(number % 2 == 0)
//     {
//         cout << "You have enter evevn number." << endl;
//     }
//     else
//     {
//         cout << "You have enter odd number." << endl;
//     }
//     cout << "Thank. bye.";

//     system("pause>0");
//     return 0;
// }

// Nested if/eles statement

// #include<iostream>
// using namespace std;

// int main()
// {
//     //user enters side lengths of a triangle (a,b,c)
//     //program should write out whether that triangle is equilateral
//     //,isosceles or scalene
//     float a, b, c;
//     cout << "a,b,c:";
//     cin >> a >> b >> c;

//     if(a==b && b==c)
//         cout << "Equilateral triangle";
//     else
//     {
//         if (a!=b && b!=c && c!=a)
//             cout << "Scalene triangle";
//         else
//             cout << "Isosceles triangle";

//     }
//         //we can remove the flowers brakets

//     system("pause>0");
//     return 0;
// }

// operators (arithmetic,relational)
// #include<iostream>
// using namespace std;

// int main()
// {
//     //+,-,*,/,%
//     cout << 5 + 2 << endl;
//     cout << 5 - 2 << endl;
//     cout << 5 * 2 << endl;
//     cout << 5 / 2 << endl;
//     cout << 5 % 2 << endl;

//     system("pause>0");
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     //+,-,*,/,%
//     cout << 5 + 2 << endl;
//     cout << 5 / 2 << endl;
//     cout << 5 % 2 << endl;

//     //++,---
//     int counter = 7;
//     counter++;
//     cout << counter << endl;

//     counter--;
//     cout << counter << endl;

//     int counter2 = 7;
//     cout << ++counter2 << endl;
//     cout << counter2-- << endl;
//     cout << counter2 << endl;

//     system("cls");
//     system("pause>0");
//     return 0;
// }

// Relational
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=5, b=5;
//     cout << (a > b) << endl;  //0 is fales 1 is true
//     cout << (a <= b) << endl;
//     cout << (a == b) << endl;
//     cout << (a != b) << endl;

//     system("pause>0");
//     return 0;
// }

// &&,||,!
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=5, b=8;
//     cout << (a == 5 && b == 5) << endl;
//     cout << (a == 5 || b == 5) << endl;
//     cout << !(a == 5 && b == 5) << endl;
//     cout << !(a == 5 || b == 5) << endl;
//     cout << (a == 5 || b == 5+3) << endl;

//     system("pause>0");
//     return 0;
// }

// =,+=,-=,/=,%=
// #include<iostream>
// using namespace std;

// int main()
// {
//     int x = 5;
//     x += 7;
//     //x = x + 7;
//     cout << x << endl;

//     int x = 5;
//     x -= 7;
//     cout << x << endl;

//     double x = 5;
//     x /= 7;
//     cout << x << endl;

//     int x = 5;
//     x %= 7;
//     cout << x << endl;

//     system("pause>0");
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int main()
// {
//     //what is going to be the result of following lines ?

//     int a = 5 ,b = 4;
//     cout << a + (b++) << endl;
//     cout << (--a) + b << endl;

//     cout << !(true && false) << endl;
//     cout << (true && false || true) << endl;

//     int x = 7;
//     cout << (++x <= 9 && x + 2 >= 10) << endl;

//     int y = 3;
//     cout << (y == y++) << endl;

//     float z = 8;
//     z += 2;
//     cout << z << endl;
//     z /= 2;
//     cout << z << endl;
// }

// // Swapping value of two variables
// #include<iostream>
// using namespace std;

// int main()
// {
//     //program for swapping vale o two variables

//     int a =  20;
//     int b = 10;
//     int temp = a;
//     a = b;
//     b = temp;
//     cout << "a = " << a << ", b = " << b << endl;

//     system("pause>0");
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     //program for swapping vale o two variables with out using three varible

//     int a =  20;
//     int b = 10;

//     a = a + b;//30
//     b = a - b;//20
//     a = a - b;//10

//     cout << "a = " << a << ", b = " << b << endl;

//     system("pause>0");
//     return 0;
// }

// Build BMI claculator application flow

// #include<iostream>
// using namespace std;

// int main()
// {
//     //BMI Calulator
//     //Weight(kg) / (height * height)(m)
//     //Underweight < 18.5
//     //Noral weight 18.5-24.9
//     //Overweight >25

//     float weight,height,bmi;
//     cout << "weight(kg),height(m): ";
//     cin >> weight >> height;
//     bmi = weight / (height * height);

//     if(bmi<18.5)
//         cout << "Underweight" << endl;

//     else if(bmi>25)
//         cout << "Overweight" << endl;

//     else
//         cout << "Normal wight" << endl;

//     cout << "your bmi is " << bmi;

//     system("pause>0");
// }

// ternary conditions IM (gussing game)
// #include<iostream>
// using namespace std;

// int main()
// {
//     int hostUserNum,gustUserNum;
//     cout << "Host: ";
//     cin >> hostUserNum;
//     system("cls");
//     cout << "Guest: ";
//     cin >> gustUserNum;

//     (hostUserNum==gustUserNum) ? cout << "Correct!": cout << "failed!";

//     /*if(hostUserNum==gustUserNum)
//         cout << "Correct!";
//     else
//         cout << "Failed!";*/

//     system("pause>0");
// }

// switch statement
// #include<iostream>
// using namespace std;

// int main()
// {
//     float num1, num2;
//     char opration;
//     cout << "**Calculator**" << endl;
//     cin >> num1 >> opration >> num2;

//     switch (opration)
//     {
//         case '-':cout << num1 << opration << num2 << "=" << num1 - num2; break;
//         case '+':cout << num1 << opration << num2 << "=" << num1 + num2; break;
//         case '/':cout << num1 << opration << num2 << "=" << num1 / num2; break;
//         case '*':cout << num1 << opration << num2 << "=" << num1 * num2; break;
//         case '%':
//             bool isNum1Int, isNum2Int;
//             isNum1Int=(int)num1 == num1; //5==5.0
//             isNum2Int=(int)num2 == num2;

//             if(isNum1Int && isNum2Int)
//                cout << num1 << opration << num2 << "=" << (int)num1 % (int)num2;
//         else
//             cout << "Not valid!";
//         break;
//     default:cout << "Not valid operation!" << endl;

//     }
//     system("pause>0");
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     //(year % 4 == 0 && year % 100 !=0 || yera % 400 == 0)
//     int year,month;
//     cout << "year, month: ";
//     cin >> year >> month;
//     switch (month)
//     {
//         case 2:(year % 4 == 0 && year % 100 !=0 || year % 400 == 0)?
//             cout << "29 days month.": cout << "28 days month."; break;
//         case 4:
//         case 6:
//         case 9:
//         case 11: cout << "30 days month."; break;
//         case 1:
//         case 3:
//         case 5:
//         case 7:
//         case 8:
//         case 10:
//         case 12: cout << "31 days month."; break;
//         default:cout << "Not valid";
//     }

//     system("pause>0");
// }

// while loop part 1 + infinite loop
// write out all the numbers between 100-500 that are divisible by 3 and 5

// #include<iostream>
// using namespace std;

// int main()
// {
//     int counter = 100;
//     while(counter <= 501)
//     {
//         if(counter % 3 == 0 && counter % 5 == 0)
//             cout << counter << " is divisible\n";
//         counter++;
//     }
//     system("pause>0");
//     return 0;
// }

// count digits of number
// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Number: ";
//     cin >> number;

//     if(number == 0)
//         cout << "you have entered 0.\n";
//     else
//     {
//         if(number < 0)
//             number = -1 * number;
//         int counter = 0;
//         while(number > 0)
//         {
//             number = number / 10;
//             // number /=10;
//             counter++;
//         }
//         cout << "Number contains " << counter << " digits\n";
//     }
//     system("pause>0");
// }

// MY C++ subject
// #include<iostream>
// using namespace std;
// int total(int freq[],int low_val,int hight_val)
// {
//     int total = 0;
//     for(int k = low_val; k <=hight_val;k++)
//     total = total + freq[k];
//     return total;
// }

// int OBST(int keys[],int freq[],int n)
// {
//     int cost[n][n];
//     for(int length=2;length <=n;length++)
//     {
//         for(int i=0;i<=n-length+1;i++)
//         {
//             int j =i+length-1;
//             cost[i][j] =INT64_MAX;
//             for(int r=i;r<=j;r++)
//             {
//                 int c =((r>i)?cost[i][r-1]:0)+((r<j)?cost[r+1][i]:0)+total(freq,i,j);

//                 if(c<cost[i][j])
//                 cost[i][j] =c;
//             }
//         }
//     }
//     return cost[0][n-1];
// }
// int main()
// {
//     int keys[] ={20,24,40};
//     int freq[] ={68,16,100};
//     int n =3;
//     cout << "cost of Optimal BST is :" << OBST(keys,freq,n);
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     //Reversing number
//     int number,reversedNumber=0;
//     cout << "Number: ";
//     cin >> number;//123

//     while(number!=0)
//     {
//         // reversedNumber = reversedNumber * 10;
//         reversedNumber *= 10; //we can write any one of this
//         // int lastDigit = number % 10;
//         // reversedNumber += lastDigit;

//         reversedNumber += number % 10;
//         number/= 10;
//     }
//     cout << "Reversed: " << reversedNumber;

//     system("pause>0");
// }

// Do while loop

// #include<iostream>
// using namespace std;

// int main()
// {
//     int userspin=1234, pin, errorCounter = 0;

//     do
//     {
//         cout << "PIN: ";
//         cin >> pin;
//         if(pin !=userspin)
//         errorCounter++;
//     }
//     while(errorCounter<3 && pin!=userspin);
//     if(errorCounter<3)
//     cout << "Loading...";

//     else
//         cout << "Blocked...";

//     system("pause>0");
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//      //The factorial of a number
//     //6!=1*2*3*4*5*6=720

//     int number;
//     cout << "Number: ";
//     cin >> number;
//     int factorial=1;

//     // for(int i =1; i<=number;i++)
//     // {
//     //     factorial = factorial * i;
//     // }
//     //6!=6*5*4*3*2*1=720

//     for (int i = number; i >= 1; i--)
//     {
//         factorial = factorial * i;
//     }

//     cout << number << "!=" << factorial;
//     system("pause>0");
// }

// nesting do while loop

// #include<iostream>
// using namespace std;

// int main()
// {
//     int grade,sum=0;

//     for (int i = 0; i < 3; i++)
//     {
//         do
//         {
//             cout << "Enter grade " << i+1 << ":";
//             cin >> grade;
//         } while (grade<1 || grade>5);
//         sum += grade;
//     }
//     cout << "Sum = " << sum << endl;
//     cout << "Avg grade = " << (float) sum /3 << endl; // The sum of two integers will get integer value. so we use the float or we can we use 3.0

//     system("pause>0");
// }

// multiplication table
// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int i = 1; i <= 10; i++)
//     {
//         for (int j = 1; j <= 10; j++)
//         {
//             cout << i << " * " << j << " = " << i * j << endl;
//         }
//         cout << endl;
//     }
//     system("pause>0");
// }

// prograam for drawwwing rectangle shape
// #include<iostream>
// #include<iomanip> //This function is use to set width of symbol
// using namespace std;

// int main()
// {
//     int height, width;
//     cout << "Height: ";
//     cin >> height;
//     cout << "Width: ";
//     cin >> width;
//     char symbol;
//     cout << "symbol:";
//     cin >> symbol;

//     for(int h = 0; h < height; h++)
//     {
//         for (int w = 0; w < width; w++)
//         {
//             cout << setw(3) << symbol;
//         }
//         cout << endl;
//     }

//     system("pause>0");
// }

// prograam for drawing triangle shape
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main()
// {
//     int length;
//     cout << "Length: ";
//     cin >> length;
//     char symbol;
//     cout << "Symbol: ";
//     cin >> symbol;

//     for (int i = 1; i <= length; i++)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout << setw(3) << symbol;
//         }
//         cout << endl;
//     }
//     cout << endl << endl;

//     for (int i = length; i >= 1; i--)
//     {
//         for(int j = 1; j <= i; j++)
//         {
//             cout << setw(3) << symbol;
//         }
//         cout << endl;
//     }
//     system("pause>0");
// }

// introduction to functions
// #include<iostream>
// using namespace std;

// void introduceMe(string name, string city, int age)
// {
//     cout << "My name is " << name << endl;
//     cout << "I am from " << city << endl;
//     if(age!=0)
//         cout << "I am " << age << " years old " << endl;
// }

// int main()
// {
//     string name, city;
//     int age;
//     cout << "Name: ";
//     cin >> name;
//     cout << "City: ";
//     cin >> city;
//     cout << "Age: ";
//     cin >> age;
//     introduceMe(name,city,age);
//     // introduceMe("Revanth","Hyderabad",20);
//     // introduceMe("Simha","Hyderabad",22);

//     system("pause>0");
// }

// // Return type function
// #include<iostream>
// using namespace std;

// bool isprimenumber(int number)
// {
//     bool isprimeFlag = true;
//     for(int i = 2; i < number; i++)
//     {
//         if (number%i == 0)
//         {
//             return false;
//             // isprimeFlag = false;
//             // break;
//         }
//     }
//     // return isprimeFlag;
//     return true;
// }

// int main()
// {
//     int number;
//     cout << "Number: ";
//     cin >> number;
//     //A prime number is a whole number greater than 1 whose only factors are 1 and itself. A factor is a whole number that can be divided evenly into another number. The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29. Numbers that have more than two factors are called composite numbers.
//     // bool isprimeFlag=true;
//     // for(int i = 2; i < number; i++)
//     // {
//     //     if (number%i==0)
//     //     {
//     //         isprimeFlag = false;
//     //         break;
//     //     }
//     // }

//     bool isprimeFlag = isprimenumber(number);

//     if(isprimeFlag)
//         cout << "Prime number " << endl;
//     else
//         cout << "Not prime number" << endl;

//     system("pause>0");
// }

// #include<iostream>
// using namespace std;

// bool isprimeNumber(int number)
// {
//     for (int i = 2; i < number; i++)
//     {
//         if(number % i == 0)
//             return false;
//     }

// }
// int main()
// {
//     for (int i = 1; i <= 1000; i++)
//     {
//         bool isprime = isprimeNumber(i);
//         if(isprime)
//             cout << i << " is prime number\n";
//     }

//     system("pause>0");
// }

// function overloding

// #include<iostream>
// using namespace std;

// int sum(int a, int b);
// double sum(double a,double b);
// float sum(float a, float b, float c);

// int main()
// {
//     cout << sum(4, 3) << endl;
//     cout << sum(4.4, 3.3) << endl;
//     cout << sum(4.4, 3.3, 2.2) << endl;
//     system("pause>0");
// }
// int sum(int a, int b)
// {
//     int result = a + b;
//     return result;
// }
// double sum(double a,double b)
// {
//     return a + b;
// }
// float sum(float a, float b, float c)
// {
//     return a + b + c;
// }

// Build ATM program
// #include<iostream>
// using namespace std;

// void showMenu()
// {
//     cout << "********MENU********" << endl;
//     cout << "1. Check balance " << endl;
//     cout << "2. Deposit " << endl;
//     cout << "3. withdraw " << endl;
//     cout << "4. Exit " << endl;
//     cout << " **************** " << endl;

// }
// int main()
// {
//     //check blance,deposit,withdraw,show menu
//     int option;
//     double balance = 500;

//     do
//     {
//         showMenu();
//         cout << "option:";
//         cin >> option;
//         system("cls");

//         switch (option)
//         {
//         case 1: cout << "Balance is: " << balance << "$" <<  endl; break;
//         case 2: cout << "Deposit amount: ";
//             double depositAmount;
//             cin >> depositAmount;
//             balance += depositAmount;
//             break;

//         case 3: cout << "Withdraw amount: ";
//             double WithdrawAmount;
//             cin >> WithdrawAmount;
//             if(WithdrawAmount <= balance)
//                 balance -= WithdrawAmount;
//             else
//                 cout << "Not enought money" << endl;
//             break;
//         }

//     } while(option = 4);

//     system("pause>0");

// }

// Generic function and templates

// #include<iostream>
// using namespace std;

// template<typename T>
// void Swap(T& a, T& b)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

// // void Swap(char& a, char& b)
// // {
// //     char temp = a;
// //     a = b;
// //     b = temp;
// // }

// int main()
// {
//     int a = 5, b = 7;
//     cout << a << "-" << b << endl;
//     swap<int>(a,b);
//     cout << a << "-" << b << endl;

//     char c = 'c', d = 'd';
//     cout << c << "-" << d << endl;
//     swap (c,d);
//     cout << c << "-" << d << endl;

//     system("pause>0");
//     return 0;
// }

// Recursion and recursive function

// When the sum() function is called, it adds parameter k to the sum of all numbers smaller than k and returns the result. When k becomes 0, the function just returns 0. When running, the program follows these steps:
// 6+7+8=21

// #include<iostream>
// using namespace std;

// //sum numbers between m-n
// int main()
// {
//     int m=6, n=8;
//     int sum = 0;
//     for (int i = m; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "sum = " << sum;
//     system("pause>0");
// }

// #include <iostream>
// using namespace std;

// int recursive_sum(int m, int n)
// {
//     if (m == n)
//         return m;
//     return m + recursive_sum(m + 1, n);
// }

// int main()
// {
//     int m = 2, n = 4;
//     cout << "sum = " << recursive_sum(m, n);
// }
// The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power. However, when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.

// factoral of number by using Recursion
// #include<iostream>
// using namespace std;

// int factorial(int n);

// int main() {

//   int n;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   cout << "Factorial of " << n << " = " << factorial(n);

//   return 0;
// }

// int factorial(int n) {
//   if(n > 1)
//     return n * factorial(n - 1);
//   else
//     return 1;
// }

// Introduction to OOP //OOP stands for Object-Oriented Programming.
// #include <iostream>
// #include <list>
// using namespace std;

// class youTubeChannel
// {
// public:
//     string Name;
//     string OwnerName;
//     int SubscribersCount;
//     list<string> publishedvideoTitles;
// };
// int main()
// {
//     youTubeChannel ytChannel;
//     ytChannel.Name = "Revanth";
//     ytChannel.OwnerName = "Simha";
//     ytChannel.SubscribersCount = 10000000;
//     ytChannel.publishedvideoTitles = {"C++ for beginner viedo 1", "HTML & CSS video"};

//     cout << "Name:" << ytChannel.Name << endl;
//     cout << "OwnerName: " << ytChannel.OwnerName << endl;
//     cout << "SubscribersCount: " << ytChannel.SubscribersCount << endl;
//     for (string videoTitle : ytChannel.publishedvideoTitles)
//     {
//         cout << videoTitle << endl;
//     }
// }

// OOP class methods
// #include <iostream>
// #include <list>
// using namespace std;

// class youTubeChannel
// {
// public:
//     string Name;
//     string OwnerName;
//     int SubscribersCount;
//     list<string> publishedvideoTitles;

//     youTubeChannel(string name, string OwnerName)
//     {
//         Name = name;
//         OwnerName = OwnerName;
//         SubscribersCount = 0;
//     }

//     void Getifo()
//     {
//         cout << "Name:" << Name << endl;
//         cout << "OwnerName: " << OwnerName << endl;
//         cout << "SubscribersCount: " << SubscribersCount << endl;
//         cout << "Viedes:" << endl;
//     }
// };
// int main()
// {
//     youTubeChannel ytChannel("Revanth", "Simha");
//     ytChannel.publishedvideoTitles.push_back("c++ for beginners");
//     ytChannel.publishedvideoTitles.push_back("HTML & CSS for beginners");
//     ytChannel.publishedvideoTitles.push_back("C++ OOP");
//     youTubeChannel ytChannel2("Anysings", "Any");

//    ytChannel.Getifo();
//    ytChannel2.Getifo();

//     cout << "Name:" << ytChannel2.Name << endl;
//     cout << "OwnerName: " << ytChannel2.OwnerName << endl;
//     cout << "SubscribersCount: " << ytChannel2.SubscribersCount << endl;
//     cout << "Viedes:" << endl;
//     for (string videoTitle : ytChannel2.publishedvideoTitles)
//     {
//         cout << videoTitle << endl;
//     }
// }

// OOP Encapsulation

// #include <iostream>
// #include <list>
// using namespace std;

// class youTubeChannel
// {
// private:
//     string Name;
//     string OwnerName;
//     int SubscribersCount;
//     list<string> publishedvideoTitles;

// public:
//     youTubeChannel(string name, string ownerName)
//     {
//         Name = name;
//         OwnerName = ownerName;
//         SubscribersCount = 0;
//     }

//     void GetInfo()
//     {
//         cout << "Name: " << Name << endl;
//         cout << "OwnerName: " << OwnerName << endl;
//         cout << "Subscriberscount: " << SubscribersCount << endl;
//         cout << "Video: " << endl;
//         for (string VideoTitle : publishedvideoTitles)
//         {
//             cout << VideoTitle << endl;
//         }
//     }
//     void Subscribers()
//     {
//         SubscribersCount++;
//     }
//     void UnSubscribers()
//     {
//         if(SubscribersCount>0)
//             SubscribersCount--;
//     }
//     void PublishViedo(string title)
//     {
//         publishedvideoTitles.push_back(title);
//     }
// };
// int main()
// {
//     youTubeChannel ytChannel("Revanth", "Simha");
//     ytChannel.PublishViedo("c++ for beginners");
//     ytChannel.PublishViedo("HTML & CSS for begainners");
//     ytChannel.PublishViedo("c++ oop");

//     ytChannel.UnSubscribers();

//     ytChannel.GetInfo();
// }

// OOP Inheritance,GIT
// #include <iostream>
// #include <list>
// using namespace std;

// class youTubeChannel
// {
// private:
//     string Name;
// //  string OwnerName;
//     int SubscribersCount;
//     list<string> publishedvideoTitles;
// protected:
//     string OwnerName;
// public:
//     youTubeChannel(string name, string ownerName)
//     {
//         Name = name;
//         OwnerName = ownerName;
//         SubscribersCount = 0;
//     }

//     void GetInfo()
//     {
//         cout << "Name: " << Name << endl;
//         cout << "OwnerName: " << OwnerName << endl;
//         cout << "Subscriberscount: " << SubscribersCount << endl;
//         cout << "Video: " << endl;
//         for (string VideoTitle : publishedvideoTitles)
//         {
//             cout << VideoTitle << endl;
//         }
//     }
//     void Subscribers()
//     {
//         SubscribersCount++;
//     }
//     void UnSubscribers()
//     {
//         if (SubscribersCount > 0)
//             SubscribersCount--;
//     }
//     void PublishViedo(string title)
//     {
//         publishedvideoTitles.push_back(title);
//     }
// };

// class cookingyouTubechannel : public youTubeChannel
// {
// public:
//     cookingyouTubechannel(string name, string ownerName) : youTubeChannel(name, ownerName)
//     {
//     }
//     void practice()
//     {
//         cout << OwnerName << " practicing cooking, learning new recipes, experiment with spices..." << endl;
//     }
// };
// int main()
// {
//     cookingyouTubechannel cookingytChannel("Amy's kitchean", "Amy");
//     cookingyouTubechannel cookingytChannel2("Jhon's kitchean", "John");
//     // cookingytChannel.PublishViedo("Apple pie");
//     // cookingytChannel.PublishViedo("Chocolae cake");
//     // cookingytChannel.Subscribers();
//     // cookingytChannel.Subscribers();
//     // cookingytChannel.GetInfo();
//     cookingytChannel.practice();
//     cookingytChannel2.practice();
//     system("pause>0");
// }

// OOP Polymorphisam GIT
// Polymorphism
// Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
// Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.
// #include <iostream>
// #include <list>
// using namespace std;

// class youTubeChannel
// {
// private:
//     string Name;
//     //  string OwnerName;
//     int SubscribersCount;
//     list<string> publishedvideoTitles;

// protected:
//     string OwnerName;
//     int contentQuality;

// public:
//     youTubeChannel(string name, string ownerName)
//     {
//         Name = name;
//         OwnerName = ownerName;
//         SubscribersCount = 0;
//         contentQuality = 0;
//     }

//     void GetInfo()
//     {
//         cout << "Name: " << Name << endl;
//         cout << "OwnerName: " << OwnerName << endl;
//         cout << "Subscriberscount: " << SubscribersCount << endl;
//         cout << "Video: " << endl;
//         for (string VideoTitle : publishedvideoTitles)
//         {
//             cout << VideoTitle << endl;
//         }
//     }
//     void Subscribers()
//     {
//         SubscribersCount++;
//     }
//     void UnSubscribers()
//     {
//         if (SubscribersCount > 0)
//             SubscribersCount--;
//     }
//     void PublishViedo(string title)
//     {
//         publishedvideoTitles.push_back(title);
//     }
//     void checkAnalytics()
//     {
//         if (contentQuality < 5)
//             cout << Name << " has bad quality content." << endl;
//         else
//             cout << Name << "has grate quality content." << endl;
//     }
// };

// class cookingyouTubechannel : public youTubeChannel
// {
// public:
//     cookingyouTubechannel(string name, string ownerName) : youTubeChannel(name, ownerName)
//     {
//     }
//     void practice()
//     {
//         cout << OwnerName << " practicing cooking, learning new recipes, experiment with spices..." << endl;
//         contentQuality++;
//     }
// };

// class SingersyouTubechannel : public youTubeChannel
// {
// public:
//     SingersyouTubechannel(string name, string ownerName) : youTubeChannel(name, ownerName)
//     {
//     }
//     void practice()
//     {
//         cout << OwnerName << " is taking singing classes,learning new songs,learning how to dance.." << endl;
//         contentQuality++;
//     }
// };
// int main()
// {
//     cookingyouTubechannel cookingytChannel("Amy's kitchean", "Amy");
//     SingersyouTubechannel SingersytChannel("Johnsings", "John");

//     cookingytChannel.practice();
//     SingersytChannel.practice();
//     SingersytChannel.practice();
//     SingersytChannel.practice();
//     SingersytChannel.practice();
//     SingersytChannel.practice();

//     youTubeChannel * ytl = &cookingytChannel;
//     youTubeChannel * yt2 = &SingersytChannel;

//     ytl->checkAnalytics();
//     yt2->checkAnalytics();

//     system("pause>0");
// }

// Introsuction to Pointers

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     cout << &n << endl;
//     int *ptr = &n;
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     *ptr = 10;
//     cout << *ptr << endl;
//     cout << n << endl;

//     int V;
//     int *ptr2 = &V;
//     *ptr2 = 7;
//     cout << "V=" << V << endl;

//     return 0;
// }

// void pointers

// #include <iostream>
// using namespace std;

// void printNumber(int *numberptr)
// {
//     cout << *numberptr << endl;
// }
// void printletter(char *charptr)
// {
//     cout << *charptr << endl;
// }
// void print(void *ptr, char type)
// {
//     switch (type)
//     {
//     case 'i': cout << *((int *)ptr) << endl; break;
//     case 'c':cout << *((char *)ptr) << endl; break;
//     }

// }
// int main()
// {
//     int number = 5;
//     char letter = 'a';
//     // printNumber(&number);
//     // printletter(&letter);
//     print(&number, 'i');
//     print(&letter, 'c');

//     return 0;
// }

// pointer and arrays

// #include <iostream>
// using namespace std;

// int main()
// {
//     int luckyNumbers[5];
//     // int luckyNumbers[5] = {2, 3, 5, 7, 9};
//     // cout << luckyNumbers << endl;
//     // cout << &luckyNumbers[0] << endl;
//     // cout << luckyNumbers[2] << endl;
//     // cout << *(luckyNumbers + 2) << endl;

//     for (int i = 0; i <= 4; i++)
//     {
//         cout << "Number: ";
//         cin >> luckyNumbers[i];
//     }
//     for (int i = 0; i <= 5; i++)
//     {
//         cout << *(luckyNumbers + i) << "  ";
//     }

//     return 0;
// }

// Return multiple value from a function
// #include <iostream>
// using namespace std;

// int getMin(int numbers[], int size)
// {
//     int min = numbers[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (numbers[i] < min)
//             min = numbers[i];
//     }
//     return min;
// }

// int getMax(int numbers[], int size)
// {
//     int max = numbers[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (numbers[i] > max)
//             max = numbers[i];
//     }
//     return max;
// }
// void getMinAndMax(int numbers[], int size, int *min, int *max)
// {
//     for (int i = 1; i < size; i++)
//     {
//         if (numbers[i] > *max)
//             *max = numbers[i];
//         if (numbers[i] < *min)
//             *min = numbers[i];
//     }
// }
// int main()
// {
//     int numbers[5] = {5, 4, -2, 29, 6};
//     // cout << "min is " << getMin(numbers, 5) << endl;
//     // cout << "max is " << getMax(numbers, 5) << endl;
//     int min = numbers[0];
//     int max = numbers[0];
//     getMinAndMax(numbers, 5, &min, &max);
//     cout << "min is " << min << endl;
//     cout << "max is " << max << endl;

//     return 0;
// }

// Dynamic arrys,create/change arrays
// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout << "size: ";
//     cin >> size;
//     // int myArray[size];
//     int *myarray = new int[size];

//     for (int i = 0; i < size; i++)
//     {
//         cout << "Arry[" << i << "]";
//         cin >> myarray[i];
//     }
//     for (int i = 0; i < size; i++)
//     {
//         // cout << myarray[i] << " ";
//         cout << *(myarray + i) << " ";
//     }
//     delete[] myarray;
//     myarray = NULL;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int rows, cols;
//     cout << "row,cols: ";
//     cin >> rows >> cols;

//     int **table = new int *[rows];
//     for (int i = 0; i < rows; i++)
//     {
//         table[i] = new int[cols];
//     }
//     table[1][2] = 88;
//     for (int i = 0; i < rows; i++)
//     {
//         delete[] table[i];
//     }
//     delete[] table;
//     table = NULL;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int savedMoney[5] = {100, 200, 300, 400, 500};

//     int total = 0;
//     for (int i = 0; i < 5; i++)
//     {
//         total += savedMoney[i];

//         cout << "Total: " << total;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
void myFunction()
{
    int *ptr = new int[5];
    ptr[2] = 10;
    cout << "Hi, I am = " << ptr[2];
}

int main()
{
    myFunction();

    return 0;
}
