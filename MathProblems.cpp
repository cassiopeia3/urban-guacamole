#include <iostream>
#include <string>

using namespace std;
 
int Guess;
int Total;

class Question
{
private:
  string Question_Text;
  string Answer_1;
  string Answer_2;
  string Answer_3;
  string Answer_4;

  int Correct_Answer;
  int Question_Score;

public:
  void setValues (string, string, string, string, string, string, int, int);
  void askQuestion ( );
}

int main ()
{
  string Name;
  int Age;
  cout << "Welcome to the Math Quiz!" << endl;
  cout << "What's your name? " << endl;
  cin >> Name;
  cout << endl;
  cout << "How old are you? " << endl;
  cin >> Age;
  cout << endl;
  string Respond;
  cout << "Are you ready to take the Quiz " << Name << "? Yes/No." << endl;
  cin >> Respond;
  if (Respond == "yes")
  {
    cout << endl;
    cout << "Okay, Good Luck!" << endl;
    cout << endl;
  }
  else
  {
    cout << "Okay, Goodbye!" << endl;
    return 0;
  }

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

q1.setValues ("What is the value of 1234 + 2341 + 3412 + 4123?", "10,000", "10,010", "10,110", "11,000", "11,110", 5, 10);
q2.setValues ("The largest prime factor of 16384 is 2 because 16384 = 2^14. What is the sum of the digits of the greatest prime number that is a divisor of 16383?", "3", "7", "10", "16", "22", 3, 10);
  q3.setValues ("At noon on a certain day, Minneapolis is x degrees warmer than St. Louis. At 4:00 the temperature in Minneapolis has fallen by 5 degrees while the temperature in St. Louis has risen by 3 degrees, at which time the 	temperatures in the two cities differ by 2 degrees. What is the product of all possible values of x?", "10", "30", "60", "100", "120", 3, 10);
  q4.setValues ("Forty slips of paper numbered 1 to 40 are placed in a hat. Alice and Bob each draw one number from the hat without replacement, keeping their numbers hidden from each other. Alice says, \"I can't tell who has the larger number.\" Then Bob says, \"I know who has the larger number.\" Alice says, \"You do? Is your number prime?\" Bob replies, \"Yes.\" Alice says, \"In that case, if I multiply your number by 100 and add my number, the result is a perfect square.\" What is the sum of the two numbers drawn from the hat?", "27", "37", "47", "57", "67", 1, 10);
  q5.setValues ("Five balls are arranged around a circle. Chris chooses two adjacent balls at random and interchanges them. Then Silva does the same, with her choice of adjacent balls to interchange being independent of Chris's. What is the expected number of balls that occupy their original positions after these two successive transpositions?", "1.6", "1.8", "2.0", "2.2", "2.4", 4, 10);
  q6.setValues ("Regular polygons with 5, 6, 7, and 8 sides are inscribed in the same circle. No two of the polygons share a vertex, and no three of their sides intersect at a common point. At how many points inside the circle do two of their sides intersect?", "52", "56", "60", "64", "68", 5, 10);
  q7.setValues ("A school has 100 students and 5 teachers. In the first period, each student is taking one class, and each teacher is teaching one class. The enrollments in the classes are 50, 20, 20, 5, and 5. Let t be the average value obtained if a teacher is picked at random and the number of students in their class is noted. Let s be the average value obtained if a student was picked at random and the number of students in their class, including the student, is noted. What is t-s?", "-18.5", "-13.5", "0", "13.5", "18.5", 2, 10);
  q8.setValues ("Emily sees a ship traveling at a constant speed along a straight section of a river. She walks parallel to the riverbank at a uniform rate faster than the ship. She counts 210 equal steps walking from the back of the ship to the front. Walking in the opposite direction, she counts 42 steps of the same size from the front of the ship to the back. In terms of Emily's equal steps, what is the length of the ship?", "70", "84", "98", "105", "126", 1, 10);
  q9.setValues ("What is the maximum number of balls of clay of radius $2$ that can completely fit inside a cube of side length $6$ assuming the balls can be reshaped but not compressed before they are packed in the cube?", "3", "4", "5", "6", "7", 4, 10);
  q10.setValues ("Menkara has a 4 times 6 index card. If she shortens the length of one side of this card by 1 inch, the card would have area 18 square inches. What would the area of the card be in square inches if instead she shortens the length of the other side by 1 inch?", "16", "17", "18", "19", "20", 5, 10);

  q1.askQuestion ();
  q2.askQuestion ();
  q3.askQuestion ();
  q4.askQuestion ();
  q5.askQuestion ();
  q6.askQuestion ();
  q7.askQuestion ();
  q8.askQuestion ();
  q9.askQuestion ();
  q10.askQuestion ();

cout << "Your total score is" << Total << "out of 100" << endl;
cout << endl;

if (Total >= 70) 
{
cout << "Great, you passed the quiz!" << endl;
cout << endl;
}
else
  {
   cout << "Sorry, you failed the quiz." << endl;
  } 
  return 0;
}

void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
Question_Text = q;
Answer_1 = a1;
Answer_2 = a2;
Answer_3 = a3;
Answer_4 = a4;
Correct_Answer = ca;
Question_Score = pa;
}

void Question::askQuestion()
{
  cout << endl;
  cout << Question_Text << endl;
  cout << "1. " << Answer_1 << endl;
  cout << "2. " << Answer_2 << endl;
  cout << "3. " << Answer_3 << endl;
  cout << "4. " << Answer_4 << endl;
  cout << endl;

  cout << "What is your answer" << endl;
  cin >> Guess;
  if (Guess == Correct_Answer)
  {
    cout << endl;
    cout << "Great! You are correct." << endl;
    Total = Total + Question_Score << "Out of " << Question_Score << "!" << endl;
    cout << endl;
  }
  else
  {
    cout << endl;
    cout << "Oh No! You are wrong." << endl;
    cout << "Score: 0" << "Out of " << Question_Score << "!";
      cout << "The correct answer is " << Correct_Answer << "." << endl;
    cout << endl;
  }
  return 0;
}

























	   
  
  
  
  
  
  
   

  


  
  
  
  
  
  

  
  
