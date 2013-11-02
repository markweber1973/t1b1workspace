#ifndef TOTALSCORE_H
#define TOTALSCORE_H

#include "score.h"
#include "subscore.h"
#include <boost/shared_ptr.hpp>


namespace t1b1dataprocessor
{

class TotalScore {

public:
	TotalScore();
	~TotalScore() {};
  
  bool operator==(const TotalScore& otherScore) const;
  bool operator!=(const TotalScore& otherScore) const;  
  bool operator<(const TotalScore& otherScore) const;
  bool operator>(const TotalScore& otherScore) const;
  bool operator<=(const TotalScore& otherScore) const;
  bool operator>=(const TotalScore& otherScore) const;

  friend std::ostream& operator<<(std::ostream& os, const TotalScore& aScore);
  void printOn(std::ostream&) const;
  void AddScore(const Score& score);
  unsigned int GetNrOfTops()          const {return m_topScore->GetHits();};
  unsigned int GetNrOfBonusses()      const {return m_bonusScore->GetHits();};
  unsigned int GetNrOfTopAttempts()   const {return m_topScore->GetAttempts();};
  unsigned int GetNrOfBonusAttempts() const {return m_bonusScore->GetAttempts();};
  
private:
  boost::shared_ptr<SubScore> m_topScore;
  boost::shared_ptr<SubScore> m_bonusScore;
};

}

#endif // TOTALSCORE_H
