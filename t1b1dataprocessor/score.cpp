#include "score.h"
#include "assert.h"
#include <iostream>

namespace t1b1dataprocessor
{

Score::Score()
{
  m_topReached = false;
  m_bonusReached = false;
  m_topAttempts = 0;
  m_bonusAttempts = 0;
}

Score::~Score()
{
}

bool Score::ScoreIsValid() const
{
  if (m_topReached)
  {
    return (m_bonusReached && (m_topAttempts > 0) && (m_bonusAttempts > 0));
  }
  else if (m_bonusReached)
  {
    return (m_bonusAttempts > 0);
  }
  else
  {
    return true;
  }
}

bool Score::operator==(const Score& otherScore) const
{
  assert(ScoreIsValid() && otherScore.ScoreIsValid());
  if (m_topReached && otherScore.GetTopReached())
  {
    return ((m_topAttempts == otherScore.GetTopAttempts()) && (m_bonusAttempts == otherScore.GetBonusAttempts()));
  }
  else if ((m_bonusReached && !m_topReached) && (otherScore.GetBonusReached() && !otherScore.GetTopReached()))
  {
    return (m_bonusAttempts == otherScore.GetBonusAttempts());
  }
  else if (!m_bonusReached && !m_topReached && !otherScore.GetBonusReached() && !otherScore.GetTopReached())
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Score::operator!=(const Score& otherScore) const
{
  return !(*this == otherScore);
}

bool Score::operator<(const Score& otherScore) const
{
  if (m_topReached && otherScore.GetTopReached())
  {
    if (m_topAttempts > otherScore.GetTopAttempts())
    {
      return true;
    }
    else if (m_topAttempts < otherScore.GetTopAttempts())
    {
      return false;
    }
    else if (m_bonusAttempts > otherScore.GetBonusAttempts())
    {
      return true;
    }
    else
    {
      return false;      
    }
  }
  else if (!m_topReached && otherScore.GetTopReached())
  {
    return true;
  }
  else if (m_topReached && !otherScore.GetTopReached())
  {
    return false;
  }
  else if (!m_bonusReached && otherScore.GetBonusReached())
  {
    return true;   
  }
  else if (m_bonusReached && !otherScore.GetBonusReached())    
  {
    return false;
  }
  else if (m_bonusReached && otherScore.GetBonusReached()) 
  {
    if (m_bonusAttempts > otherScore.GetBonusAttempts())
    {    
      return true;
    }
    else 
    {
      return false;
    }
  }
  else
  {
    return false;
  }
}

bool Score::operator>(const Score& otherScore) const
{
  return (!(*this < otherScore) && !(*this == otherScore));
}

void Score::SetTopReached()
{
  m_topReached = true;
}

void Score::SetBonusReached()
{
  m_bonusReached = true;
}

bool Score::GetTopReached() const
{
  return (m_topReached);
}

bool Score::GetBonusReached() const
{
  return (m_bonusReached);
}

void Score::SetTopAttempts(unsigned int attempts)
{
  m_topAttempts = attempts;
}

void Score::SetBonusAttempts(unsigned int attempts)
{
  m_bonusAttempts = attempts;
}

unsigned int Score::GetTopAttempts() const
{
  return m_topAttempts;
}

unsigned int Score::GetBonusAttempts() const
{
  return m_bonusAttempts;
}

void Score::printOn(std::ostream& strm) const
{
	strm << "<score>" << std::endl;
  strm << "<topped>";   if (m_topReached) {strm << "Y";} else {strm << "N";};	  strm << "</topped>"   << std::endl;
	strm << "<bonussed>";	if (m_bonusReached) {strm << "Y";} else {strm << "N";};	strm << "</bonussed>" << std::endl;
	strm << "<topattempts>"    << m_topAttempts   << "</topattempts>"    << std::endl;
	strm << "<bonusattempts>"    << m_bonusAttempts   << "</bonusattempts>"    << std::endl;
	
  strm << "<stringvalue>T";
  if (m_topReached) strm << m_topAttempts;
  else strm << "-";
	strm << "B";  
  if (m_bonusReached) strm << m_bonusAttempts;
  else strm << "-" << std::endl;;
	strm << "</stringvalue>" << std::endl;  
	strm << "</score>" << std::endl;	
}

std::ostream& operator<<(std::ostream& os, const Score& aScore)
{
	aScore.printOn(os);
  return os;
}
}

