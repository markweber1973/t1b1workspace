/* Standard C++ includes */
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <math.h>
#include <gtest/gtest.h>
#include <databaseconnector.h>
#include <boost/shared_ptr.hpp>
#include <boost/foreach.hpp>
#include <boost/thread/thread.hpp> 
#include <unistd.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <climber.h>
#include <score.h>
#include <boulderscore.h>
#include <enrolledclimber.h>
#include <scorecard.h>
using namespace std;
using namespace t1b1dataprocessor;

std::string GetWStringFromResultSet(sql::ResultSet* res, std::string fieldName)
{
	sql::SQLString sqlString;
	sqlString = res->getString(fieldName);
	
	std::ostringstream stringStreamBuf;
	stringStreamBuf << sqlString;
	return (stringStreamBuf.str());	
}

typedef boost::shared_ptr<Climber> Climber_ptr;


int main(int argc, char **argv) {
  boost::shared_ptr<t1b1dataprocessor::databaseconnector> dbconnector(new databaseconnector);
  sql::ResultSet *res;
  res = dbconnector->executeQuery("SELECT * FROM climbers WHERE sex = 'M'");
  
  std::vector<Climber_ptr> climberList;
  ofstream myfile;
  
  while (res->next()) 
  {
	Climber_ptr localClimber( new Climber());

	localClimber->SetFirstname(GetWStringFromResultSet(res, "firstname"));
	localClimber->SetLastname(GetWStringFromResultSet(res, "lastname"));
	localClimber->SetNationality(GetWStringFromResultSet(res, "nationality"));
	climberList.push_back(localClimber);
  }
  
  myfile.open ("climbers.xml");
  
  myfile << "<allclimbers>" << std::endl; 
  BOOST_FOREACH(Climber_ptr climber, climberList)
  {
	  myfile << (*climber);
  }
  myfile << "</allclimbers>" << std::endl;
  myfile.close();
/*
  boost::shared_ptr<t1b1dataprocessor::Score> score(new Score);
  score->SetBonusAttempts(1);
  score->SetTopAttempts(3);  
  score->SetBonusReached();  
  score->SetTopReached();  
  //cout << *score;

  boost::shared_ptr<t1b1dataprocessor::BoulderScore> boulderscore(new BoulderScore);
  boulderscore->SetAttempts(5);
  boulderscore->SetFinished();
  boulderscore->SetNumber(1);
  boulderscore->SetScore(score);
  //cout << *boulderscore;
  
  
  boost::shared_ptr<Score> aScore (new Score);
  boost::shared_ptr<BoulderScore> aBoulderScore (new BoulderScore);
  
  aScore->SetBonusAttempts(1);
  aScore->SetBonusReached();
  aScore->SetTopReached();
  aScore->SetTopAttempts(1);
  aBoulderScore->SetScore(aScore);
  aBoulderScore->SetNumber(13);
  aBoulderScore->SetFinished();
  aBoulderScore->SetAttempts(1);
  
  boost::shared_ptr<Score> bScore (new Score);
  boost::shared_ptr<BoulderScore> bBoulderScore (new BoulderScore);
  
  bScore->SetBonusAttempts(5);
  bScore->SetBonusReached();
  bScore->SetTopReached();
  bScore->SetTopAttempts(5);
  bBoulderScore->SetScore(aScore);
  bBoulderScore->SetNumber(11);
  bBoulderScore->SetFinished();
  bBoulderScore->SetAttempts(10); 
  
  boost::shared_ptr<Climber> someClimber (new Climber);
  someClimber->SetFirstname("Mark");
  someClimber->SetLastname("Weber");
  someClimber->SetSex(male);
  
  boost::shared_ptr<EnrolledClimber> enrolledClimber (new EnrolledClimber(5, someClimber));  
  boost::shared_ptr<ScoreCard> someCard (new ScoreCard(enrolledClimber));
  
  someCard->AddScore(aBoulderScore);
  someCard->AddScore(bBoulderScore);
  
  cout << *someCard;
  */
  return 0;
}

