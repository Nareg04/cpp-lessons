#include "iostream"
#include "string"
#include "vector"
#include "bitset"

using namespace std;

class User {
private:
    string name = "John";

protected:
    string surname = "Johnyan";

public:
    int age = 26;

    
    string get_name() {
        return name;
    }
};

class About : public User {
public:
    
    string get_surname() {
        return surname;
    }
};
// Объявление функции
int DemoConsoleOutput();

// example 4 
 
// Объявление и определение функции
int DemoConsoleOutput() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 << endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;
}

//example 7

void MultiplyNumbers(){
    
     cout << "Enter the first number: ";
     int FirstNumber = 0;
     cin >> FirstNumber;
         cout << "Enter the second number: ";
     int SecondNumber = 0;
     cin >> SecondNumber;
         
     // Умножение двух чисел, сохранение результата в переменной
     int MultiplicationResult = FirstNumber * SecondNumber;
    
     // Отображение результата
         cout << FirstNumber << " x " << SecondNumber;
         cout << " = " << MultiplicationResult << endl;
     
}

//example 8

// три глобальных целых числа
 int FirstNumber = 0;
   int SecondNumber = 0;
 int MultiplicationResult = 0;

 void MultiplyNumbers() {
     cout << "Enter the first number: ";
     cin >> FirstNumber;

     cout << "Enter the second number: ";
     cin >> SecondNumber;

     // Умножение двух чисел, сохранение результата в переменной
     MultiplicationResult = FirstNumber * SecondNumber;

     // Отображение результата
     cout << "Displaying from MultiplyNumbers(): ";
     cout << FirstNumber << " x " << SecondNumber;
     cout << " = " << MultiplicationResult << endl;
 }

 //example 12

 enum CardinalDirections{
     North = 25,
     South,
     East,
     West
  };

