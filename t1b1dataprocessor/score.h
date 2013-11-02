#ifndef SCORE_H
#define SCORE_H
#include <string>
namespace t1b1dataprocessor
{

class Score {

public:
	Score();
	~Score();

//  Climber operator+(const Score& otherScore) const;
  bool operator==(const Score& otherScore) const;
  bool operator!=(const Score& otherScore) const;  
  bool operator<(const Score& otherScore) const;
  bool operator>(const Score& otherScore) const;
  friend std::ostream& operator<<(std::ostream& os, const Score& aScore);
  void printOn(std::ostream&) const;
  
  void SetTopReached();
  void SetBonusReached();
  bool GetTopReached() const;
  bool GetBonusReached() const ;
  void SetTopAttempts(unsigned int attempts);
  void SetBonusAttempts(unsigned int attempts);  
  unsigned int GetTopAttempts() const;
  unsigned int GetBonusAttempts() const;  
  bool ScoreIsValid() const;
  std::string Score2String();

private:
  
  bool m_topReached;
  unsigned int m_topAttempts;
  bool m_bonusReached;
  unsigned int m_bonusAttempts;
};

}

#endif // SCORE_H
