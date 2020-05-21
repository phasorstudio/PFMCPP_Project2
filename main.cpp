#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int
 double
 float
 bool
 char
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int velocity = 98;
    int velocityMax = 127;
    int velocityMin = 64;

    double height = 1.83;
    double width = 2.50;
    double length = 4.583;

    float pi = 3.1415926f;
    float gravity = 6.67430f;
    float gain = 1.0f;

    bool off = false;
    bool startGame = true;
    bool gameOver = false;
    
    ignoreUnused(number, velocity, velocityMax, velocityMin, height, width, length, pi, gravity, gain, off, startGame, gameOver); //passing each variable declared to the ignoreUnused() function
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)Rent a bike
 */
bool rentBike(double rentDate, int amountOfMoney = 10)
{
  ignoreUnused(rentDate, amountOfMoney);

  return{};
}
/*
 2)Play sound
 */
void playSound(float wavFile, float fs = 44100.0f)
{
 ignoreUnused(wavFile, fs);
}
/*
 3)Phaser
 */
float phaser(float inputSig, float rate = 0.1f, float depth = 1.0f)
{ 
    ignoreUnused(inputSig, rate, depth); 
    return {}; 
} 
/*
 4)input gain
 */
bool inputGain(float meter, float volume = 1.0f, int style = 3)  
{ 
    ignoreUnused(meter, volume, style); 
    return {}; 
} 
/*
 5)grill meat
 */
void grillMeat(double amountMeat, bool lemon = true)
{ 
    ignoreUnused(amountMeat, lemon); 
} 
/*
 6) adress number
 */
int getAdressNumber(int adressNumber)
{
  ignoreUnused(adressNumber);
  return {};
}
/*
 7)build level
 */
int buildLevel(bool isHouse, double priceOfMaterials)
{
    ignoreUnused(isHouse, priceOfMaterials); 
    return {};
}
/*
 8)abort mission
 */
void abortMission(double countdown = 0.0, bool gunLoaded = false)
{ 
    ignoreUnused(countdown, gunLoaded);
} 
/*
 9)Take away
 */
float takeAway(int coffee, int sugar = 2, double milk = 2.5)
{ 
    ignoreUnused(coffee, sugar, milk); 
    return {}; 
} 
/*
 10)LieDetector?
 */
int lieDetector(int kindOfInfo, int context = 2, int history = 6)
{ 
    ignoreUnused(kindOfInfo, context, history); 
    return {}; 
} 
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto bike = rentBike(4, 10);
    //2)
    playSound(2.0f, 44100.0f);
    //3)
    auto phase = phaser(0.4f, 0.2f, 0.1f);
    //4)
    auto gain = inputGain(1.0f, 3);
    //5)
    grillMeat(3, true);
    //6)
    auto adress = getAdressNumber(46);
    //7)
    auto build = buildLevel(true, 100.000);
    //8)
    abortMission(0.0, false);
    //9)
    auto away =takeAway(1 , 2 , 2.5);
    //10)
    auto lie =lieDetector(2, 6);
    
    ignoreUnused(carRented, bike, phase, gain, adress, build,away, lie);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
