#include <iostream>
#include <vector>

using namespace std;

//prototypes:
bool isPositive(int);
void fillWith(vector <int> &, int);
void printVector(vector <int> &);

/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions
bool isPositive(int number)
{
  if (number>0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

void fillWith(vector<int> &workGrade, int value)
{
  for (int i=0; i<workGrade.size(); i++)
  {
    workGrade[i]=value;
  }
}

void printVector(vector<int> &quizGrade)
{
  for (int i=0; i<quizGrade.size(); i++)
  {
    cout<<quizGrade[i]<<" ";
  }
}
