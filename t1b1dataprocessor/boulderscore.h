#ifndef BOULDERSCORE_H
#define BOULDERSCORE_H

#include <boost/shared_ptr.hpp>
#include "score.h"

namespace t1b1dataprocessor
{

class BoulderScore {

public:
	BoulderScore();
	~BoulderScore();

  friend std::ostream& operator<<(std::ostream& os, const BoulderScore& aScore);
  void printOn(std::ostream&) const;

  void SetNumber(unsigned int number);
  void SetAttempts(unsigned int attempts); 
  void SetFinished();
  void SetScore(boost::shared_ptr<Score> score);

private:
  boost::shared_ptr<Score> m_score;
  bool m_finished;
  unsigned int m_attempts;
  unsigned int m_number;
};

}

#endif // BOULDERSCORE_H
