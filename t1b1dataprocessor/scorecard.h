#ifndef SCORECARD_H
#define SCORECARD_H

#include <vector>
#include <boost/shared_ptr.hpp>
#include "enrolledclimber.h"
#include "boulderscore.h"
#include "totalscore.h"


namespace t1b1dataprocessor
{
class ScoreCard {

public:
	ScoreCard(boost::shared_ptr<EnrolledClimber> enrolledClimber);
	~ScoreCard();
  
  bool operator==(const ScoreCard& otherScoreCard) const;
  bool operator!=(const ScoreCard& otherScoreCard) const;  
  bool operator<(const ScoreCard& otherScoreCard) const;
  bool operator>(const ScoreCard& otherScoreCard) const;
  
  friend std::ostream& operator<<(std::ostream& os, const ScoreCard& aScoreCard);
  void printOn(std::ostream&) const;
  
  void AddScore(boost::shared_ptr<BoulderScore> score);
  std::vector< boost::shared_ptr<BoulderScore> > GetHitlist() const;
  
  boost::shared_ptr<TotalScore> GetTotalScore();
 
private:
  std::vector< boost::shared_ptr<BoulderScore> > m_hitlist;
  boost::shared_ptr<EnrolledClimber> m_climber;    
};

}

#endif // SCORECARD_H
