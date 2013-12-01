#include <scorecard.h>
#include <iostream>
#include <boost/foreach.hpp>

namespace t1b1dataprocessor
{

ScoreCard::ScoreCard(boost::shared_ptr<EnrolledClimber> enrolledClimber)
{
  m_climber = enrolledClimber;
}

ScoreCard::~ScoreCard()
{
}

class Criterium
{
public:
    bool operator()(const BoulderScore& left, const BoulderScore& right)const 
    { 
      return left.GetBoulderId()  > right.GetBoulderId();
    };
};

void ScoreCard::AddScore(boost::shared_ptr<BoulderScore> score)
{
  m_hitlist.push_back(score);
  
  Criterium criterium;
  std::sort(m_hitlist.begin(), m_hitlist.end(),
     [&criterium] (const boost::shared_ptr<BoulderScore> &l, const boost::shared_ptr<BoulderScore> &r)
     {
         return criterium(*l.get(), *r.get());
     });
}

std::vector< boost::shared_ptr<BoulderScore> > ScoreCard::GetHitlist() const
{
  return m_hitlist;
}

bool ScoreCard::operator==(const ScoreCard& otherScoreCard) const
{
  return false;  
}

bool ScoreCard::operator!=(const ScoreCard& otherScoreCard) const
{
  return !(*this == otherScoreCard);
}

boost::shared_ptr<TotalScore> ScoreCard::GetTotalScore()
{
  
}

bool ScoreCard::operator<(const ScoreCard& otherScoreCard) const
{
  unsigned int nrOfTopHits = 0;
  unsigned int nrOfBonusHits = 0;
  unsigned int nrOfTopAttempts = 0;
  unsigned int nrOfBonusAttempts = 0;
  
  BOOST_FOREACH(boost::shared_ptr<BoulderScore> localScore, m_hitlist)
  {
    if (localScore->IsTopHit())
    {
      nrOfTopHits++;
      nrOfTopAttempts+=localScore->GetTopAttempts();
    }
    if (localScore->IsBonusHit())
    {
      nrOfBonusHits++;
      nrOfBonusAttempts+=localScore->GetBonusAttempts();
    }
  }
  boost::scoped_ptr<TotalScore> thisTotal (new TotalScore(nrOfTopHits, nrOfTopAttempts, nrOfBonusHits, nrOfBonusAttempts));

  nrOfTopHits = 0;
  nrOfBonusHits = 0;
  nrOfTopAttempts = 0;
  nrOfBonusAttempts = 0;
  BOOST_FOREACH(boost::shared_ptr<BoulderScore> localScore, otherScoreCard.m_hitlist)
  {
    if (localScore->IsTopHit())
    {
      nrOfTopHits++;
      nrOfTopAttempts+=localScore->GetTopAttempts();
    }
    if (localScore->IsBonusHit())
    {
      nrOfBonusHits++;
      nrOfBonusAttempts+=localScore->GetBonusAttempts();
    }
  }  
  boost::scoped_ptr<TotalScore> otherTotal (new TotalScore(nrOfTopHits, nrOfTopAttempts, nrOfBonusHits, nrOfBonusAttempts));  
  
  return *thisTotal < *otherTotal;
}

bool ScoreCard::operator>(const ScoreCard& otherScoreCard) const
{
  return (!(*this < otherScoreCard) && !(*this == otherScoreCard)); 
}

void ScoreCard::printOn(std::ostream& strm) const
{
	strm << "<scorecard>" << std::endl;
  strm << *m_climber;
  BOOST_FOREACH(boost::shared_ptr<BoulderScore> localscore, m_hitlist)
  {
    strm << *localscore;
  }
  
	strm << "</scorecard>" << std::endl;	
}

std::ostream& operator<<(std::ostream& os, const ScoreCard& aScoreCard)
{
	aScoreCard.printOn(os);
  return os;
}

}

