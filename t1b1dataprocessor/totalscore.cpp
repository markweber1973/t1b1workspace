#include "totalscore.h"
#include <iostream>

namespace t1b1dataprocessor
{

TotalScore::TotalScore()
{
  m_topScore.reset(new SubScore());
  m_bonusScore.reset(new SubScore());
}

void TotalScore::AddScore(const Score& score)
{
  if (score.GetTopReached())
  {
    m_topScore->AddHit();
    m_topScore->AddAttempts(score.GetTopAttempts());
  }
  if (score.GetBonusReached())
  {
    m_bonusScore->AddHit();
    m_bonusScore->AddAttempts(score.GetBonusAttempts());
  }
}

bool TotalScore::operator==(const TotalScore& otherScore) const
{
  return (
    (GetNrOfTops() == otherScore.GetNrOfTops()) &&
    (GetNrOfBonusses() == otherScore.GetNrOfBonusses()) &&
    (GetNrOfTopAttempts() == otherScore.GetNrOfTopAttempts()) &&
    (GetNrOfBonusAttempts() == otherScore.GetNrOfBonusAttempts())
  );
}

bool TotalScore::operator!=(const TotalScore& otherScore) const
{
  return !(*this == otherScore); 
}

bool TotalScore::operator<(const TotalScore& otherScore) const
{
  if (GetNrOfTops() < otherScore.GetNrOfTops())
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool TotalScore::operator>(const TotalScore& otherScore) const
{
  return (!(*this < otherScore) && !(*this == otherScore));
}

bool TotalScore::operator<=(const TotalScore& otherScore) const
{
  return (!(*this > otherScore));
}

bool TotalScore::operator>=(const TotalScore& otherScore) const
{
  return (!(*this < otherScore));
}

void TotalScore::printOn(std::ostream& strm) const
{
  
	strm << "<totalscore>" << std::endl;
  strm << "<nroftops>"; GetNrOfTops();	strm << "</nroftops>" << std::endl;
  strm << "<nrofbonusses>"; GetNrOfBonusses();	strm << "</nrofbonusses>" << std::endl;
  strm << "<nroftopattempts>"; GetNrOfTopAttempts();	strm << "</nroftopattempts>" << std::endl;  
  strm << "<nrofbonusattempts>"; GetNrOfBonusAttempts();	strm << "</nrofbonusattempts>" << std::endl;
	
  strm << "<stringvalue>";  
  strm << GetNrOfTops();  strm << "T"; strm << GetNrOfTopAttempts();
  strm << " ";
  strm << GetNrOfBonusses(); strm << "B"; strm << GetNrOfBonusAttempts();
	strm << "</stringvalue>" << std::endl;
	strm << "</totalscore>" << std::endl;	
}

std::ostream& operator<<(std::ostream& os, const TotalScore& aScore)
{
	aScore.printOn(os);
  return os;
}

}

