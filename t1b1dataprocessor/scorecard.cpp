#include "scorecard.h"
#include <iostream>
#include <boost/foreach.hpp>

namespace t1b1dataprocessor
{

ScoreCard::ScoreCard(boost::shared_ptr<EnrolledClimber> enrolledClimber)
{
  m_climber = enrolledClimber;
  m_totalScore.reset(new TotalScore());
}

ScoreCard::~ScoreCard()
{
}

void ScoreCard::AddScore(boost::shared_ptr<BoulderScore> score)
{
  m_hitlist.push_back(score);
  //m_totalScore->AddScore(*score);
}

bool ScoreCard::operator==(const ScoreCard& otherScoreCard) const
{
  return false;  
}

bool ScoreCard::operator!=(const ScoreCard& otherScoreCard) const
{
  return !(*this == otherScoreCard);
}

bool ScoreCard::operator<(const ScoreCard& otherScoreCard) const
{
  
}

bool ScoreCard::operator>(const ScoreCard& otherScoreCard) const
{
  return (!(*this < otherScoreCard) && !(*this == otherScoreCard)); 
}

void ScoreCard::printOn(std::ostream& strm) const
{
	strm << "<scorecard>" << std::endl;
  strm << *m_climber;
  BOOST_FOREACH(boost::shared_ptr<BoulderScore> score, m_hitlist)
  {
    strm << *score;
  }
  
	strm << "</scorecard>" << std::endl;	
}

std::ostream& operator<<(std::ostream& os, const ScoreCard& aScoreCard)
{
	aScoreCard.printOn(os);
  return os;
}

}

