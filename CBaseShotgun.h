#include "CTerrorGun.h"
#include "CLocalActiveShotgunData.h"

#pragma pack(push,1)
	class CBaseShotgun : 
		 public CTerrorGun // 0xcf4
	{
	public:
		CLocalActiveShotgunData	LocalShotgunData; // 0x0
	};
#pragma pack(pop)
