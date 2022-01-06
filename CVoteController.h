#include "CBaseEntity.h"

#pragma pack(push,1)
	class CVoteController : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x48];
		int    	m_activeIssueIndex; // 0x644
		int    	m_onlyTeamToVote; // 0x648
		int    	m_votesYes; // 0x64c
		int    	m_votesNo; // 0x650
		int    	m_potentialVotes; // 0x654
	};
#pragma pack(pop)
