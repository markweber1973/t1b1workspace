#include "boulderscore.h"

namespace t1b1dataprocessor
{

BoulderScore::BoulderScore()
{
  m_finished = false;
  m_number = 0;
}

BoulderScore::~BoulderScore()
{
}

void BoulderScore::SetNumber(unsigned int number)
{
  m_number = number;
}

void BoulderScore::SetAttempts(unsigned int attempts)
{
  m_attempts = attempts;
}

void BoulderScore::SetFinished()
{
  m_finished = true;
}

void BoulderScore::SetScore(boost::shared_ptr<Score> score)
{
  m_score = score;
}

void BoulderScore::printOn(std::ostream& strm) const
{
	strm << "<boulderscore>" << std::endl;
  strm << "<number>"    << m_number   << "</number>"    << std::endl;
  strm << "<finished>";   if (m_finished) {strm << "Y";} else {strm << "N";};	  strm << "</finished>"   << std::endl;
	strm << "<attempts>"    << m_attempts   << "</attempts>"    << std::endl;
	strm << *m_score; 
	strm << "</boulderscore>" << std::endl;	
}

std::ostream& operator<<(std::ostream& os, const BoulderScore& aScore)
{
	aScore.printOn(os);
  return os;
}
}

