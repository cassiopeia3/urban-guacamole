#include <iostream>
#include <string>

using namespace std;

int Guess;
int Number_Theory, Algebra, Geometry, Combinatorics;

class Question
{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    string Answer_5;
    string Problem_Type;

    int Correct_Answer;

public:
    void setValues(string, string, string, string, string, string, string, int);
    void askQuestion();
};

int main()
{
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;
    Question q11;
    Question q12;
    Question q13;
    Question q14;
    Question q15;
    Question q16;
    Question q17;
    Question q18;
    Question q19;
    Question q20;

    q1.setValues("What is the value of 1234 + 2341 + 3412 + 4123?",
        "10,000", "10,010", "10,110", "11,000", "11,110", "Number Theory", 5);
    q2.setValues("The largest prime factor of 16384 is 2 because 16384 = 2^14. What is the sum of the digits of the greatest prime number that is a divisor of 16383?",
        "3", "7", "10", "16", "22", "Number Theory", 3);
    q3.setValues("At noon on a certain day, Minneapolis is x degrees warmer than St. Louis. At 4:00 the temperature in Minneapolis has fallen by 5 degrees while the temperature in St. Louis has risen by 3 degrees, at which time the 	temperatures in the two cities differ by 2 degrees. What is the product of all possible values of x?",
        "10", "30", "60", "100", "120", "Algebra", 3);
    q4.setValues("Forty slips of paper numbered 1 to 40 are placed in a hat. Alice and Bob each draw one number from the hat without replacement, keeping their numbers hidden from each other. Alice says, \"I can't tell who has the larger number.\" Then Bob says, \"I know who has the larger number.\" Alice says, \"You do? Is your number prime?\" Bob replies, \"Yes.\" Alice says, \"In that case, if I multiply your number by 100 and add my number, the result is a perfect square.\" What is the sum of the two numbers drawn from the hat?",
        "27", "37", "47", "57", "67", "Number Theory", 1);
    q5.setValues("Five balls are arranged around a circle. Chris chooses two adjacent balls at random and interchanges them. Then Silva does the same, with her choice of adjacent balls to interchange being independent of Chris's. What is the expected number of balls that occupy their original positions after these two successive transpositions?",
        "1.6", "1.8", "2.0", "2.2", "2.4", "Combinatorics", 4);
    q6.setValues("Regular polygons with 5, 6, 7, and 8 sides are inscribed in the same circle. No two of the polygons share a vertex, and no three of their sides intersect at a common point. At how many points inside the circle do two of their sides intersect?",
        "52", "56", "60", "64", "68", "Geometry", 5);
    q7.setValues("A school has 100 students and 5 teachers. In the first period, each student is taking one class, and each teacher is teaching one class. The enrollments in the classes are 50, 20, 20, 5, and 5. Let t be the average value obtained if a teacher is picked at random and the number of students in their class is noted. Let s be the average value obtained if a student was picked at random and the number of students in their class, including the student, is noted. What is t-s?",
        "-18.5", "-13.5", "0", "13.5", "18.5", "Algebra", 2);
    q8.setValues("Emily sees a ship traveling at a constant speed along a straight section of a river. She walks parallel to the riverbank at a uniform rate faster than the ship. She counts 210 equal steps walking from the back of the ship to the front. Walking in the opposite direction, she counts 42 steps of the same size from the front of the ship to the back. In terms of Emily's equal steps, what is the length of the ship?",
        "70", "84", "98", "105", "126", "Algebra", 1);
    q9.setValues("What is the maximum number of balls of clay of radius $2$ that can completely fit inside a cube of side length $6$ assuming the balls can be reshaped but not compressed before they are packed in the cube?",
        "3", "4", "5", "6", "7", "Geometry", 4);
    q10.setValues("Menkara has a 4 times 6 index card. If she shortens the length of one side of this card by 1 inch, the card would have area 18 square inches. What would the area of the card be in square inches if instead she shortens the length of the other side by 1 inch?",
        "16", "17", "18", "19", "20", "Algebra", 5);
    q11.setValues("Which of the following conditions is sufficient to guarantee that integers x, y, and z satisfy the equation x(x-y)+y(y-z)+z(z-x) = 1?",
        "x>y and y=z", "x=y-1 and y=x-1", "x=z+1 and y=x+1", "x=z and y-1=x", "x+y+z=1", "Algebra", 4);
    q12.setValues(" Una rolls 6 standard 6-sided dice simultaneously and calculates the product of the 6 numbers obtained. What is the probability that the product is divisible by 4?",
        "3/4", "57/64", "59/64", "187/192", "63/64", "Combinatorics", 3);
    q13.setValues("Distinct lines l and m lie in the xy-plane. They intersect at the origin. Point P(-1, 4) is reflected about line l to point P', and then P' is reflected about line m to point P''. The equation of line l is 5x - y = 0, and the coordinates of P'' are (4,1). What is the equation of line m?",
        "5x+2y=0", "3x+2y=0", "x-3y=0", "2x-3y=0", "5x-3y=0", "Geometry", 4);
    q14.setValues("Let N be the positive integer 7777...777, a 313-digit number where each digit is a 7. Let f(r) be the leading digit of the rth root of N. What is f(2)+f(3)+f(4)+f(5)+f(6)?",
        "8", "9", "11", "22", "29", "Number Theory", 1);
    q15.setValues("In a particular game, each of 4 players rolls a standard 6-sided die. The winner is the player who rolls the highest number. If there is a tie for the highest roll, those involved in the tie will roll again and this process will continue until one player wins. Hugo is one of the players in this game. What is the probability that Hugo's first roll was a 5, given that he won the game?",
        "61/216", "367/1296", "41/144", "185/648", "11/36", "Combinatorics", 3);
    q16.setValues("For each integer n>=2, let S_n be the sum of all products jk, where j and k are integers and 1<=j<k<=n. What is the sum of the 10 least values of n such that S_n is divisible by 3?",
        "196", "197", "198", "199", "200", "Number Theory", 2);
    q17.setValues("A cube is constructed from 4 white unit cubes and $4$ blue unit cubes. How many different ways are there to construct the 2*2*2 cube using these smaller cubes? (Two constructions are considered the same if one can be rotated to match the other.)",
        "7", "8", "9", "10", "11", "Combinatorics", 1);
    q18.setValues("Each of the 5 sides and the 5 diagonals of a regular pentagon are randomly and independently colored red or blue with equal probability. What is the probability that there will be a triangle whose vertices are among the vertices of the pentagon such that all of its sides have the same color?",
        "2/3", "105/128", "125/128", "253/257", "1", "Combinatorics", 4);
    q19.setValues("In square ABCD, points P and Q lie on AD and AB, respectively. Segments BP and CQ intersect at right angles at R, with BR=6 and PR=7. What is the area of the square?",
        "85", "93", "100", "117", "125", "Geometry", 4);
    q20.setValues("Three identical square sheets of paper each with side length 6 are stacked on top of each other. The middle sheet is rotated clockwise 30 degrees about its center and the top sheet is rotated clockwise 60 degrees about its center, resulting in a 24-sided polygon. The area of this polygon can be expressed in the form a-b*sqrt(c), where a, b, and c are positive integers, and c is not divisible by the square of any prime. What is a+b+c?",
        "75", "93", "96", "129", "147", "Geometry", 5);
    q1.askQuestion();
    q2.askQuestion();
    q3.askQuestion();
    q4.askQuestion();
    q5.askQuestion();
    q6.askQuestion();
    q7.askQuestion();
    q8.askQuestion();
    q9.askQuestion();
    q10.askQuestion();
    q11.askQuestion();
    q12.askQuestion();
    q13.askQuestion();
    q14.askQuestion();
    q15.askQuestion();
    q16.askQuestion();
    q17.askQuestion();
    q18.askQuestion();
    q19.askQuestion();
    q20.askQuestion();

    cout << "Statistics:" << endl;
    cout << "Number Theory: " << Number_Theory << endl;
    cout << "Algebra: " << Algebra << endl;
    cout << "Geometry: " << Geometry << endl;
    cout << "Combinatorics: " << Combinatorics << endl;
}
    void Question::setValues(string q, string a1, string a2, string a3, string a4, string a5, string pt, int ca)
    {
        Question_Text = q;
        Answer_1 = a1;
        Answer_2 = a2;
        Answer_3 = a3;
        Answer_4 = a4;
        Answer_5 = a5;
        Correct_Answer = ca;
        Problem_Type = pt;
    }

    void Question::askQuestion()
    {
        cout << endl;
        cout << Question_Text << endl;
        cout << "1. " << Answer_1 << endl;
        cout << "2. " << Answer_2 << endl;
        cout << "3. " << Answer_3 << endl;
        cout << "4. " << Answer_4 << endl;
        cout << "5. " << Answer_4 << endl;
        cout << endl;

        cout << "What is your answer?" << endl;
        cin >> Guess;
        if (Guess == Correct_Answer)
        {
            if (Problem_Type == "Number Theory") { Number_Theory++; }
            else if (Problem_Type == "Algebra") { Algebra++; }
            else if (Problem_Type == "Geomemtry") { Geometry++; }
            else { Combinatorics++; }
        }
    }
