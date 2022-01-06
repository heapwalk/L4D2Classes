#include "CGameRulesProxy.h"
#include "CTeamplayRoundBasedRules.h"

#pragma pack(push,1)
	class CTeamplayRoundBasedRulesProxy : 
		 public CGameRulesProxy // 0x0
	{
	public:
		CTeamplayRoundBasedRules	teamplayroundbased_gamerules_data; // 0x0
	};
#pragma pack(pop)