int main(){

    //Home work Class

    About object1;
    cout << "Name = " << object1.get_name() << endl;
    cout << "Surname = " << object1.get_surname() << endl;
    cout << "Age = " << object1.age << endl;
    
    //example 1
    cout << "Hello World!" << endl;
    
    //example 2 
     int x = 8;
     int у = 6;
     cout << endl;
     cout << x - у << " " << x << у;
     cout << std::endl;

     // example 3

     //Вызов функции 
     DemoConsoleOutput();

     //example 5

     // Объявление переменной для хранения целого числа
     int InputNumber;
    
     cout << "Enter an integer: ";

     // Сохранить введенное пользователем целое число
     cin >> InputNumber;

     // Аналогично с текстовыми данными
     cout << "Enter your name: ";
     string InputName;
     cin >> InputName;

     cout << InputName << " entered " << InputNumber << endl;
    
     //example 6

     //Использование переменных для хранения чисел и результата их умножения
     
     cout << "This program will help you multiply two numbers"
          << endl;

     cout << "Enter the first number: ";
     int FirstNumber = 0;
     cin >> FirstNumber;

     cout << "Enter the second number: ";
     int SecondNumber = 0;
     cin >> SecondNumber;

     // Умножение двух чисел, сохранение результата в переменной
     int MultiplicationResult = FirstNumber * SecondNumber;

     // Отображение результата
     cout << FirstNumber << " x " << SecondNumber;
     cout << " = " << MultiplicationResult << endl;

     //example 7 cantinue

     cout << "This program will help you multiply two numbers"
          << endl;
     

      // Вызов функции, выполняющей всю работу
      MultiplyNumbers();

      //out << FirstNumber << " х " << SecondNumber;
      //cout << " = " << MultiplicationResult << endl;
     
      // example 8 continue
      MultiplyNumbers();

      cout << "Displaying from main(): ";

      // Вызов функции, выполняющей всю работу
      MultiplyNumbers();
       cout << FirstNumber << " х " << SecondNumber;
       cout << " = " << MultiplicationResult << endl;

       //example 9
       
       // Поиск размера стандартных типов переменных языка C++

       cout << "Computing the size of some C++ inbuilt variable types"
            << endl;
       cout << "Size of bool: " << sizeof(bool) << endl;
       cout << "Size of char: " << sizeof(char) << endl;
       cout << "Size of unsigned short int: " << sizeof(unsigned short)
            << endl;
       cout << "Size of short int: " << sizeof(short) << endl;
       cout << "Size of unsigned long int: " << sizeof(unsigned long)
            << endl;
       cout << "Size of long: " << sizeof(long) << endl;
       cout << "Size of int: " << sizeof(int) << endl;
       cout << "Size of unsigned long long: "
            << sizeof(unsigned long long) << endl;
       cout << "Size of long long: " << sizeof(long long) << endl;
       cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
       cout << "Size of float: " << sizeof(float) << endl;
       cout << "Size of double: " << sizeof(double) << endl;
       cout << "The output changes with compiler, hardware and OS"
            << endl;

       //exampel 10
       
       //Использование ключевого слова auto для выведения типов компилятором

       auto Flag = true;
       auto Number = 2500000000000;
       cout << "Flag = " << Flag;
       cout << " , sizeof(Flag) = " << sizeof(Flag) << endl;
       cout << "Number = " << Number;
       cout << " , sizeof(Number) =•" << sizeof(Number) << endl;

       //example 11

       //Объявление константы по имени Pi

       const double Pi = 22.0 / 7;
       cout << "The value of constant Pi is: " << Pi << endl;
       
        // Снятие комментария со следующей строки приведет к ошибке
           // Pi = 345;

       //example 12 continue

       //Использование перечисляемых значений для указания направлений ветра
       cout << "Displaying directions and their symbolic values"
            << endl;

       cout << "North: " << North << endl;
       cout << "South: " << South << endl;
       cout << "East: " << East << endl;
       cout << "West: " << West << endl;
       CardinalDirections WindDirection = South;
       cout << "Variable WindDirection = " << WindDirection << endl;

       //example 13

       //Объявление массива целых чисел и доступ к его элементам

       int MyNumbers[5] = { 34, 56, -21, 5002, 365 };
       cout << "First element at index 0: " << MyNumbers[0] << endl;
       cout << "Second element at index 1: " << MyNumbers[1] << endl;
       cout << "Third element at index 2: " << MyNumbers[2] << endl;
       cout << "Fourth element at index 3: " << MyNumbers[3] << endl;
       cout << "Fifth element at index 4: " << MyNumbers[4] << endl;

       //example 14

       const int ARRAY_LENGTH = 5;
       
       // Массив из 5 целых чисел, инициализированных нулями
       int MyNumbers[ARRAY_LENGTH] = { 0 };
       
       cout << "Enter index of the element to be changed: ";
       int nElementlndex = 0;
       cin >> nElementlndex;
       
       cout << "Enter new value: ";
       cin >> MyNumbers[nElementlndex];

       cout << "First element at index 0: " << MyNumbers[0] << endl;
       cout << "Second element at index 1: " << MyNumbers[1] << endl;
       cout << "Third element at index 2: " << MyNumbers[2] << endl;
       cout << "Fourth element at index 3: " << MyNumbers[3] << endl;
       cout << "Fifth element at index 4: " << MyNumbers[4] << endl;

       //example 15

       //vector

       vector<int> DynArrNums(3);
       
       DynArrNums[0] = 365;
       DynArrNums[1] = -421;
       DynArrNums[2] = 789;
       
       cout << "Number of integers in array: " << DynArrNums.size()
            << endl;
       
       cout << "Enter another number for the array" << endl;
       int AnotherNum = 0;
       cin >> AnotherNum;
       DynArrNums.push_back(AnotherNum);
       
       cout << "Number of integers in array: " << DynArrNums.size()
            << endl;
       cout << "Last element in array: ";
       cout << DynArrNums[DynArrNums.size() - 1] << endl;
    
        //example 16

       //Анализ завершающейся нулем строки в стиле С

       char SayHello[] = { 'H', 'e', '1', '1', 'o', ' ',
                        'W', 'o', 'r', '1', 'd' };
       cout << SayHello << endl;
       cout << "Size of array: " << sizeof(SayHello) << endl;
       cout << "Replacing space with null" << endl;
       SayHello[5] = '\0';
       cout << SayHello << endl;
       cout << "Size of array: " << sizeof(SayHello) << endl;
        
       //example 17

       //Риск использования строк в стиле С и пользовательского ввода

           cout << "Enter a word NOT longer than 20 characters:" << endl;
           
           char Userlnput[21] = { '\0 ' };
           cin >> Userlnput;
           
           cout << "Length of your input was: " << strlen(Userlnput)
                << endl;

       //example 18
       
       //Использование типа std:: string для инициализации и хранения
       //пользовательского ввода, а также копирование, конкатенация и определение длины строки

           string Greetings ("Hello std::string!");
           cout << Greetings << endl;
           cout << "Enter a line of text: " << endl;
           string FirstLine;
           getline(cin, FirstLine);
           cout << "Enter another: " << endl;
           string SecLine;
           getline(cin, SecLine);
           cout << "Result of concatenation: " << endl;
           string Concat = FirstLine + " " + SecLine;
           cout << Concat << endl;
           cout << "Copy of concatenated string: ";
           string Copy;
           Copy = Concat;

           cout << Copy << endl;
           cout << "Length of concat string: " << Concat.length() << endl;


           //example 19

           // Демонстрация арифметических операторов
           //с введенными пользователем целыми числами_

           cout << "Enter two integers:" << endl;
           int Numl = 0, Num2 = 0;
           cin >> Numl;
           cin >> Num2;
           
           cout << Numl << " + " << Num2 << " = " << Numl + Num2 << endl;
           cout << Numl << " - " << Num2 << " = " << Numl - Num2 << endl;
           cout << Numl << " * " << Num2 << " = " << Numl * Num2 << endl;
           cout << Numl << " / " << Num2 << " = " << Numl / Num2 << endl;
           cout << Numl << " % " << Num2 << " = " << Numl % Num2 << endl;
    
           //example 20

           int Mylnt = 101;
           cout << "Start value of integer being operated: " << Mylnt
                << endl;
           int PostFixInc = Mylnt++;
           cout << "Result of Postfix Increment = " << PostFixInc << endl;
           cout << "After Postfix Increment, Mylnt = " << Mylnt << endl;

           Mylnt = 101; // Переустановка
           int PreFixInc = ++Mylnt;
           cout << "Result of Prefix Increment = " << PreFixInc << endl;
           cout << "After Prefix Increment, Mylnt = " << Mylnt << endl;
            
           Mylnt = 101;
           int PostFixDec = Mylnt ;
           cout << "Result of Postfix Decrement = " << PostFixDec << endl;
           cout << "After Postfix Decrement, Mylnt = " << Mylnt << endl;

           Mylnt = 101;
           int PreFixDec = - Mylnt;
           cout << "Result of Prefix Decrement = " << PreFixDec << endl;
           cout << "After Prefix Decrement, Mylnt = " << Mylnt << endl;

           //exampel 21

           // Ошибка переполнения у знаковых и беззнаковых целочисленных переменных

           unsigned short UShortValue = 65535;
           cout << "Incrementing unsigned short " << UShortValue
                << " gives: ";
           cout << ++UShortValue << endl;
           
           short SignedShort = 32767;
           cout << "Incrementing signed short " << SignedShort << " gives: ";
           cout << ++SignedShort << endl;

           //example 22

           //Операторы равенства и сравнения

           cout << "Enter two integers:" << endl;
           int Numl = 0, Num2 = 0;
           cin >> Numl;
           cin >> Num2;

           bool Equality = (Numl == Num2);
           cout << "Result of equality test: " << Equality << endl;

           bool Inequality = (Numl != Num2);
           cout << "Result of inequality test: " << Inequality << endl;

           bool GreaterThan = (Numl > Num2);
           cout << "Result of " << Numl << " > " << Num2;
           cout << " test: " << GreaterThan << endl;

           bool LessThan = (Numl < Num2);
           cout << "Result of " << Numl << " < " << Num2 << " test: "
                << LessThan << endl;

           bool GreaterThanEquals = (Numl >= Num2);
           cout << "Result of " << Numl << " >= " << Num2;
           cout << " test: " << GreaterThanEquals << endl;

           bool LessThanEquals = (Numl <= Num2);
           cout << "Result of " << Numl << " <= " << Num2;
           cout << " test: " << LessThanEquals << endl;

           //example 23

           //Анализ логических операторов C++ && и | |__

           cout << "Enter true(l) or false(0) for two operands:" << endl;
           bool Opl = false, Op2 = false;
           cin >> Opl;
           cin >> Op2;
           
           cout << Opl << " AND " << Op2 << " = " << (Opl && Op2) << endl;
           cout << Opl << " OR "  << Op2 << " = " << (Opl || Op2) << endl;

           //example 24

           //Использование логических операторов NOT (!)
           //и AND(&&) в условных операторах для изменения потока выполнения___
            
           cout << "Use boolean values(0 / 1) to answer the questions"
                << endl;
           cout << "Is it raining? ";
           bool Raining = false;
           cin >> Raining;
           
           cout << "Do you have buses on the streets? ";
           bool Buses = false;
           cin >> Buses;
           
            // Условный оператор использует логические операторы AND и NOT
           if (Raining && Buses)
           
               cout << "You cannot go to work" << endl;
           
           else
               cout << "You can go to work" << endl;
           
           if (Raining && Buses)
               cout << "Take an umbrella" << endl;
           
           //example 25

           //Использование побитовых операторов для выполнения
           //операций NOT, AND, OR и XOR с отдельными битами целого числа

           cout << "Enter a number (0 - 255): ";
           unsigned short InputNum = 0;
           cin >> InputNum;
           bitset<8> InputBits(InputNum);
           cout << InputNum << " in binary is " << InputBits << endl;
           bitset<8> BitwiseNOT = (-InputNum);
           cout << "Logical NOT |" << endl;
           cout << "-" << InputBits << " = " << BitwiseNOT << endl;
           cout << "Logical AND, & with 00001111" << endl;
           bitset<8> BitwiseAND = (OxOF & InputNum);
           
           // OxOF шестнадцатеричная форма числа 0001111

           cout << "0001111 & " << InputBits << " = " << BitwiseAND << endl;
           
           cout << "Logical OR, | with 00001111" << endl;
           bitset<8> BitwiseOR = (OxOF | InputNum);
           cout << "00001111 | " << InputBits << " = " << BitwiseOR << endl;
           
           cout << "Logical XOR, л with 00001111" << endl;
           bitset<8> BitwiseXOR = (OxOF ^ InputNum);
           cout << "00001111 л " << InputBits << " = " << BitwiseXOR
                << endl;

           //example 26


           cout << "Enter a number: ";

           int Input = 0;
           
           cin >> Input;
           
           int Half = Input >> 1;
           int Quarter = Input >> 2;
           int Double = Input << 1;
           int Quadruple = Input << 2;

           cout << "Quarter: " << Quarter << endl;
           cout << "Half: " << Half << endl;
           cout << "Double: " << Double << endl;
           cout << "Quadruple: " << Quadruple << endl;

           //example 27

           cout << "Enter a number: ";
           int Value = 0;
           
           
           cin >> Value;
           Value += 8;
           cout << "After + = 8, Value = " << Value << endl;
           Value -= 2;
           cout << "After - = 2, Value = " << Value << endl;
           Value /= 4;
           cout << "After / = 4, Value = " << Value << endl;
           Value *= 4;
           cout << "After * = 4, Value = " << Value << endl;
           Value %= 1000;
           cout << "After % = 1000, Value _ ii « Value « endl";
               
                // Примечание: далее присвоение происходит в пределах cout
            cout << "After « = 1, value = "  << (Value <<= 1) << endl;
            cout << "After » = 2 , value = " << (Value >>= 2) << endl;
           
            cout << "After |= 0x55, value _ и « (Value |= 0x55) « endl" << endl;
            cout << "After Л= 0x55, value = " << (Value ^= 0x55) << endl;
            cout << "After &= OxOF, value = " << (Value &= OxOF) << endl;

            //example 28

            cout << "Use sizeof of determine memory occupied by arrays"
                 << endl;
            int MyNumbers[100] = { 0 };
            
            cout << "Bytes occupied by an int: " << sizeof(int) << endl;
            cout << "Bytes occupied by array MyNumbers: "
                 << sizeof(MyNumbers) << endl;
            cout << "Bytes occupied by each element: "
                 << sizeof(MyNumbers[0]) << endl;

            //example 29

            cout << "Enter two integers: " << endl;
            int Numl = 0, Num2 = 0;
            cin >> Numl;
            cin >> Num2;
            
            cout << "Enter V m V to multiply, anything else to add: ";
            char UserSelection = '\0';
            cin >> UserSelection;
            
            int Result = 0;
            if (UserSelection == 'm') {
                Result = Numl * Num2;
            }
            else {
                Result = Numl + Num2;
            }

            cout << "Result is: " << Result << endl;

            //example 30

            cout << "Enter two numbers: " << endl;

            float Numl = 0, Num2 = 0;
            cin >> Numl;
            cin >> Num2;

            cout << "Enter ' d' to divide, anything else to multiply: ";
            char UserSelection = '\0';
            cin >> UserSelection;

            if (UserSelection == 'd'){
                cout << "You want division!" << endl;
            if (Num2 != 0){
                    cout << "No div-by-zero, proceeding to calculate"
                         << endl;
                     cout << Numl << " / " << Num2 << " = " << Numl / Num2
                          << endl;
                    }
            else
                    cout << "Division by zero is not allowed" << endl;
                }
            else
                 {
                 cout << "You want multiplication!" << endl;
                 cout << Numl << " x " << Num2 << " = " << Numl * Num2
                      << endl;
                }

            //example 31

            enum DaysOfWeek{
                Sunday = 0,
                Monday,
                Tuesday,
                Wednesday,
                Thursday,
                Friday,
                Saturday
            };

            cout << "Find what days of the week are named after!" << endl;
            cout << "Enter a number for a day (Sunday = 0): ";
            
            int Day = Sunday; // Инициализация днем Sunday
            cin >> Day;
            
            if (Day == Sunday)
                cout << "Sunday was named after the Sun" << endl;
            else if (Day == Monday)
                cout << "Monday was named after the Moon" << endl;
            else if (Day == Tuesday)
                cout << "Tuesday was named after Mars" << endl;
            else if (Day == Wednesday)
                cout << "Wednesday was named after Mercury" << endl;
            else if (Day == Thursday)
                cout << "Thursday was named after Jupiter" << endl;
            else if (Day == Friday)
                cout << "Friday was named after Venus" << endl;
            else if (Day == Saturday)
                cout << "Saturday was named after Saturn" << endl;
            else
                cout << "Wrong input, execute again" << endl;

            //example 32

            enum DaysOfWeek {
                Sunday = 0,
                Monday,
                Tuesday,
                Wednesday,
                Thursday,
                Friday,
                Saturday
            };

            cout << "Find what days of the week are named after!" << endl;
            cout << "Enter a number for a day (Sunday = 0): ";

            int Day = Sunday; // Инициализация днем Sunday
            cin >> Day;
            switch (Day)
            {
            case Sunday:
                cout << "Sunday was named after the Sun" << endl;
                break;
            case Monday:
                cout << "Monday was named after the Moon" << endl;
                break;
            case Tuesday:
                cout << "Tuesday was named after Mars" << endl;
                break;
            case Wednesday:
                cout << "Wednesday was named after Mercury" << endl;
                break;
            case Thursday:
                cout << "Thursday was named after Jupiter" << endl;
                break;
            case Friday:
                cout << "Friday was named after Venus" << endl;
                break;
            case Saturday:
                cout << "Saturday was named after Saturn" << endl;
                break;
            default:
                cout << "Wrong input, execute again" << endl;
                break;
            }

            //example 33

            cout << "Enter two numbers" << endl;
            int Numl = 0, Num2 = 0;
            cin >> Numl;
            cin >> Num2;

            int Max = (Numl > Num2) ? Numl : Num2;
            cout << "The greater of "<< Numl << " and " \
                 << Num2 << " is: "  << Max << endl;

     return 0;
}
// Определение функции
int DemoConsoleOutput() {
    cout << "This is a simple string literal" << endl;
    cout << "Writing number five: " << 5 << endl;
    cout << "Performing division 10 / 5 = " << 10 / 5 <<  endl;
    cout << "Pi when approximated is 22 / 7 = " << 22 / 7 << endl;
    cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

    return 0;
}
